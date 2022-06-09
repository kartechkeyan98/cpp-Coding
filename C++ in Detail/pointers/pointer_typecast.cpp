#include<bits/stdc++.h>
using namespace std;

int main(void){
    cout<<endl;
    int a = 1025;
    int *p = &a;
    char* p0;
    p0 = (char*)p;
    printf("Address p: %p, value *p : %d\n", p,*p);
    printf("Address p0: %p, value *p0 : %d\n\n", p0, *p0);
    for(int i = 0; i < sizeof(int); i++){
        printf("Address p0+%d : %p, value p0+%d : %d\n",i,p0+i,i,*(p0+i));
    }
    // see the difference?
    // 1025 in binary [4B] = 00000000  00000000  00000100  00000001
    //                       byte 3    byte 2    byte 1    byte 0
    // Dec value of bytes  =    0         0         4         1
    // So when *p0 reads only one byte being a char* type pointer, you get 00000001 which in decimal is 1. 
    cout<<endl;
}