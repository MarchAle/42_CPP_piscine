#include "../incs/BitcoinExchange.hpp"

/*#################### CANONICAL FORM ####################*/
BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &src){*this = src;}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src){return (*this); (void)src;}
BitcoinExchange::~BitcoinExchange(){}

/*#################### MEMBER FUNCITONS ####################*/
std::vector<std::string>    BitcoinExchange::split(std::string &line, char delim)
{
    std::string                 tmp = line;
	std::stringstream           ss(line);
	std::vector<std::string>    result;
	while (getline(ss, tmp, delim))
		result.push_back(tmp);
	return (result);
}

int BitcoinExchange::dateToTimestamp(std::string date)
{
    date.erase(4, 1);
    date.erase(6, 1);
    return (std::atoi(date.c_str()));
}

int BitcoinExchange::error(int code, std::string &line)
{
    if (code == VALID)
        return (code);
    if (code == FORMAT)
        std::cerr << RED << "Error: bad input => " << line << "  [\"YYYY-MM-DD | value\" format required]" << END << std::endl;
    if (code == BBTC)
        std::cerr << RED << "Error: date before btc creation => " << split(line, '|')[0] << "[2009-01-02 btc is born]" << END << std::endl;
    if (code == NEGATIVE_VALUE)
        std::cerr << RED << "Error: value is negative =>" << split(line, '|')[1] << " [min value: 0]" << END << std::endl;
    if (code == TOO_LARGE_VALUE)
        std::cerr << RED << "Error: too large value =>" << split(line, '|')[1] << " [max value: 1000]" << END << std::endl;
    if (code == VALUE_ERR)
        std::cerr << RED << "Error: incorrect value =>" << split(line, '|')[1] << END << std::endl;

    return (INVALID);
}

int BitcoinExchange::isNum(std::string date)
{
    for (std::string::iterator it = date.begin(); it != date.end(); it++)
    {
        if (!std::isdigit(*it) && *it != '-')
        {
            std::cout << *it << std::endl;
            return(1);
        }
    }
    return (0);
}

int BitcoinExchange::isFloat(std::string value)
{
    int dot = 0;

    for (size_t i = 0; i < value.length(); i++)
    {
        if (value[i] == '.')
        {
            dot++;
            if (dot > 1 || i == 0 || i == value.length() - 1)
                return (VALUE_ERR);
        }
        if (!std::isdigit(value[i]) && value[i] != '.')
            return(VALUE_ERR);
    }
    if (dot == 1)
        return (1);
    else
        return (0);
}

int BitcoinExchange::checkExistingDate(int year, int month, int day)
{
    if (month > 12 
        || (((month % 2 != 0 && month <= 7) || (month % 2 == 0 && month > 7)) && day > 31) 
        || (((month % 2 == 0 && month <= 7) || (month % 2 != 0 && month > 7)) && day > 30) 
        || ((year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) && month == 02 && day > 28) 
        || (year % 4 == 0 && month == 02 && day > 29))
        return (INVALID);
    return (VALID);
}

int BitcoinExchange::checkDate(std::string &date)
{
    date.erase(date.length() - 1, 1);
    std::vector<std::string> splitedDate = split(date, '-');
    if (date.length() != 10 || splitedDate.size() != 3
        || splitedDate[0].length() != 4 || splitedDate[1].length() != 2 || splitedDate[2].length() != 2
        || isNum(date))
        return (FORMAT);
    int year = std::atoi(splitedDate[0].c_str());
    int month = std::atoi(splitedDate[1].c_str());
    int day = std::atoi(splitedDate[2].c_str());
    if (checkExistingDate(year, month, day) == INVALID)
        return (FORMAT);
    if (dateToTimestamp(date) < 20090102)
        return (BBTC);
    return (VALID);
}

int BitcoinExchange::checkValue(std::string &value)
{
    if (value[0] != ' ')
        return (FORMAT);
    if (value[1] == '-')
        return (NEGATIVE_VALUE);
    if (isFloat(value.c_str() + 1) == VALUE_ERR)
        return (VALUE_ERR);
    if (std::atol(value.c_str()) > 1000 || value.length() > 10)
        return (TOO_LARGE_VALUE);
    return (VALID);
}

int BitcoinExchange::inputLineFormat(std::string &line)
{
    std::vector<std::string> splitedLine = split(line, '|');
    if (splitedLine.size() != 2)
        return (error(FORMAT, line));
    std::string date = splitedLine[0];
    if (error(checkDate(date), line) == INVALID)
        return (INVALID);

    std::string value = splitedLine[1];
    if (error(checkValue(value), line) == INVALID)
        return (INVALID);

    return (VALID);
}

void    BitcoinExchange::calculBalance(std::string &line, std::vector<std::pair<int, float> > &historic)
{
    std::vector<std::string> splitedLine = split(line, '|');
    int dateTimestamp = dateToTimestamp(splitedLine[0].erase(10, 1));
    float value = std::atof(splitedLine[1].c_str() + 1);

    std::vector<std::pair<int, float> >::iterator it = historic.begin();
    std::vector<std::pair<int, float> >::iterator end = historic.end() - 1;

    
    while (dateTimestamp > (*it).first && it != end)
        it++;

    std::cout << GREEN << splitedLine[0] << " =>" << splitedLine[1] << " = " << value * (*it).second << END << std::endl;
}


void    BitcoinExchange::processInput(std::vector<std::pair<int, float> > &historic, std::fstream &input)
{
    std::string line;
    std::getline(input, line);
    while ( std::getline(input, line))
    {
        if (this->inputLineFormat(line) == VALID)
        {
            calculBalance(line, historic);
        }
    }

}
