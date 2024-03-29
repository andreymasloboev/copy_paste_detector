#include <iostream>
#include <resource.hpp>

void Resource::setStatus(const int in) noexcept
{
    if (in > 0)
    {
        status_ = in;
    }
    else
    {
        status_ = -1;
    }
}

void Resource::setStatusIncr(const int in) noexcept
{
    if (in > 0)
    {
        status_ = in;
    }
    else
    {
        status_ = -1;
    }
}

void Resource::printStatus()
{
    std::cout << status_ << std::endl;
}