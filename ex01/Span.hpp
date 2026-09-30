#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <exception>
#include <fstream>
#include <string>

class Span
{
private:
    unsigned int _N;
    std::vector<int> _Vec;
public:
    Span();
    Span(const unsigned int N);
    Span(const Span &other);
    Span& operator=(const Span &other);
    ~Span();
    void addNumber(int nbr);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    
    class ContainerFull : public std::exception
    {
        const char* what() const throw();
    };
    class NbrElemTooLow : public std::exception
    {
        const char* what() const throw();
    };
    //La fonction membre template qui prend deux itérateurs.
    template <typename T>
    void addRange(T begin, T end)
    {
        std::size_t rangeSize = (std::size_t)(std::distance(begin, end));
        std::size_t spaceLeft = _N - _Vec.size();
        if (rangeSize > spaceLeft)
            throw ContainerFull();
        _Vec.insert(_Vec.end(), begin, end);
    }
};

std::ostream& operator<<(std::ostream& out, const Span &sp);