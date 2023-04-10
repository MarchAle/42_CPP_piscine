#include "../incs/BitcoinExchange.hpp"
 
int dateToTimestamp(std::string date)
{
    date.erase(4, 1);
    date.erase(6, 1);
    return (std::atoi(date.c_str()));
}

void    databaseToVector(std::vector<std::pair<int, float> > &historic, std::fstream &dataBase)
{
    std::string line;
    std::getline(dataBase, line);
    while ( std::getline(dataBase, line))
    {
        int timestamp = dateToTimestamp(line.substr(0, 10));
        float price = std::atof(line.substr(11, line.length()).c_str());
        historic.push_back(std::make_pair(timestamp, price));
    }
}

int main(int ac, char** av) 
{
    BitcoinExchange BtcEx;
    std::vector<std::pair<int, float> > historic;
    std::fstream dataBase("./data.csv");
    if (!dataBase.is_open())
    {
        std::cerr << "Error: can't open dataBase file" << std::endl;
        return(1);
    }
    databaseToVector(historic, dataBase);

    if (ac != 2)
    {
        std::cerr << "Error: one input file required" << std::endl;
        return (1);
    }
    std::fstream input(av[1]);
    if (!input.is_open())
    {
        std::cerr << "Error: can't open input file" << std::endl;
        return(1);
    }
    BtcEx.processInput(historic, input);
    return (0);
}