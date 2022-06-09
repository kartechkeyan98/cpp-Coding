#include<iostream>
#include<string>
using namespace std;

int main(void){
    cout << "\n";
    string str = "geeksforgeeks a computer science";
    string str1 = "geeks";
    cout<<"string to search from : "<<str<<endl;
    cout<<"substring to search : "<<str1<<endl;
  
    // Find first occurrence of "geeks"
    int found = str.find(str1);
    // npos denotes length of string and hence end of it as well
    if (found != string::npos)
        cout << "First occurrence is " << found << endl;
  
    // Find next occurrence of "geeks". Note here we pass
    // "geeks" as C style string.
    char arr[] = "geeks";
    found = str.find(arr, found+1);
    if (found != string::npos)
        cout << "Next occurrence is " << found << endl<<endl;
  

    
    // Only search first 5 characters of "geeks.practice"
    string str2 = "geeks.practice";
    cout << "Partially searching : "<<str2<<endl;
    found = str.find("geeks.practice", 0, 5);
    if (found != string::npos)
        cout <<"Partial first occurance at : "<< found << endl;
    
    cout<<"\n";
    return 0;
}