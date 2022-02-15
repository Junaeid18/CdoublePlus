#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

/*
void print(){
    cout<<"It's inside print now. "<<endl;
    cout<<"Exiting now. "<<endl;
}
void here(){
    cout<<"Here is on now. "<<endl;
    print();
    cout<<"Going then. " << endl;
}
void greetings(){
    cout<<"O, hello ! Jun welcome home. " << endl;
    cout<<"Want a tour inside? ok let's go "<<endl;
}
void bye(){
    cout<<"GoodBye Sir.See you again. "<<endl;
}
*/

/*
double xtrapay(int hr,double overRate){
    double xtra;
    if(hr > 8){
        xtra = (hr - 8)* overRate;
    }
    return xtra;
}

double totalpay(int workhr,double rate,double overRate){
    double xtra,total;
    if(workhr > 8){
        xtra = xtrapay(workhr,overRate);
        total = workhr * rate + xtra;
    }else{
        total = workhr * rate;
    }
    return total;

}
*/
//function prototype declaration
//void callme(string);
void refer(int &,int &);
void swap(int &,int &);
int main()
{
    //generating random number

    /*int i {0};
    //srand(3);
    srand(time(NULL));
    while(i < 20){
        cout<<rand()<<endl;
        ++i;
    }
    */

    //using user defined function

    /*
    cout<<"Hello Admin. " << endl;
    greetings();
    here();
    bye();
    */

    /*
    int work_hr;
    double workRate,overRate,total,overtime_xtra;
    cout<<"Enter number of work Hour : ";
    cin>>work_hr;
    cout<<"Enter work rate per hour : ";
    cin>>workRate;
    cout<<"Enter overtime rate : ";
    cin>>overRate;
    total = totalpay(work_hr,workRate,overRate);
    cout<<"Total wages : "<<total<<" "<<endl;
    overtime_xtra = xtrapay(work_hr,overRate);
    cout<<"Bonus income for overtime : "<<overtime_xtra<<" "<<endl;
    */
    /*
    string s;
    cout<<"Enter your name : ";
    cin>>s;
    callme(s);
    */
    //reference parameter
    /*
    int x {10},y {100};
    cout<<"X : "<<x<<" "<<"Y : "<<y<<endl;
    refer(x,y);
    cout<<"X : "<<x<<" "<<"Y : "<<y<<endl;
    */
    //example of reference parameter
    int x {20},y {30};
    cout<<"First is : "<<x<<" "<<"Second is : "<<y<<" "<<endl;
    swap(x,y);
    cout<<"First is : "<<x<<" "<<"Second is : "<<y<<" "<<endl;
    return 0;
}
/*
void callme(string s){
    cout<<"Hello, dear "<<s<<" welcome. "<<endl;
}
*/
/*
void refer(int &a,int &b){
    a +=50;
    b -=50;
}
*/
void swap(int &a,int &b){
    int t = a;
    a = b;
    b = t;
}
