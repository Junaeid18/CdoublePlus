#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    /*
    int age {10};
    if(age > 18){
        cout<<"He is an adult"<<endl;
    }else{
        cout<<"He is a Teenager"<<endl;
    }
    */
    /*
    int age {};
    cout<<"Enter an age : ";
    cin>>age;
    if(age>=13 && age<= 17){
        cout<<"Teenager"<<endl;
    }else{
        cout<<"Minor or Adult"<<endl;
    }
    */
    /*
    int first {}, second {};
    cout<<"first : ";
    cin>>first;
    cout<<"second :";
    cin>>second;
    if(first>second){
        cout<<"First is bigger than second"<<" And That is : "<<first<<endl;
    }else{
        cout<<"Secound is bigger than first"<<" And That is : "<<second<<endl;
    }*/
    /*
    int f {},s {};
    cout<<"Enter first number : ";
    cin>>f;
    cout<<"Enter secound number : ";
    cin>>s;
    if(f>s){
        cout<<"First is maximum and that is : "<<f<<endl;
    }else if(f<s){
        cout<<"Second is maximum and that is : "<<s<<endl;
    }else{
        cout<<"Both number is equal"<<endl;
    }
    */
    /*
    int year {};
    cout<<"Enter the year : ";
    cin>>year;
     //technique-1
    if(year%4 != 0){
        cout<<"Year is not a leap Year 1"<<endl;
    }else if(year%100 != 0){
        cout<<"Year is a Leap Year 2"<<endl;
    }else if(year%400 == 0){
        cout<<"Year is leap Year 3"<<endl;
    }else{
        cout<<"Year is not a leap Year 4"<<endl;
    }
    */
    //technique-2
    /*
    if(year%4 == 0){
        if(year%100 == 0){
            if(year%400 == 0){
                cout<<"Year is leap Year"<<endl;
            }else{
                cout<<"Year is not a leap Year"<<endl;
            }
        }else{
            cout<<"Year is leap Year"<<endl;
        }
    }else{
        cout<<"Year is not a leap Year"<<endl;
    }
    */
    //technique-3
    /*
    if((year%4 == 0 && year%100 != 0)||(year%400 == 0)){
        cout<<"Year is leap Year"<<endl;
    }else{
        cout<<"Year is not a leap Year"<<endl;
    }
    */
    /*
    double income {},tax {};
    cout<<"Enter your income : ";
    cin>>income;
    if(income<=0){
        cout<<"Salary is invalid for tax"<<endl;
        return 0;
    }else if(income>0 && income<5000){
        tax = 0.0;
    }else if(income>=5000 && income<10000){
        tax = income * 0.06;
    }else if(income>=10000 && income<20000){
        tax = income * 0.12;
    }else if(income>=20000 && income<500000){
        tax = income * 0.20;
    }else{
        tax = income * 0.30;
    }
    cout<<"Tax is : $"<< setprecision(2)<<fixed<< tax<< endl;
    */
    /*
    int a,b,c,max,result;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;
    result = (a>b&&a>c)?max=a:(b>c?max=b:max=c);
    cout<<"Maximum is : "<<max<<endl;
    */
    //Leap year with ternary conditional operator
    /*
    int year;
    bool result;
    cout<<"Enter year : ";
    cin>>year;
    /* technique-1
    result = (year%4==0)?((year%100!=0)?1:((year%400==0)?1:0)):0;
    result>0?(cout<<"Leap Year"<<endl):(cout<<"Not a Leap Year"<<endl);
    */
    //technique-2
    //cout<<((year%4==0 && year%100 !=0)?"Leap year":(year%400==0)?"Lear Year":"Not a Leap Year")<<endl;
    int n,s;
    cout<<"Enter the number you hold :";
    cin>>n;
    (n>10)?s=1:s=2;
    switch(s){
        case 1: cout<<"Here i come with value of s : "<<s<<endl;
                break;
        case 2: cout<<"Here you come with value of s : "<<s<<endl;
                break;
        default : cout<<"Nothing bro"<<endl;
    }
    return 0;
}
