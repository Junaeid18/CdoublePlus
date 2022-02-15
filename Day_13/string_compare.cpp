#include <iostream>
using namespace std;
int main()
{
    string s = "Junaeid";
    string s1 = "Jubaeid";

    int a = s.compare(s1);
    cout<<"value of a: "<<a<<endl;
    a>=0?(a>0?(cout<<"s1 is first"<<endl):(cout<<"Both are equal"<<endl)):(cout<<"s is first"<<endl);




    return 0;
}