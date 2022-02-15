#include <iostream>
using namespace std;
int main()
{
    string s = "O hello! Junaeid.How are you? how's your day going now and then?just say something man.";
    string j = "!,'";

    string::size_type index = s.find_first_not_of(j);
    while (index !=  string::npos)
    {
        //cout<<"Found '"<<s[index]<<"' at location = "<<index<<endl;
        s[index] = ' ';
        index = s.find_first_not_of(j,index+1);
    }
    cout<< "string : "<<s<<endl;




    return 0;
}