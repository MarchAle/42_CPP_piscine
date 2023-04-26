#include "../incs/PmergeMe.hpp"

/*#################### CANONICAL FORM ####################*/
PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &src) { *this = src; }
PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
    return (*this);
    (void)src;
}
PmergeMe::~PmergeMe() {}

/*#################### MEMBER FUNCTIONS ####################*/
int PmergeMe::checkValue(std::string value)
{
    for (size_t i = 0; i < value.length(); i++)
    {
        if (!std::isdigit(value[i]))
        {
            std::cerr << RED << "Error: " << value << " is not a positive integer" << END << std::endl;
            return (INVALID);
        }
    }
    return (VALID);
}

int PmergeMe::splitAndStore(char ** input)
{
    int i = 0;

    while (input[i])
    {
        std::string tmp = input[i];
        if (checkValue(input[i]) == INVALID)
            return (INVALID);
        if (tmp.size() > 0)
        {
            this->list.push_back(std::atoi(tmp.c_str()));
            this->deque.push_back(std::atoi(tmp.c_str()));
        }
        i++;
    }
    return (VALID);
}

std::list<int> PmergeMe::sortList(std::list<int> list)
{
    int listSize = list.size();
    if (listSize > 6)
    {
        std::list<int>::iterator half = list.begin();
        for (int i = 0; i < listSize / 2; i++)
            half++;
        std::list<int> left(list.begin(), half);
        std::list<int> right(half, list.end());
        left = sortList(left);
        right = sortList(right);
        left.merge(right);
        return (left);
    }
    return (insertSort(list));
}

std::deque<int> mergeDeque(std::deque<int> &left, std::deque<int> &right)
{
    std::deque<int> result;
    while (left.size() || right.size())
    {
        if (right.size() == 0 || ((left.size() && right.size()) && *(left.begin()) <= *(right.begin())))
        {
            result.push_back(*(left.begin()));
            left.pop_front();
        }
        else
        {
            result.push_back(*(right.begin()));
            right.pop_front();
        }
    }
    return (result);
}

std::deque<int> PmergeMe::sortDeque(std::deque<int> deque)
{
    int dequeSize = deque.size();
    if (dequeSize > 6)
    {
        std::deque<int>::iterator half = deque.begin();
        for (int i = 0; i < dequeSize / 2; i++)
            half++;
        std::deque<int> left(deque.begin(), half);
        std::deque<int> right(half, deque.end());
        left = sortDeque(left);
        right = sortDeque(right);
        left = mergeDeque(left, right);
        return (left);
    }
    return (insertSort(deque));
}

int PmergeMe::sort(char ** input)
{
    if (splitAndStore(input) == INVALID)
        return (INVALID);

    {
        struct timeval start, end;
        std::cout << YELLOW << "std::list before\t";
        printArray(list);
        gettimeofday(&start, NULL);
        this->list = sortList(this->list);
        gettimeofday(&end, NULL);
        std::cout << GREEN << "std::list after\t\t";
        printArray(list);

        long seconds = end.tv_sec - start.tv_sec;
        long microseconds = end.tv_usec - start.tv_usec;
        long duration = seconds * 1000000 + microseconds;
        std::cout << BLUE << "Time to process " << list.size() << " elements with std::list : " << duration << " us" << END << std::endl;
    }

    {
        struct timeval start, end;
        std::cout << YELLOW << "std::deque before\t";
        printArray(deque);
        gettimeofday(&start, NULL);
        this->deque = sortDeque(this->deque);
        gettimeofday(&end, NULL);
        std::cout << GREEN << "std::deque after\t";
        printArray(deque);

        long seconds = end.tv_sec - start.tv_sec;
        long microseconds = end.tv_usec - start.tv_usec;
        long duration = seconds * 1000000 + microseconds;
        std::cout << BLUE << "Time to process " << deque.size() << " elements with std::deque : " << duration << " us" << END << std::endl;
    }

    return (0);
}