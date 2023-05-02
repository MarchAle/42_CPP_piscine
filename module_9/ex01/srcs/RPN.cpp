#include "../incs/RPN.hpp"

/*#################### CANONICAL FORM ####################*/
RPN::RPN() : number(0), oper(0) {}
RPN::RPN(const RPN &src) : number(0), oper(0) {*this = src;}
RPN &RPN::operator=(const RPN &src){return (*this); (void)src;}
RPN::~RPN(){}

/*#################### MEMBER FUNCTIONS ####################*/
int RPN::error(int code)
{
    if (code == VALID)
        return (code);
    if (code == ARGNB)
        std::cerr << RED << "Error: one argument expected" << END << std::endl;
    if (code == FORMAT)
        std::cerr << RED << "Error: invalid token" << END << std::endl;
    if (code == EXPR)
        std::cerr << RED << "Error: invalid expression" << END << std::endl;
    if (code == TOOMUCHOPER)
        std::cerr << RED << "Error: too much operators" << END << std::endl;
    if (code == TOOFEWOPER)
        std::cerr << RED << "Error: too few operators" << END << std::endl;

    return (INVALID);
}

int RPN::checkExpres(std::string input)
{
    for (size_t i = 0; i < input.size(); i++)
    {
        if (input[i] != ' ')
        {
            if (!isOperator(input[i]))
                number++;
            else
                oper++;
        }
    }
    if (number - oper > 1)
        return (TOOFEWOPER);
    else if (number - oper < 1)
        return (TOOMUCHOPER);
    else
        return (VALID);
}

int RPN::isOperator(char c)
{
    if (c == '/'
        || c == '*'
        || c == '-'
        || c == '+')
        return (1);
    return (0);
}

float RPN::operation(char token)
{
    if (token == '/')
    {
        if (operand2 == 0)
            throw ZeroDivException();
        return (operand1 / operand2);
    }
    if (token == '*')
        return (operand1 * operand2);
    if (token == '-')
        return (operand1 - operand2);
    if (token == '+')
        return (operand1 + operand2);
    return(0);
}

int RPN::execute(std::string input)
{
    if (checkExpres(input) != VALID)
        return (error(checkExpres(input)));

    for (size_t i = 0; i < input.size(); i++)
    {
        if (input[i] != ' ')
        {
            if (!isOperator(input[i]))
                values.push(input[i] - 48);
            else
            {
                if (values.size() < 2)
                    return (error(EXPR));
                operand2 = values.top();
                values.pop();
                operand1 = values.top();
                values.pop();
                values.push(operation(input[i]));
            }
        }
    }
    std::cout << GREEN << values.top() << END << std::endl;
    return (0);
}

/*#################### EXCEPTIONS ####################*/
const char * RPN::ZeroDivException::what() const throw()
{
	return ("EXCEPTION : incorrect division");
}