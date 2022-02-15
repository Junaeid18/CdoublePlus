#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    //code-1
    /*
    int x {},y {}, z {100};
    y = z;
    x = y+10;
    cout<<"Value of x : "<<x<<endl;
    */
    //code-2
    /*
    int x {5},y;
    y = x++;
    cout<<"Value of y : "<<y<<endl;
    y=0;
    cout<<"Value of y : "<<y<<endl;
    y=++x;
    cout<<"Value of y : "<<y<<endl;
    y=0;
    y=x^5;
    cout<<"Value of y : "<<y<<endl;
    y=0;
    y=5^x;
    cout<<"Value of y : "<<y<<endl;
    */
    //code-3
    int a {10}, b {20};
    auto p = a == b;
    auto r = a != b;
    cout<<"P is : " <<typeid(p).name()<<endl;
    cout<<"R is : "<<r<<endl;
    return 0;
}
