#include "../incs/Rpn.hpp"

/*#################### CANONICAL FORM ####################*/
Rpn::Rpn(){}
Rpn::Rpn(const Rpn &src){*this = src;}
Rpn &Rpn::operator=(const Rpn &src){return (*this); (void)src;}
Rpn::~Rpn(){}

/*#################### MEMBER FUNCTIONS ####################*/
int Rpn::error(int code)
{
    if (code == VALID)
        return (code);
    if (code == ARGNB)
        std::cerr << "Error: one argument expected" << std::endl;
    if (code == FORMAT)
        std::cerr << "Error: invalid argument format" << std::endl;

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

int Rpn::splitAndStore(std::string input)
{
    std::string         tmp = input;
	std::stringstream   ss(input);
	while (getline(ss, tmp, ' '))
    {
        if (checkValue(tmp) == INVALID)
            return (INVALID);
        if (tmp.size() > 0)
            this->values.push(tmp);
    }
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

float Rpn::operation(float oper1, float oper2, std::string token)
{
    if (token[0] == '/')
        return (oper1 / oper2);
    if (token[0] == '*')
        return (oper1 * oper2);
    if (token[0] == '-')
        return (oper1 - oper2);
    if (token[0] == '+')
        return (oper1 + oper2);
    return(0);
}

float Rpn::calcul(float oper1)
{
    if (values.size() == 0 || isOperator(values.front()))
        throw FormatException();
    int oper2 = std::atoi(values.front().c_str());
    values.pop();
    if (!isOperator(values.front()))
        oper2 = calcul(oper2);
    float result = operation(oper1, oper2, values.front());
    values.pop();
    return(result);
}

int Rpn::execute(std::string input)
{
    if (splitAndStore(input) == INVALID)
        return (error(FORMAT));
    if (values.size() > 0 && !isOperator(values.front()))
    {
        int initValue = std::atoi(values.front().c_str());
        values.pop();
        float result = calcul(initValue);
        while (values.size() > 0)
            result = calcul(result);
        std::cout << result << std::endl;
    }
    else
        error(FORMAT);
    return (0);
}

/*#################### EXCEPTIONS ####################*/
const char * Rpn::FormatException::what() const throw()
{
	return ("EXCEPTION : incorrect expression");
}
