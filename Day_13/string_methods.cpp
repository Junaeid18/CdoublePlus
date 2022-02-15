#include <iostream>
using namespace std;
int main()
{
    string s = "Hope to see you soon in the long awaited run";
    cout<< "String condition now : " << s <<endl;
    s.push_back('.');
    cout<< "String condition now : " << s <<endl;
    s.pop_back();
    cout<< "String condition now : " << s <<endl;

    s.front() = 'h';
    cout<< "String condition now : " << s <<endl;
    s.back() = 'N';
    cout<< "String condition now : " << s <<endl;

    s.append(" And for now , just goodbye.");
    cout<< "String condition now : " << s <<endl;

    s.insert(0,"Junaeid ");
    cout<< "String condition now : " << s <<endl;



    return 0;
}