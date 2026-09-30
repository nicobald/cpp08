#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <deque>

template <typename T>
typename T::iterator easyfind(T &t, int i)
{
    typename T::iterator it = std::find(t.begin(), t.end(), i);
    return(it);
}