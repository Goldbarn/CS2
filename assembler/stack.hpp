//
// File: stack.hpp
//
// Programmer:  Rowan Ess
// Date:        Spring 2024
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//
#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_

#include <new>
#include <cassert>


template <typename T>
class node {
public:
    node() : next(0) {}
    node(const T& val) : data(val), next(0) {}
    T data;
    node<T>* next;
};



// CLASS INV:
//
template <typename T>
class stack {
public:
              stack     () : tos(0) {}
              stack     (const stack<T>&);
              ~stack    ();
    void      swap      (stack<T>&);
    stack<T>& operator= (stack<T> rhs) { swap(rhs); return *this; }
    
	bool      empty     () const { return tos == 0; }
	bool      full      () const;
	T         top       () const { assert(!empty()); return tos->data; }
	T         pop       ();
	void      push      (const T&);

private:
	node<T>   *tos;
};

template <typename T>
stack<T>::stack(const stack<T>& copy) : stack() {
    node<T>* temp = copy.tos;
    node<T>* bottom;
    while (temp != 0) {
        if (tos == 0) {if (tos == 0)
            tos = new node<T>(temp->data);
            bottom = tos;
        }
        else {
            bottom->next = new node<T>(temp->data);
            bottom = bottom->next;
        }
        temp = temp->next;
    }
}

template <typename T>
void stack<T>::swap(stack<T>& rhs) {
    node<T>* temp = rhs.tos;
    rhs.tos = tos;
    tos = temp;
}

template <typename T>
stack<T>::~stack() {
    node<T>* temp = tos;
    while (tos != 0) {
        tos = tos->next;
        delete temp;
        temp = tos;
    }
}

template <typename T>
void stack<T>::push(const T& val) {
    assert(!full());
    node<T>* temp = new node<T>(val);
    temp->next = tos;
    tos = temp;
}

template <typename T>
T stack<T>::pop() {        
    assert(!empty());
    node<T>* temp = tos;
    T returnData = tos->data;
    tos = tos->next;
    delete temp;
    return returnData;
}

template <typename T>
bool stack<T>::full() const {
    node<T>* temp = new(std::nothrow) node<T>();
    if (temp == 0) { return true; }
    delete temp;
    return false;
}

#endif
