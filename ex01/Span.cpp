#include "Span.hpp"

Span::Span()
{

}

Span::Span(const unsigned int _N)
{

}

Span::Span(const Span &other)
{

}

Span::~Span()
{

}

void Span::addNumber(int nbr)
{
    
}

void Span::shortestSpan()
{
    
}

void Span::longestSpan()
{
    
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
        _N = other._N;
    return(*this);
}

std::ostream& operator<<(std::ostream& out, const Span &sp)
{
    out << ;
    return (out);
}