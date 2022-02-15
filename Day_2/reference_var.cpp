// only one main function can be here, so inorder to execute this program we need to change the first one
//The use of reference variable

#include <iostream>
using namespace std;
int main()
{
    int x = 100;
    int &r {x};
    cout<<"r is = "<<r<<" "<<endl;
    r++;
    cout<<"r is = "<<r<<" "<<endl;
    cout<<"x is = "<<x<<" "<<endl;
    return 0;
}
