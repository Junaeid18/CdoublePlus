#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    //declaring variable
    int x {9};
    float y {12.3};

    signed z;
    unsigned a;

    auto var1 {3.333333};
    auto var2 {4};

    // Type checking  : using typeinfo template,
    cout<<"INT number : "<<x<<"FLOAT Number : "<<y<<endl;
    cout<<"Type of z : "<< typeid(z).name()<<endl<<"Type of a : "<<typeid(a).name()<<endl;

    cout<<"Type of var1 : " << typeid(var1).name()<<endl;
    return 0;
}
