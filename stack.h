#ifndef STACK_H
#define STACK_H

#include<cstddef>

class Stack
{
    constexpr static size_t SIZE{8};
    int array[SIZE];
    int top{-1};

public:

    size_t available()
    {
        return (top + 1);
    }

    bool push(const int item)
    {
        bool status(false);
        top++;
        array[top] = item;
        status = true;
        
        return true;
    }
    bool pop(int &item)
    {
        bool status(false);

        if(top > -1)
        {
        item = array[top];
        top--;
        status = true;
        }

        return status;
    }
    void clear(void)
    {

    }
};

#endif