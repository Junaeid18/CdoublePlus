#include <iostream>
#include <iomanip>
using namespace std;
int* function(int n){
    int count {0}, *p {new int[n]};
    while(count < n){
        *(p+count) = rand() % 1000;
        ++count;
    }
    return p;
}

int main()
{
    int* p = function(100);    
    int count {0};
    while(count < 100){
        cout<<setw(10)<<p[count]<<endl;
        ++count;
    }
    delete [] p; // when the task is complete then we have to delete the dynamic memory or heap which we allocated.
                 //if we don't do this then the pointer will be vanished because that was compile time memmory allocation
                 //but it will remain.So after some time there will be no place in the heap to store data and os will stuck
                 //it's a big problem when working with the dynamic memory and will cause memory leak.
    return 0;
}