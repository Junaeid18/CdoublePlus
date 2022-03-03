//pointer

#include <iostream>

using namespace std;
int fun(int*,int*);

int main()
{
    //cout << "Hello world!" << endl;
    /* 
    int s = 50,t = 2;
    cout<<"Address of int s : "<<(unsigned long long)&s<<endl;
    cout<<"Address of int t : "<<(unsigned long long)&t<<endl;
    int* a = &s;
    cout<<"Value pointed by pointer a : "<<*a<<endl;
    *a +=1;
    cout<<"Magic happened : "<<s<<endl;
    cout<<"Size of variable : "<<sizeof(*a)<<endl;
    char *b;
    cout<<"Size of char b : "<<sizeof(b)<<endl;
    cout<<"Size of char *b : "<<sizeof(*b)<<endl;
    double* c;
    cout<<"Size of char c : "<<sizeof(c)<<endl;
    cout<<"Size of char *c : "<<sizeof(*c)<<endl;
    cout<<"Size of casted s : "<<(unsigned long long)&s<<endl;
    cout<<"Size of casted t : "<<(unsigned long long)&t<<endl;
    long long int junaeid = 6;
    cout<<sizeof(junaeid)<<endl;

    a +=1;
    cout<<"Content now : "<< a<<endl;
   
 */   
 /*
    int temp1 = 50, temp2 = 100, temp3 = 200;
    int *t = &temp2;
    cout<<"Address of temp1 : "<<&temp1<<endl;
    cout<<"Address of temp2 : "<<&temp2<<endl;
    cout<<"Address of temp3 : "<<&temp3<<endl;
    cout<<"Address of t : "<<t<<endl;
    cout<<"Content of the location t : "<<*t<<endl;
    t += 1;
    cout<<"Address of t : "<<t<<endl;
    cout<<"Content of the location t : "<<*t<<endl;
    t -= 2;
    cout<<"Address of t : "<<t<<endl;
    cout<<"Content of the location t : "<<*t<<endl;
    char *j = (char *)t;
    cout<<"*k is : "<<j<<endl;
    j = (char *)&temp2;
    cout<<"*k is : "<<j<<endl;
    */
   
    int a {20}, b {30};
    fun(&a,&b);
    cout<<"A : "<<a<<" "<<"B : "<<b<<endl;
    return 0;
}
int fun(int *v1,int *v2){
    *v1 +=10;
    *v2 +=20;
}
