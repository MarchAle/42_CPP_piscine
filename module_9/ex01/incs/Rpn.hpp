#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <stack>
# include <cstdlib>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN "\x1B[36m"
# define BRED "\x1B[91m"
# define BGREEN "\x1B[92m"
# define BYELLOW "\x1B[93m"
# define BBLUE "\x1B[94m"
# define BMAGENTA "\x1B[95m"
# define BCYAN "\x1B[96m"
# define WHITE "\x1B[97m"
# define END "\033[0m"

# define INVALID 0
# define VALID 1
# define ARGNB 2
# define FORMAT 3
# define EXPR 4

class Rpn
{
    private:
        int number;
        int oper;
        float operand1;
        float operand2;
        std::stack<float> values;

    public:
        Rpn();
        Rpn(const Rpn &src);
        Rpn &operator=(const Rpn &src);
        ~Rpn();

        int error(int code);
        int checkValue(std::string value);
        int checkExpres(std::string input);
        int isOperator(std::string value);
        float operation(std::string token);
        float calcul(float oper1);
        int execute(std::string input);
};


#endif