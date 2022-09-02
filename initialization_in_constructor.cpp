/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
#include<iostream>
using namespace std;
class student
{
    int a, b;
    public:
    student(int c , int d) : a(c) , b(d)
    {
        cout<<"the constructor is called "<<endl;
        cout<<"the value of a is "<<a<<" the value of b is "<<b<<endl;

    }
};
int main()
{
    student ravi(1,2);
    return 0;
}