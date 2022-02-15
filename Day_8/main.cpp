#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    //for loop
    /*
    int i;
    for(i=0;i<10;++i){
        cout<<"Hello Junaeid - "<<i+1<<endl;
    }
    */

    /*
    for(int i = 1, j = 10; i<=10,j>1;++i,--j){
        cout<<"Hello Junaeid i - "<<i<<" j - "<<j<<endl;
    }
    */
    /*
    int i {1},j {},n {};
    cout<<"Enter the number : ";
    cin>>n;
    for(;i<=10;i++){
        j =  n * i;
        cout<<n<<" X "<<i<<" = "<<j<<endl;
    }
    */
    /*
    int i {0}, j {-1}, k {1}, n,sum;
    cout<<"Number of terms you want to see : ";
    cin>>n;
    cout<<"Fibonacci numbers : ";
    for(;i<n;++i){
        sum = j + k;
        if(i == n-1){
            cout<<sum;
        }else{
            cout<<sum<<",";
        j = k;
        k = sum;
        }
    }
    */
    /*
    int i {0}, j {0},k;
    for(;i<5;++i){
        cout<<"i = "<<i<<endl;
        for(j = 0;j<5;++j){
            cout<<"    j = "<<j<<endl;
        }
    }
    */
    /*
    int i {0};
    while( i < 5){
            cout<<" i = "<<i<<endl;
        for(int j=0;j<5;++j){
            cout<<"     j = "<<j<<endl;
        }
        ++i;
    }
    */
    //finding factors and checking prime numbers

    int i {1},r {0},n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Remainder : ";
    for(; i <= sqrt(n); ++i){
        if(n%i == 0){
            ++r;
            cout<<i<<",";
            if(n/i < n && i*i != n){
                ++r;
                int z = n/i;
                cout<<z<<",";
            }
        }
    }
    cout<<n;
    cout<<endl;
    if(r == 1){
        cout<<"Number is a prime number."<<endl;
    }

    /*
    int i {1};
    for(; i <= 100; ++i){
        cout<<"i = "<<i<<endl;
        if(i % 15 == 0){
            break;
        }
    }
    cout<<"i = "<<i<<endl;
    */
    //only finding the prime number
    /*
    int i,n;
    bool f = true;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=2 ; i<= sqrt(n);++i){
        if(n%i == 0){
            f = false;
            break;
        }
    }
    if(f){
        cout<<"Number is a prime number"<<endl;
    }else{
        cout<<"Number is not a prime number"<<endl;
    }
    */
    /*
    int i;
    for(i =0; i<=20;++i){
        if(i%5==0){
            continue;
        }
        cout<<" i : "<<i<<endl;
    }
    */

    return 0;
}
