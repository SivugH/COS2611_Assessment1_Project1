#ifndef STACK_ADT_H_INCLUDED
#define STACK_ADT_H_INCLUDED

#include <iostream>
#include <cassert>

 template <class _Type>
 class clStackADT
 {

 public:

     virtual void initializeStack() = 0;

     virtual bool isEmptyStack() const = 0;

     virtual bool isFullStack() const = 0;

     virtual void push(const _Type& newItem) = 0;

     virtual _Type top() const = 0;

     virtual void pop() = 0;

 };


#endif // STACK_ADT_H_INCLUDED
