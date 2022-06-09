// previous file:- dynamicMemory.cpp

// This file also contains function pointers.
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

// correct version of fn return, see wrong version in notes.
void phw(){
    printf("Hello, World!\n");
}

int* Add(int *a, int *b){
    int* c=(int*)malloc(sizeof(int));
    *c = (*a)+(*b);
    return c;
}

int adder(int a, int b){
    return a+b;
}

int main(void){
    int a = 2, b = 4;
    int *p = Add(&a,&b);
    phw();
    printf("%d\n\n", *p);
    free(p);

    int (*f)(int,int);  // you have defined a pointer to adder type function and passed in address of adder.
    f= &adder;
    //usage:
    int c = (*f)(2,3); // *f part is where you dereference the pointer to get function.
    printf("using function pointer: 2+3=%d\n",c);
    // for example, we can do:- (for function we previously wrote)
    int* (*g)(int*,int*) = Add; // name of a function gives you the pointer....
    int* C = g(&a,&b);
    printf("using fn ptrs - C: %p, *C: %d\n", C,*C);
    free(C);
}

// next file:- callback.cpp
