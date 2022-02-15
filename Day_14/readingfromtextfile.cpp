#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
    ifstream f;
    f.open("data_1.txt");
    if(!f){
        cout<< "Error in opening the file"<<endl;
        exit(1);
    }
    int var,count {0},sum {0};
    double avg {0};
    while (!f.eof())
    {
        f >> var;
        ++count;
        cout<< "Integer : " << var << endl;
        sum+=var;
    }
    f.close(); 
    cout<<endl;
    avg = (double)sum/count;
    cout<<"No of integer in the text file : "<<count<<"  and their sum is : "<< sum << "  with the avg of : "<< avg<<endl;



    return 0;
}