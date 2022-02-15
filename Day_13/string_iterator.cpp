#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s {"Junaeid"};
    string::iterator it = s.begin();
    while(it != s.end()){
        cout<< *it << " , ";
        ++it;
    } 
    cout<< s << endl;

    string::reverse_iterator rit = s.rbegin();
    while(rit != s.rend()){
        cout<< *rit << " , ";
        ++rit;
    }
    cout<< s << endl;
    reverse(s.begin(),s.end());
    cout<< "After reversing the string : " << s<< endl;

    return 0;
}