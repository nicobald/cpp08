#include "easyfind.hpp"

int main(void)
{
    //std::vector
    std::vector<int>t;
    for(int i = 0; i < 10; i++)
        t.push_back(i + 10);
    std::vector<int>::iterator it;
    it = easyfind(t, 10);
    if (it == t.end())
    {
        std::cout << "value not found" << std::endl;
        return(-1);
    }
    std::cout << "la valeur " << *it << " est a l index " << std::distance(t.begin(), it) << std::endl;
    
    //std::list
    std::list<int>u;
    for(int i = 0; i < 10; i++)
        u.push_back(i + 10);
    std::list<int>::iterator itl;
    itl = easyfind(u, 11);
    if (itl == u.end())
    {
        std::cout << "value not found" << std::endl;
        return(-1);
    }
    std::cout << "la valeur " << *itl << " est a l index " << std::distance(u.begin(), itl) << std::endl;

    //std::deque
    std::deque<int>v;
    for(int i = 0; i < 10; i++)
        v.push_back(i + 10);
    std::deque<int>::iterator itd;
    itd = easyfind(v, 10);
    if (itd == v.end())
    {
        std::cout << "value not found" << std::endl;
        return(-1);
    }
    std::cout << "la valeur " << *itd << " est a l index " << std::distance(v.begin(), itd) << std::endl;
    return(0);
}