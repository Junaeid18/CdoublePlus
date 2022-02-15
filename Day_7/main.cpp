#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    //while loop
    /*int i {0};
    while(i <= 10){
        cout<<"Hello brother"<< i << endl;
        ++i;
    }
    */
    //while loop code-2
    /*
    int n,i;
    long fact = 1;
    cout<<"Enter the number : ";
    cin>>n;
    if(n >= 0){
        i = n;
        while(i >= 1){
        fact = fact * i;
        --i;
        }
        cout<<"Result of factorial "<<n<<" is = "<<fact<<endl;
    }else{
        cout<<"Factorial can't be calculated"<<endl;
    }
    */
    //Program with while loop-3
    /*
    int i {1},n {0},counter {-1};
    while(i != 0){
        cout<<"Enter number(0 to exit) : ";
        cin>>i;
        n +=i;
        counter++;
    }
    cout<<"Sum of all the numbers : "<<n<<endl;
    double avg =(double) n/counter;
    cout<<"Avg of all the numbers : "<<avg<<endl;
    */
    //Program witg while loop-4
    /*
    int i,n,sum {0},rem {0};
    cout<<"Enter a number : ";
    cin>>i;
    n = abs(i);
    while(n > 0){
        rem = n%10;
        sum += rem;
        n /= 10;
    }
    cout<<"Sum of the number : "<<sum<<endl;
    */
    //Program with do-while loop
    int i,n {0},sum {0};
    char res;
    do{
        cout<<"Enter a number : ";
        cin>>i;
        sum += i;
        cout<<"Type Y/y to continue, anything else to exit"<<endl;
        cin>>res;
        ++n;
    }while(res == 'y' || res == 'y');
    cout<<"Sum of the numbers : "<<sum<<endl;



    return 0;
}
