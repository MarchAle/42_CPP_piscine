#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <queue>
# include <cstdlib>


# define INVALID 0
# define VALID 1
# define ARGNB 2
# define FORMAT 3

class Rpn
{
    private:
        std::queue<std::string> values;

    public:
        Rpn();
        Rpn(const Rpn &src);
        Rpn &operator=(const Rpn &src);
        ~Rpn();

        int error(int code);
        int checkValue(std::string value);
        int splitAndStore(std::string input);
        int isOperator(std::string value);
        float operation(float oper1, float oper2, std::string token);
        float calcul(float oper1);
        int execute(std::string input);

        class FormatException : public std::exception 
		{
			public:
				virtual const char * what() const throw();
		};
};


#endif