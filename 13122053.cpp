//Student name: Sivuyile
//Student Surname: Fodi
//Studne number: 13122053





#include <iostream>
#include <fstream>
 #include <cassert>
//#include "stack_Type.cpp"

using namespace std;


 template <class _Type>
 class clStackADT
 {

 public:

     virtual void initializeStack() = 0;

     virtual bool isEmptyStack() const = 0;

     virtual bool isFullStack() const = 0;

     virtual void push(const _Type& newItem) = 0;

     virtual _Type top() const = 0;

     virtual void poop() = 0;

 };



template <class _Type>
class clStack_Type : public clStackADT<_Type>
{
private:

    int meMaxSize;
    int meStackTop;
     _Type *list;

public:
    clStack_Type(int paMaxSize);

     void initializeStack();

     bool isEmptyStack() const;

     bool isFullStack() const;

     void push(const _Type& newItem);

     _Type top() const;

     void pop();


};

template <class _Type>
clStack_Type<_Type>::clStack_Type(int paMaxSize)
{
    meMaxSize = paMaxSize;
    meStackTop = 0;
    list = new _Type[meMaxSize];
}

template <class _Type>
void clStack_Type<_Type>::initializeStack()
 {
    meStackTop = 0;
 }
 template <class _Type>
 bool clStack_Type<_Type>::isEmptyStack() const
{
    return  (meStackTop == 0);
}
 template <class _Type>
 bool clStack_Type<_Type>::isFullStack() const
 {
    return (meStackTop == meMaxSize);

 }

 template <class _Type>
 void clStack_Type<_Type>::push(const _Type& newItem)
 {
    if (!isFullStack())
    {
        list[meStackTop] = newItem;
        meStackTop++;
    }
    else
        cout << "Cannot add to a full stack." << endl;
 }

template <class _Type>
_Type clStack_Type<_Type>::top() const
 {
    assert(meStackTop != 0);
    return list[meStackTop - 1];
 }

template <class _Type>
void clStack_Type<_Type>::pop()
 {
    if (!isEmptyStack())
        meStackTop--;
    else
        cout << "Cannot remove from an empty stack." << endl;
 }


int main()
{
    cout << "Menu" << endl;
    cout << "1. Enter new URL" <<endl;
    cout << "2. Navigate to Previous URL" <<endl;
    cout << "3. Navigate to Forward URL" <<endl;
    cout << "4. Exit" <<endl;

    int selectedNum;
    string newURL;
    clStack_Type<string> mystack(100);


    ifstream urlFile;

    urlFile.open("C:\Data\BrowserHistory.txt");

    if (urlFile)
    {
        cout << "file opened successfully" << endl;
    }
    else
    {
        cout << "file not opened successfully" << endl;
    }

    cin >> selectedNum;

    switch (selectedNum)
    {
        case 1:
        {
            cout << "Entered 1" << endl;
            cout << "Enter New URL:";
            cin >> newURL;
            //push newURL to stack
            cout << "Navigating to: " << newURL;
            stack.push(newURL);

            break;
        }
        case 2:
        {
            cout << "Entered 2" << endl;
            break;
        }
        case 3:
        {
            cout << "Entered 3" << endl;
            break;
        }
        case 4:
        {
            cout << "Entered 4" << endl;
            break;
        }
        default:
            {
               cout << "Entered incorrect input" << endl;
            }


    }


    return 0;
}
