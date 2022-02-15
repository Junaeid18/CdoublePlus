#include <iostream>

using namespace std;
//void fun(int* ,int);
//void fun(int [],int);
/*
void fun(int (&p)[5]){
    for(int i = 0; i<5;++i){
        cout<<p[i]<<" ";
    }
}
*/
//not valid
/*
void countx(int x[]){
    cout<<"From here :- "<<endl;
    for(int a:x){
        cout<<a<<" ";
    }
}
*/

int main()
{
    //cout << "Hello world!" << endl;
    /*
    int arr[10];
    arr[0] = 10;
    arr[1] = 20;
    arr[9] = arr[1]+arr[0];
    cout<<"Arr[9] = "<<arr[9]<<endl;
    */

    /*
    int n;
    cout<<"Enter how many value to insert : ";
    cin>>n;
    while(!(n>0 && n<=100)){
        cout<<"Input again  : ";
        cin>>n;
    }
    int arr[n];
    for(int i = 0; i<n; ++i){
        cout<<"Enter input for index "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<"Content of array : ";
    for(int i = 0 ; i<n; ++i){
        cout<<arr[i]<<" ";
    }
    */

    /*
    int arr[5] = {0};
    for(int i = 0; i < 5; ++i){
        cout<<i[arr]<<" "<<*(arr+i)<<" ";
    }
    */

    /*
    int a[5] = {10,20,30,40,50};
    fun(a,5);
    */

    /*
    int ar[5] = {10,20,30,40,50};
    fun(ar);
    */
    /*
    int x[] = {1,2,3,4,5,6,7,8,9};
    for(int p:x){
        cout<<p<<" ";
    }
    countx(x[]);
    */
    const int rows {100};
    const int cols {100};
    int arr[rows][cols];
    int nrow,ncol;
    cout<<"Enter number of rows user want to use : ";
    cin>>nrow;
    while(nrow<=0 || nrow>rows){
        cout<<"Invalid input,try again : ";
        cin>>nrow;
    }
    cout<<"Enter number of cols user want to use : ";
    cin>>ncol;
    while(ncol<=0 || ncol>cols){
        cout<<"Invalid input,try again : ";
        cin>>ncol;
    }
    for(int i = 0; i < nrow ; ++i){
        for(int j = 0; j < ncol ; ++j){
            cout<<"Enter element for Row : "<<i<<" "<<"Column : "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < nrow ; ++i){
        for(int j = 0; j < ncol ; ++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
/*
void fun(int *p,int n){
    for(int i = 0; i < n; ++i){
        cout<<*(p+i)<<" ";
    }
}
*/
/*
void fun(int p[],int n){
    for(int i = 0; i < n; ++i){
        cout<<*(p+i)<<" ";
    }
}
*/
