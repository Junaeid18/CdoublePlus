#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string s = "Junaeid:10,Nipa:100,Jubaeir:50,Fool:0";
    istringstream ss (s);

    string part;
    while(getline(ss,part,',')){
        istringstream ss2 (part);
        string part2;
        while (getline(ss2,part2,':'))
        {
            cout<<part2<<endl;
        }
        
    }

    string j = "10 20 30 40";
    istringstream ss3 (j);
    int a;
    while (ss3 >> a)
    {
        cout<<a<<endl;
        if(ss3.peek() == ' '){
            ss3.ignore();
        }
    }
    
    string jun = "Junaeid,1,forhad,2,mahadi,3";
    istringstream iss (jun);
    string part3;
    while (getline(iss,part3,','))
    {
        cout<<part3<<endl;
        if(iss.peek() == ','){
            iss.ignore();
        }
        
    }
    





    return 0;
}