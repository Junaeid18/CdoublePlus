
    int s = 50,t = 2;
    cout<<"Address of int s : "<<(unsigned long long)&s<<endl;
    cout<<"Address of int t : "<<(unsigned long long)&t<<endl;
    int* a = &s;
    cout<<"Value pointed by pointer a : "<<*a<<endl;
    *a +=1;
    cout<<"Magic happened : "<<s<<endl;
    cout<<"Size of variable : "<<sizeof(*a)<<endl;
    char *b;
    cout<<"Size of char b : "<<sizeof(b)<<endl;
    cout<<"Size of char *b : "<<sizeof(*b)<<endl;
    double* c;
    cout<<"Size of char c : "<<sizeof(c)<<endl;
    cout<<"Size of char *c : "<<sizeof(*c)<<endl;
    cout<<"Size of casted s : "<<(unsigned long long)&s<<endl;
    cout<<"Size of casted t : "<<(unsigned long long)&t<<endl;
    long long int junaeid = 6;
    cout<<sizeof(junaeid)<<endl;

    a +=1;
    cout<<"Content now : "<< a<<endl;
   