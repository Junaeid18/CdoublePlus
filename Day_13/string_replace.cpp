#include <iostream>
using namespace std;
int main()
{
    string s = "Junaeid is the better is happy isn't done.";
    string t = "is";
    string n = "was";

    string::size_type index = s.find(t);
    while (index != string::npos)
    {
        s.replace(index,t.size(),n);
        index = s.find(t,index+n.size());
    }
    cout<<"String : "<<s<<endl;




    return 0;
}