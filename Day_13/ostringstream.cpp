#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string s = "Junaeid";
    int age {24};
    ostringstream oss;
    oss<<s<<":"<<age;
    string s1 = oss.str();
    cout<< s1<<endl;



    return 0;
}