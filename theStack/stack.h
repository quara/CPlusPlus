#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

struct stackFrame {

  int data;
  stackFrame *link;
};
typedef stackFrame* stackFramePtr;


class stack {

  public:

  stack();

  stack(int value);

  ~stack();

  void push(int value);

  int pop();

  void show();

  bool isEmpty();

  private:
    stackFramePtr top;
};


#endif // STACK_H_INCLUDED
