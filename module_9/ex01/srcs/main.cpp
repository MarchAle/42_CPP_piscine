#include "../incs/RPN.hpp"

int inputParser(std::string input)
{
    for (size_t i = 0; i < input.length(); i++)
    {
        if (!std::isdigit(input[i])
            && input[i] != '/'
            && input[i] != '*'
            && input[i] != '-'
            && input[i] != '+'
            && input[i] != ' ')
                return (INVALID);
    }
    return (VALID);
}
 
int main(int ac, char** av) 
{
    RPN calculator;

    if (ac != 2)
        return (calculator.error(ARGNB));
    if (inputParser(av[1]) == INVALID)
        return (calculator.error(FORMAT));
    try
    {
        return (calculator.execute(av[1]));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}