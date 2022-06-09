// previous file:- pointer_array.cpp
#include<stdio.h>
#include<string.h>

int main(void){
    // for a string we need an array to store chars
    // size of array >= no.of chars + 1
    // why +1? bcz, you need space for the '\0' character, which denotes end of string (EOS).

    // 1. How to store strings:-
    char c[8];
    c[0] = 'J'; c[1] = 'o'; c[2]='h'; c[3]='n'; c[4]='\0';
    printf("c: %s\n",c);
    int len = strlen(c);
    printf("Length: %d\n\n", len);
    // w/o null-termination, you might encounter errors

    // another way to do things right:- 
    char s[20] = "Kartik"; // \0 added automatically.
    printf("s: %s\n", s);
    len = strlen(s);
    printf("Length = %d\n",len);

    
}
// next file:- multiDim_array.cpp