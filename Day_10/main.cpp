#include <iostream>
#include <cmath>

using namespace std;

//Count digit, way-1
/*
int NumberOfDigit(int n){
    int count {0};
    while(n != 0){
        n = n/10;
        ++count;
    }
    return count;
}
*/
//way-2
/*
int NumberOfDigit(int n){
    if(n/10 == 0){
        return 1;
    }
    return 1+NumberOfDigit(n/10);
}
int armstrongDetect(int n){
    int sum {0},t = n;
    int count = NumberOfDigit(n);
    while(n>0){
        int r = n%10;
        n = n/10;
        sum += pow(r,count);
    }
    if(t == sum)return true;
    else return false;
}
*/
int chkPrime(int n){
    int r {0};
    for(int a = 1; a <= sqrt(n); ++a){
        if(n%a == 0){
            ++r;
            if(n/a < n && a*a != n) ++r;
        }
    }
    cout<<"Remainder : "<<r<<endl;
    if(r > 1)return false;
    else return true;
}
int main()
{
    //cout << "Hello world!" << endl;
    /*
    int n;
    cout<<"Enter the number you want to check : ";
    cin>>n;
    if(armstrongDetect(n)){
        cout<<"Number is a armstrong number."<<endl;
    }else{
        cout<<"Number is not one."<<endl;
    }
    */
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(chkPrime(n))
        cout<<"Number is a prime number."<<endl;
    else
        cout<<"Number is not a prime number."<<endl;


    return 0;
}
