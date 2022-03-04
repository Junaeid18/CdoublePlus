#include <iostream>
#include <iomanip>
using namespace std;
int* fun(int* p, int n){
    int* dest {new int[n]};
    for(int a = 0; a<n ; ++a){
        *(dest+a) = p[a];
    }
    return dest;
}
int main()
{
    int n;
    cin>> n;
    int *po {new int[n]};
    for (int i = 0; i < n; i++)
    {
        *(po+i) = rand()%100;
    }
    int* res = fun(po,n);
    delete [] po;
    for (int i = 0; i < n; i++)
    {
        cout<<setw(2)<<*(res+i)<<endl;
    }
    delete [] res;
    return 0;
}