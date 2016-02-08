#include <iostream>
#include <cstdlib>
#include "stack.h"

using namespace std;

stack :: stack() : top(NULL)    {
}

stack :: stack(int value) {

    stackFramePtr tmp = new stackFrame;
    tmp->data = value;
    tmp->link = NULL;
    top = tmp;

}
//destructor
stack :: ~stack(){
        // pop calls delete
    }

bool stack :: isEmpty(){
 return (top == NULL);
}

void stack :: push(int value)    {

    if(isEmpty()){
        stackFramePtr head = new stackFrame;
        head->data = value;
        head->link = NULL;
        top = head;
    }
    else{
        stackFramePtr head = new stackFrame;
        head->data = value;
        head->link = top;
        top = head;
        }
}

int stack :: pop(){

    int result=0;

    if(isEmpty()){
        cout<<"Cannot perform POP!! The stack is now currently empty!"<<endl;
        return NULL;
    }
    else{

        result = top->data;
        stackFramePtr temp;
        temp = top;
        top = top->link;
        delete temp;
        cout<<result<<" has been removed from the stack."<<endl;

        }
return result;

}

void stack :: show(){
    if(isEmpty()){

        cout<<"The stack is currently empty!"<<endl;
    }
    else{
    stackFramePtr temp;
    temp = top;
     cout<<"Your stack is : ";
    while(temp != NULL){

        cout<<temp->data<< " " ;
        temp = temp->link;
    }
    cout<<endl;
    }
}
