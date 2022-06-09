// C++ program to print sizes of datatypes
#include<iostream>
#include<limits.h>
using namespace std;

int main(void){
    cout<<"\n";
    cout<<"Char and variants"<<endl;
    cout<<"`````````````````"<<endl;
    // char
    cout<<"size of char : "<<sizeof(char)<<" byte(s)"<<endl;
    cout<<"char min value: "<<CHAR_MIN<<endl;
    cout<<"char max value: "<<CHAR_MAX<<endl<<endl; 
    // by max and min value, it means the ascii values.
    //signed char
    cout<<"size of signed char : "<<sizeof(signed char)<<" byte(s)"<<endl;
    cout<<"signed char min: "<<SCHAR_MIN<<endl;
    cout<<"signed char max: "<<SCHAR_MAX<<endl<<endl;
    //unsigned char
    cout<<"size of unsigned char : "<<sizeof(unsigned char)<<" byte(s)"<<endl;
    cout<<"signed char min: "<<0<<endl;
    cout<<"signed char max: "<<UCHAR_MAX<<endl<<endl;
    // misc.
    cout<<"number of bits in char type object : "<<CHAR_BIT<<endl;
    cout<<"maximum no.of bytes in a multibyte character : "<<MB_LEN_MAX<<" bytes(s)"<<endl;

    cout<<"\n\n";

    cout<<"int and variants"<<endl;
    cout<<"````````````````"<<endl;
    //short int (this is signed so, no need to put 'signed' prefix)
    cout<<"size of short int : "<<sizeof(short int)<<" byte(s)"<<endl;
    cout<<"short int min value : "<<SHRT_MIN<<endl;
    cout<<"shor int max value : "<<SHRT_MAX<<endl<<endl;
    //unsigned short int
    cout<<"size of unsigned short int : "<<sizeof(unsigned short int)<<" byte(s)"<<endl;
    cout<<"unsigned short int min value : "<<0<<endl;
    cout<<"unsigned short int max value : "<<USHRT_MAX<<endl<<endl;

    //int (this is signed, so no need to put 'signed' prefix)
    cout<<"size of int : "<<sizeof(int)<<" byte(s)"<<endl;
    cout<<"int min value: "<<INT_MIN<<endl;
    cout<<"int max value: "<<INT_MAX<<endl<<endl;
    //unsigned int
    cout<<"size of unsigned int : "<<sizeof(unsigned int)<<" bytes(s)"<<endl;
    cout<<"unsigned int min value: "<<0<<endl;
    cout<<"unsigned int max value: "<<UINT_MAX<<endl<<endl;
    
    //long (again a type of int but with more bytes assigned to it)
    cout<<"size of long : "<<sizeof(long)<<" bytes(s)"<<endl;
    cout<<"long min value: "<<LONG_MIN<<endl;
    cout<<"long max value: "<<LONG_MAX<<endl<<endl;
    //unsigned long
    cout<<"size of unsigned long : "<<sizeof(unsigned long)<<" byte(s)"<<endl;
    cout<<"unsigned long min value: "<<0<<endl;
    cout<<"unsinged long max value: "<<ULONG_MAX<<endl<<endl;

    //long long (longer than a 'long')
    cout<<"size of long long : "<<sizeof(long long)<<" byte(s)"<<endl;
    cout<<"long long min value: "<<LLONG_MIN<<endl;
    cout<<"long long max value: "<<LLONG_MAX<<endl<<endl;
    //unsigned long long
    cout<<"size of unsigned long long : "<<sizeof(unsigned long long)<<" byte(s)"<<endl;
    cout<<"unsigned long long min value: "<<0<<endl;
    cout<<"unsinged long long max value: "<<ULLONG_MAX<<endl<<endl;

    cout<<"\n";

    cout<<"float and double"<<endl;
    cout<<"````````````````"<<endl;
    //float
    cout<<"size of float : "<<sizeof(float)<<" byte(s)"<<endl;
    cout<<"range of float: (-3.40282347E+38, 3.40282347E+38)"<<endl;
    cout<<"precision: 6-7 sig digs"<<endl<<endl;
    //double
    cout<<"size of double : "<<sizeof(double)<<" byte(s)"<<endl;
    cout<<"range of double: (-1.79769313486231570E+308, 1.79769313486231570E+308)"<<endl;
    cout<<"precision: 15-16 sig digs"<<endl<<endl;

    //wchar_t (used for representing more characters than ascii encoding can)
    cout<<"wide character"<<endl;
    cout<<"``````````````"<<endl;

    cout<<"size of wchar_t : "<<sizeof(wchar_t)<<" byte(s)"<<endl;
    cout<<"wchar_t min value: "<<WCHAR_MIN<<endl;
    cout<<"wchar_t max value: "<<WCHAR_MAX<<endl<<endl;

    cout<<"\n\n";

}