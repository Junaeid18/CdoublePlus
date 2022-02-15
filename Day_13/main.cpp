#include <iostream>
#include <string>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    /*
    string s = "Hello Junaeid";
    cout<< s.length()<<endl;
    string s1 = "Hello Boss";
    cout<< s1.size()<<endl;
    */
    //code-2
    /*
    string s1 ("Wow thats nice");
    cout<< s1 <<endl;
    cout<< s1.length()<<endl;

    string s2 (s1);
    cout<<s2<<endl;
    string s3(10,'J');
    cout<<s3<<endl;
    */

   //code-3
   /*
   string name,school;
   cout<< "What's your name : ";
   getline(cin,name);
   cout<< "Enter the name of your school : ";
   getline(cin,school);
   cout<<name<<" studies in "<<school<<" ."<<endl;
    */

   //code-4
    string s {"Hello World"};
    cout<<s.at(0)<<" , " << s.at(s.length()-1)  <<endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout<< s[i] << " , ";
        if(s.at(i) >= 'a' && s.at(i) <= 'z'){
            s.at(i) -= 32;
        }
    }
    cout<< s <<endl;
    for(char &p:s){     //Here &p is very important, bcz without mpercent p just a char variable bt with that ongoing, it becomes a reference variable
        cout<< p <<" - ";
        if(p >= 'A' && p<= 'Z') p += 32;
        cout<< p <<" , ";
    }
    cout<< s << endl;
    

    return 0;
}
