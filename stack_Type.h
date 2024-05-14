#ifndef STACK_TYPE_H_INCLUDED
#define STACK_TYPE_H_INCLUDED

#include "stack_ADT.h"

template <class _Type>
class clStack_Type : public clStackADT<_Type>
{
private:

    int meMaxSize;

public:
    clStack_Type(int stackSize = 100);

     void initializeStack();

     bool isEmptyStack() const;

     bool isFullStack() const;

     void push(const _Type& newItem);

     _Type top() const;

     void pop();


};
#endif // STACK_TYPE_H_INCLUDED
