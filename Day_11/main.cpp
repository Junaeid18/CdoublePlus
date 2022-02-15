#include <iostream>

using namespace std;

//int add(int,int = 5);
int sum(int a,int b){
    return a+b;
}
double sum(double a, double b){
    return a+b;
}
float sum(int a,int b,int c){
    return a+b+c;
}
int main()
{
    //cout << "Hello world!" << endl;
    //default parameter
    /*
    int sum,a,b;
    cout<<"Enter value for A & B : ";
    cin>>a;
    //cin>>b;
    cout<<"The sum of A & B is = "<<add(a)<<endl;
    */
    cout<<sum(10,20)<<endl;
    cout<<sum(10.0,20.2)<<endl;
    cout<<sum(9,8,7)<<endl;

    return 0;
}
/*
int add(int a,int b){
    return a+b;
}
*/
