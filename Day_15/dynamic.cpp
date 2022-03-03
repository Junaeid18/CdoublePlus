#include <iostream>
#include <iomanip>
using namespace std;
int show(int *p,int a){
    int count {0};
    while(count < a){
        cout<<setw(5)<<p[count]<<endl;
        ++count;
    }
}
int main()
{
    int a;
    cout<<"Enter the size of a : ";
    cin>>a;
    int *p {new int[a]};
    int *num = new int(100);
    int count {0};
    while(count < a){
        cout<<"Enter value : ";
        cin>>*(p+count);
        ++count;
    }
    show(p,a);
    delete [] p;
    delete num;

    return 0;
}