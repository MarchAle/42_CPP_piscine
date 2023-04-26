#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <deque>
#include <list>
#include <cstdlib>
#include <sys/time.h>

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

#define INVALID 0
#define VALID 1

class PmergeMe
{
private:
    std::list<int> list;
    std::deque<int> deque;

public:
    PmergeMe();
    PmergeMe(const PmergeMe &src);
    PmergeMe &operator=(const PmergeMe &src);
    ~PmergeMe();

    int checkValue(std::string value);
    int splitAndStore(char ** input);
    std::list<int> sortList(std::list<int> list);
    std::deque<int> sortDeque(std::deque<int> deque);
    int sort(char ** input);

    template <typename Container>
    void printArray(Container array)
    {
        for (typename Container::iterator it = array.begin(); it != array.end(); it++)
            std::cout << *it << " ";
        std::cout << std::endl;
    }

    template <typename Iterator>
    void swap(Iterator &a, Iterator &b)
    {
        typename Iterator::value_type temp = *a;
        *a = *b;
        *b = temp;
    }

    template <typename Container>
    Container insertSort(Container array)
    {
        typename Container::iterator it = array.begin()++;
        typename Container::iterator temp = array.begin();

        while (it != array.end())
        {
            temp = it;
            temp--;
            while (temp != --array.begin() && *it < *temp)
            {
                swap(it, temp);
                it--;
                temp = it;
                temp--;
            }
            it++;
        }
        return (array);
    }
};

#endif