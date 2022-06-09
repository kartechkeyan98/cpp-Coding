//previous file:- pointer_return.cpp
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

void A(){
    cout<<"Hello!\n";
}
void B(void (*p)()){
    p(); //call-back function that p points to.
}
// comapare ranks two ints on some basis and return 1 if int 1 is of higher rank, else -1
int compare(const void* a, const void* b){
    int A = *((int*)a); // we pass in pointers as void* pointers
    int B = *((int*)b);
    if(abs(A)>abs(B)) return 1;
    else return -1;
}
void bubble(int *A, int n, int (*compare)(const void*,const void*)){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(compare(A+j, (A+j+1))>0){
                int t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }
}

int main(void){
    cout<<"\n";
    // Function callback
    B(A); // B calls A.

    int A[] = {53,48,-33,67,55,-12,-98,-45,65,77};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"bubble sorted:- ";
    bubble(A,n,compare); // name of function is a pointer to itself.
    for(int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");

    // using qsort in stdlib
    int B[] = {53,48,-33,67,55,-12,-98,-45,65,77};
    cout<<"qsorted:- ";
    qsort(B,n,sizeof(int),compare); // for qsort, args are array base pointer, size, size of each element, and a compare function ptr.
    // and compare fn should have void* ptr as args, so had to make wierd mod.
    for(int i = 0; i < n; i++) printf("%d ", *(B+i));
    cout<<"\n\n";
}

// next file:- memeoryLeak.cpp