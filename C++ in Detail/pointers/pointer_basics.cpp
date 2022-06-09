#include<iostream>
using namespace std;

int main(){
    cout<<endl;

    int a; // defining an int
    int *p; // defining a pointer to an int
    a = 10; //initialize int
    p = &a; //initialize pointer
    cout<<"address pointed to by p: "<<p<<endl;
    cout<<"value of a : "<<a<<endl;
    cout<<"value stored in p (*p) : "<<*p<<endl<<endl;

    int b = 20;
    *p = b; // changing the value stored in the address p, NOT THE ADDRESS p points to!
    cout <<"address pointed to by p : "<<p<<endl;
    cout <<"value of a : "<<a<<endl;
    cout<<"value stored in p (*p) : "<<*p<<endl<<endl;
    p = &b; //changing which address p points to
    *p = 30; //changing value of what is stored in p-address.
    cout<<"address pointed to by p : "<<p<<endl;
    cout<<"value of a : "<<a<<endl;
    cout<<"value stored in p (*p) : "<<*p<<endl;
    cout<<"value of b : "<<b<<endl<<endl;
    

    cout << endl;
}

//next file:- pointer_arithmetic.cpp