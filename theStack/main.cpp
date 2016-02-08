#include <iostream>
#include <cstdlib>
#include "stack.h"

using namespace std;

int main()
{
    stack s1(54);
    s1.show();
    s1.push(5);
    s1.push(42);
    s1.push(37);
    s1.show();
    s1.pop();
    s1.show();
    s1.pop();
    s1.show();
    s1.push(103);
    s1.show();
    s1.pop();
    s1.pop();
    s1.show();
    return 0;
}
