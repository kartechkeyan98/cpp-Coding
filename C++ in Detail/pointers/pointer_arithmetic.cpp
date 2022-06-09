// previous file:- pointer_basics.cpp
#include<iostream>
using namespace std;

void bin(int n)
{
    long i;
    int c = 30;
    cout << "0";
    for (i = 1 << 30; i > 0; i = i / 2)
    {
        if((n & i) != 0)
        {
        cout << "1";
        }
        else
        {
        cout << "0";
        }
        if(c%8 == 0){
            cout<<"    ";
        }
        c--;
    }
    cout << endl;
}

int main(void){
    cout<<endl;

    int a = 10; // def + init an int - a
    int *p = &a; // def + init a pointer to an int - p
    // pointer arithmetic
    cout<<"address p is : "<<p<<endl;
    cout<<"value at address p is : "<<*p<<endl;
    cout<<"size of int : "<<sizeof(int)<<endl;
    cout<<"address p+1 is : "<<p+1<<endl; //notice that you have moved 4 bytes ahead
    cout<<"value at address p+1 : "<< *(p+1)<<endl; //garbage value
    
    cout<<endl;

    // some tricks
    a = 1025; // binary of this will be 00000000 00000000 00000100 00000001
    // p points to &a, remember?
    long long c = (long long)p; // just to show which bytes store what part in an int.
    cout<<"binary of a = 1025 and bytes that store it:- "<<endl;
    bin(a);
    cout <<"byte 3      byte 2      byte 1      byte 0"<<endl;
    cout<<hex<<c+3<<"  "<<hex<<c+2<<"  "<<hex<<c+1<<"  "<<hex<<c<<endl;

    cout<<"\n";

    // double and triple pointer
    a = 1024;
    int **q = &p; // a pointer to a pointer stores the address of p
    int ***r = &q; // stores the address of q
    cout<<"*p : "<<*p<<" = a (: "<<a<<")"<<endl;
    cout<<"*q : "<<*q<<" = p (: "<<p<<")"<<endl;
    cout<<"**q : "<<**q<<" = a (: "<<a<<")"<<endl;
    cout<<"*r : "<<*r<<" = q (: "<<q<<")"<<endl;
    cout<<"**r : "<<**r<<" = p (: "<<p<<")" <<endl;
    cout<<"***r : "<<***r<<" = a (: "<<a<<")"<<endl;

    cout<<endl;
}
// supplemental file:- pointer_typecast.cpp
// next file:- pointer_as_function_arg.cpp