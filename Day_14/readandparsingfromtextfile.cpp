#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>
using namespace std;
double getAvg(string marks);
string getGrade(double avg);
int main()
{
    ifstream f;
    f.open("data2.txt");
    if(!f){
        cout<<"Error in opening file"<<endl;
        exit(1);
    }
    string line;
    while (!f.eof())
    {
        getline(f,line);
        cout<<"Original line : "<<line<<endl;
        istringstream var(line);
        string name;
        string marks;
        getline(var,name,':');
        getline(var,marks,':');
        //cout<<"I am here"<<endl;
        double avg_value = getAvg(marks);
        // cout<<"avg: " <<avg_value<<endl;
        string grade_val = getGrade(avg_value);
        cout<<"Name : "<<name<<" -- Marks : "<<marks<<" --Average : "<<avg_value<<" --grade : "<<grade_val<<endl;    
    }
    
    return 0;
}

double getAvg(string marks){
    istringstream var2(marks);
    string s;
    int count;
    double total {0};
    while (!var2.eof())
    {
        getline(var2,s,',');
        ++count;
        total = total + atoi(s.c_str());
    }
    double avg = (double)total/count;
    //cout<<"avg : "<<avg<<endl;
    return avg;
}
string getGrade(double avg){
    /* string grade = avg>=90?grade="A":((avg>=80&& avg<90)?grade="B":
    ((avg>=70&& avg<80)?grade="C":(avg>=60&& avg<70)?grade="D":(avg>=60&& avg<50)?grade="C":grade="F"));
    cout<<"Grade : "<<grade<<endl; */
    string grade;
    if(avg>=90) grade = "A";
    else if(avg>=80 && avg<90) grade = "B";
    else if(avg>=70 && avg<80) grade = "C";
    else if(avg>=60 && avg<70) grade = "D";
    else grade = "F";
    return grade;
}