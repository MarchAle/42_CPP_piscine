#include "../incs/Rpn.hpp"

/*#################### CANONICAL FORM ####################*/
Rpn::Rpn() : number(0), oper(0) {}
Rpn::Rpn(const Rpn &src) : number(0), oper(0) {*this = src;}
Rpn &Rpn::operator=(const Rpn &src){return (*this); (void)src;}
Rpn::~Rpn(){}

/*#################### MEMBER FUNCTIONS ####################*/
int Rpn::error(int code)
{
    if (code == VALID)
        return (code);
    if (code == ARGNB)
        std::cerr << RED << "Error: one argument expected" << END << std::endl;
    if (code == FORMAT)
        std::cerr << RED << "Error: invalid argument format" << END << std::endl;
    if (code == EXPR)
        std::cerr << RED << "Error: invalid expression" << END << std::endl;

    return (INVALID);
}

int Rpn::checkValue(std::string value)
{
    if (value.length() == 1)
        return (VALID);
    for (size_t i = 0; i < value.length(); i++)
    {
        if (i == 0 && !std::isdigit(value[i]) && value[i] != '-')
            return (INVALID);
        else if (i != 0 && !std::isdigit(value[i]))
            return (INVALID);
    }
    return (VALID);
}

int Rpn::checkExpres(std::string input)
{
    std::string         tmp = input;
	std::stringstream   ss(input);
	while (getline(ss, tmp, ' '))
    {
        if (checkValue(tmp) == INVALID)
            return (INVALID);
        if (tmp.size() > 0)
        {
            if (!isOperator(tmp))
                number++;
            else
                oper++;
        }
    }
    if (number - oper != 1)
        return (INVALID);
    else
        return (VALID);
}

int Rpn::isOperator(std::string value)
{
    if (value.length() > 1)
        return (0);
    if (value[0] == '/'
        || value[0] == '*'
        || value[0] == '-'
        || value[0] == '+')
        return (1);
    return (0);
}

float Rpn::operation(std::string token)
{
    if (token[0] == '/')
        return (operand1 / operand2);
    if (token[0] == '*')
        return (operand1 * operand2);
    if (token[0] == '-')
        return (operand1 - operand2);
    if (token[0] == '+')
        return (operand1 + operand2);
    return(0);
}

int Rpn::execute(std::string input)
{
    if (checkExpres(input) == INVALID)
        return (error(EXPR));

    std::string         tmp = input;
	std::stringstream   ss(input);
	while (getline(ss, tmp, ' '))
    {
        if (tmp.size() > 0)
        {
            if (!isOperator(tmp))
                values.push(std::atoi(tmp.c_str()));
            else
            {
                if (values.size() < 2)
                    return (error(EXPR));
                operand2 = values.top();
                values.pop();
                operand1 = values.top();
                values.pop();
                values.push(operation(tmp));
            }
        }
    }
    std::cout << GREEN << values.top() << END << std::endl;
    return (0);
}
