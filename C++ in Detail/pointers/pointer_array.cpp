// previous file:- pointer_as_function_arg.cpp
#include<iostream>
using namespace std;

int array_sum(int A[], int n){
    // you gotta pass size of array, n as an arg too, since when an array is passed as arg, it is passed as pointer
    // So, if you do something like:-
    int x = sizeof(A)/sizeof(A[0]);
    // you won't get size of array!! you'll actually get 8/4 = sizeof(pointer)/sizeof(int) = 2
    cout<<"sizeof(A)/sizeof(A[0]) = "<<x<<endl;
    int total = 0;
    for(int i = 0; i < n; i++){
        total += A[i];
    }
    return total;
}

void Double(int *A, int n){ // arrays are called by reference, hence you can mod array values in the function
    for(int t = 0; t < n; t++){
        A[t] *= 2;
    }
}

void print_array(int *A, int n){
    cout<<"A = [ ";
    for (int  i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"]"<<endl;
    
}

int main(void){
    cout<<endl;

    int A[5] = {14,58,65,15,78};

    //ways to print the elements and their addresses
    //array stores each element as a contiguous block in memeory.
    cout<<"address can be accessed by &A[i] or simply (A+i)"<<endl;
    cout<<"for example, first element A[0] lies in : "<<A<<endl<<endl;

    cout<<"values accessed as A[i] or *(A+i)"<<endl;
    cout<<"for example, value of A[0] : "<<*A<<endl<<endl;

    cout<<"the elements are stored in contiguous blocks"<<endl;
    cout<<"size of int : "<<sizeof(int)<<endl;
    for(int i = 0; i < 5; i++){
        cout<<"A["<<i<<"] = "<<A[i]<<"   A+"<<i<<" = "<<A+i<<endl;
    }
    cout<<"\n";
    //basically, name of array is pointer to first element and subsequent addresses point to other elements of array.
    int total = array_sum(A, 5);
    cout<<"array_sum(A,5) = "<<total<<endl<<endl;

    //manip array values by function
    Double(A,5);
    print_array(A,5);
    cout<<endl;
}

//next file:- strings.cpp