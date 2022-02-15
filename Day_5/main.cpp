#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    //relational operator
    /*
    int x {5}, y {10};
    bool a,b;
    a = x > y;
    cout<<"Show result : " <<a<<endl;
    b = x != y;
    cout<<"Show if a!=b "<<b<<endl;
    cout<<"type of a,b : "<<typeid(x).name()<<endl;
    */
    //logical operator
    /*
    int age {10};
    bool a = age>10 && age <11;
    cout<<"Result : "<< a<<endl;
    */
    /*
    int age1 {24},age2{24};
    bool a = age1>20 || age2 < 15;
    cout<<"Result : " <<a<<endl;
    */
    /*
    int age {18};
    bool a = age != 20;
    bool b = !(age>15 && age < 25);
    bool c = !(age>25 || age < 5);
    bool d = !a;
    cout<<"Result : "<<a<<endl;
    cout<<"Result : "<<b<<endl;
    cout<<"Result : "<<c<<endl;
    cout<<"Result : "<<d<<endl;
    */
    /*
    int a {56}, b {10};
    a += b;
    cout<<"Value of A : "<<a<<endl;
    a -= b;
    cout<<"Value of A : "<<a<<endl;
    a *= b;
    cout<<"Value of A : "<<a<<endl;
    a /= b;
    cout<<"Value of A : "<<a<<endl;
    a %= b;
    cout<<"Value of A : "<<a<<endl;
    */
    char c {'a'};
    cout<<"char c : " << c <<endl;
    c -= 32;
    cout<<"char c : " << c <<endl;
    return 0;
}
