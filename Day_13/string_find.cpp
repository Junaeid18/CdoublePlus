#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "Doing something is the best is amfore was that isn't done yet.";
    string j = "is";
    string::size_type index = s.find(j);
    //cout<< "String '"<<j<<"' is found on index no : "<<index<<endl;

    while(index != string::npos){
        cout<< "String '"<<j<<"' is found on index no : "<<index<<endl;
        index = s.find(j,index+1);
    }





    return 0;
}