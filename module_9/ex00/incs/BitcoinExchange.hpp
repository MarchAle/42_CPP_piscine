#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

# define INVALID 0
# define VALID 1
# define FORMAT 2
# define BBTC 3
# define NEGATIVE_VALUE 4
# define TOO_LARGE_VALUE 5
# define VALUE_ERR 6

class BitcoinExchange
{
    private:
        
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &src);
        BitcoinExchange &operator=(const BitcoinExchange &src);
        ~BitcoinExchange();

        std::vector<std::string>    split(std::string &line, char delim);
        int     dateToTimestamp(std::string date);
        int     error(int code, std::string &line);
        int     isNum(std::string date);
        int     isFloat(std::string value);
        int     checkExistingDate(int year, int month, int day);
        int     checkDate(std::string &date);
        int     checkValue(std::string &value);
        int     inputLineFormat(std::string &line);
        void    calculBalance(std::string &line, std::vector<std::pair<int, float> > &historic);
        void    processInput(std::vector<std::pair<int, float> > &historic, std::fstream &input);
};



#endif