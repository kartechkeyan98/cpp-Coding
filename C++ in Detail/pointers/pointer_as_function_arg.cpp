// previous file:- pointer_arithmetic.cpp
#include<iostream>
using namespace std;

void increment(int a){
    a += 1;
    cout<<"address of a inside function : "<<&a<<endl;
}
void inc(int *p){
    *p += 1;
}
void swap(int *x, int*y){
    int t=*x;
    *x=*y;
    *y=t;
}
int main(void){
    cout<<endl;
    // as you will see, the value of a in main won't increment when you print it out.
    int a =10;
    increment(a);
    cout<<"address of a in main : "<<&a<<endl;
    cout<<"value of a in main : "<<a<<endl;
    inc(&a);
    cout<<"value of a after using inc : "<<a<<endl;
    //you see, if function takes in address as an argument, even if you call address by value,
    //the value stored in that particular address remains the same. 

    cout<<endl;

    //swap function
    int x=10,y=90;
    cout<<"value of x and y before swapping : "<<x<<"  "<<y<<endl;
    swap(&x,&y);
    cout<<"value of x and y after swapping : "<<x<<"  "<<y<<endl;
    
    cout<<endl;
}

//next file:- pointer_array.cpp