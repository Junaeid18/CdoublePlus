#include <iostream>
#include <string>
using namespace std;
int main()
{
    string j = "Junaeid is the best boy infront of me right now.";
    /*
    j.clear();
    if(j.empty()){
        cout<< "String is empty";
    }else{
        cout<< "String is not empty";
    }
    */
    /*
    j.erase(j.begin()+5,j.end()-5);
    cout<< "String : " <<j<<endl;
    */
    j.erase(j.end()-1);
    cout<< "String : "<<j <<endl;




    return 0;
}