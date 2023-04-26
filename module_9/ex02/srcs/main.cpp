#include "../incs/PmergeMe.hpp"

int main(int ac, char** av) 
{
    PmergeMe merger;

    if (ac < 2)
    {
        std::cerr << RED << "Error: one argument required. format expected : 42 9 18 ... 5" << END << std::endl;
        return (1);
    }
    return (merger.sort(av + 1));
}