#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
    ofstream f;
    f.open("Junaeid.txt");
    if(f.fail()){
        cout<<"Error in opening the file" << endl;
        exit(1);
    }
    f <<"Hello i am junaeid."<<endl;
    f<<"I am learing mainly recalling web development and fully learning the c++ language."<<endl;
    int a {2}, b {15}, c {2022};
    f<<"Date : "<<b<<" Month : "<<a<<" Year : "<<c<<endl;
    while(b > 0){
        f<<" "<<endl;
        --b;
    }
    f<<"I think it's enough for the time being"<<endl;
    f.close();


    return 0;
}