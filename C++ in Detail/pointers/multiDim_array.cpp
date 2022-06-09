// previous file:- strings.c
#include<bits/stdc++.h>
using namespace std;

int main(void){
    cout<<"\n";
    int B[2][3];
    B[0][0]=2; B[0][1]=3; B[0][2]=6; 
    B[1][0]=4; B[1][1]=5; B[1][2]=8;

    // [[2 3 6] [4 5 8]]
    // B[0] & B[1] are 1-D array of 3 ints.
    // defining a ptr to contain B -> address to array of 3 ints.

    int (*p)[3] = B; 

    // ptr to arrays B[0] and B[1]:- you get ptrs to arrays
    cout<<"B or &B[0]: "<<B<<endl;
    cout<<"B+1 or &B[1]: "<<B+1<<endl<<endl; // should be 12 (or c in hex) blocks away

    // the arrays themselves:- you get the ptrs to elements of arrays.
    cout<<"First array:-  ";
    cout<<"*B->B[0]->&B[0][0]: "<<*B<<", ";
    cout<<"(*B+1)->(B[0]+1)->&B[0][1]: "<<(*B+1)<<", ";
    cout<<"(*B+2)->B[0]+2->&B[0][1]: "<<(*B+2)<<endl;

    cout<<"Second Array:-  ";
    cout<<"*(B+1)->B[1]->&B[1][0]: "<<*(B+1)<<", ";
    cout<<"*(B+1)+1->B[1]+1->&B[1][1]: "<<*(B+1)+1<<", ";
    cout<<"*(B+1)+2->B[1]+2->&B[1][2]: "<<*(B+1)+2<<endl<<endl;

    // the elements of the array themselves:
    // dereference the 6 above
    cout<<"B[0]:-  ";
    cout<<"B[0][0]: "<<**B<<", ";
    cout<<"B[0][1]: "<<*(*B+1)<<", ";
    cout<<"B[0][2]: "<<*(*B+2)<<endl;

    cout<<"B[1]:-  ";
    cout<<"B[1][0]: "<<*(*(B+1))<<", ";
    cout<<"B[1][1]: "<<*(*(B+1)+1)<<", ";
    cout<<"B[1][2]: "<<*(*(B+1)+2)<<endl<<endl;

    // 3-D array:
    int c[3][2][2] = {{{2,5},{7,9}},
                      {{3,4},{6,1}},
                      {{0,8},{11,13}}};
    //c, c+1 and c+2 are ptrs to 2D arrays.
    cout<<"c: "<<c<<", c+1: "<<c+1<<", c+2: "<<c+2<<endl<<endl;

    // dereference them and get resp. 2D arrays, i.e. ptr to first 1D array in each of them.
    cout<<"c[0]:- *c (&c[0][0]): "<<*c<<", *c+1 (&c[0][1]): "<<*c+1<<endl;
    cout<<"c[1]:- *(c+1) (&c[1][0]): "<<*(c+1)<<", *(c+1)+1 (&c[1][1]): "<<*(c+1)+1<<endl;
    cout<<"c[2]:- *(c+2) (&c[2][0]): "<<*(c+2)<<", *(c+2)+1 (&c[2][1]): "<<*(c+2)+1<<endl;
    // note that these increase in steps of 8. Hence they represent pointers to 1D array containing 2 ints.

    //dereference each of these to get 1D arrays, i.e. ptr to 1st element of each of the 1D arr.
    for(int i = 0; i < 3; i++){
        cout<<"\nc["<<i<<"]:-\n";
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                cout<<"*(*(c+"<<i<<")+"<<j<<")+"<<k<<": "<<*(*(c+i)+j)+k<<",  ";
            }
            cout<<"\n";
        }
    }
    cout<<"\n";
    // notice that these addresses increase in steps of 4 meaning they are pointers to ints.

    //
    cout<<"values obtaines by dereferencing the above\n";



}

//next file:- dynamicMemory.cpp