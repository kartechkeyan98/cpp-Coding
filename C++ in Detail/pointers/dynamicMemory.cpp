// previous file:- multiDim_array.cpp
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void print_array(int *A, int n){
    for(int i = 0; i < n; i++){
        cout << *(A+i) << " ";
    }
    cout<<"\n";
}

int main(void){
    // C style

    int a; //goes on stack.
    int *p = (int*)malloc(sizeof(int)); //we have a pointer on stack, which points to a chunk of memeory on heap.
    *p = 10;
    free(p); // if you don't free previously assigned memory, you'll run into problems
    p = (int*)malloc(sizeof(int));  // if no memory present, it will throw NULL pointer
    *p = 20;
    free(p);    // always free the mempry you allocate!!!

    p = (int*)malloc(20*sizeof(int)); // will return a contiguous block of memory worth 20 ints!
    // and you can access the address by p, p+1, p+2.... or &p[0],&p[1].... just like arrays
    // p gives you base address of block of ints!
    free(p);

    
    // C++ style

    int b; // goes on stack
    int *q = new int; // assigns a chunk in heap for our purposes
    *q = 10;
    delete q;   // free the memory allocated to you.
    q = new int[20];    // assign contiguous block of memory.
    delete[] q;

    int n;
    printf("Enter size of array:- ");
    scanf("%d",&n);

    // malloc
    printf("malloc:-\n");
    int *A = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        *(A+i) = i+1;
    }
    print_array(A,n);
    free(A);

    printf("\ncalloc:-\n");
    int *B = (int*)calloc(n,sizeof(int));
    printf("uninit- ");
    print_array(B,n);
    for(int i = 0; i < n; i++){
        *(B+i)=i+1;
    }
    printf("init- ");
    print_array(B,n);
    free(B);
    cout<<"\n";

    int n1;
    printf("Enter number of elements:- ");
    scanf("%d",&n1);
    int *R = (int*)malloc(n1*sizeof(int));
    printf("malloc used uninit:- ");
    print_array(R,n1); // malloc uninit
    for(int i = 0; i < n1; i++){
        *(R+i) = i*i;
    } 
    printf("malloc init:- ");
    print_array(R,n1);

    // suppose you wanna extend this block..
    int *S = (int*)realloc(R,2*n1*sizeof(int));
    printf("\nS (array): ");
    print_array(S,2*n1); //garbage values after n1.
    // This will give you same base address as R if possible to extend the memory contiguously
    // if not, then a new block.
    printf("R: %p, S: %p\n", R,S);
    printf("Extended:- ");
    for(int i = 0; i < 2*n1; i++){
        *(S+i) = (i+1)*(i+1);
    }
    print_array(S,2*n1); 
    printf("Shrink:- ");
    S = (int*)realloc(S,n1*sizeof(int)); // created a copy of R this way...
    print_array(S,n1); //the first n1 values get copied, rest destroyed. Try print_array(S,2*n1).

    S = (int*)realloc(S,0); // same as using free, cuz of size.
    R = (int*)realloc(R,0); // hence we've freed all dynamically alloc variables.


}

//next file:- pointer_return.cpp