#include<iostream>
using namespace std;

void bin(unsigned n)
{
    /* step 1 */
    if (n > 1)
        bin(n / 2);
 
    /* step 2 */
    cout << n % 2;
}

int main(void){
    cout << "\n";
    int a = 9; // 1001
    int b = 7; // 0111

    cout<<"a&b (bitwise AND) : "<<(a&b)<<" -> "; bin(a&b); cout<<"\n";
    cout<<"a|b (bitwise OR) : "<<(a|b)<<" -> "; bin(a|b); cout<<"\n";
    cout<<"a^b (bitwise XOR) : "<<(a^b)<<" -> "; bin(a^b); cout<<"\n";
    cout<<"a<<2 (left shift a two times) : "<<(a<<2)<<" -> "; bin(a<<2); cout<<"\n";
    cout<<"a>>b (right-shift a 2 times) : "<<(a>>2)<<" -> "; bin(a>>2); cout<<"\n";
    cout<<"~a (bitwise NOT) : "<<(~a)<<" -> "; bin(~a); cout<<"\n";

    cout<<"\n";
}