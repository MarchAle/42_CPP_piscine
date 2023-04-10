#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <deque>
#include <list>
#include <cstdlib>
#include <sys/time.h>

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
    int splitAndStore(std::string input);
    std::list<int> sortList(std::list<int> list);
    std::deque<int> sortDeque(std::deque<int> deque);
    int sort(std::string input);

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

    // template <typename Container>
    // Container sortData(Container array)
    // {
    //     int arraySize = array.size();
    //     if (arraySize > 6)
    //     {
    //         typename Container::iterator half = array.begin();
    //         for (int i = 0; i < arraySize / 2; i++)
    //             half++;
    //         Container left(array.begin(), half);
    //         Container right(++half, array.end());
    //         left = sortData(left);
    //         right = sortData(right);
    //         left.merge(right);
    //         return (left);
    //     }
    //     return (insertSort(array));
    // }
};

#endif