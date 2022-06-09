// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<int> g1;
  
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
    
    // begin() returns iterator pointing to first element of vector
    // end() points to theoritical element after last element.
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
    
    // cbegin() return const iterator pointing to begenning element
    // similarly cend()
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";
    
    // rbegin() returns iterator pointing to last element of vector.
    // rend() returns itr pointing to theoritical element preceeding first element.
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
  
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";
  
    return 0;
}