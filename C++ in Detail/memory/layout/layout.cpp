#include<iostream>
using namespace std;

int global; /*Uninitialized variable in bss*/

int main(void){
	int i = 100; //just have a look at size when you comment this line
	return 0;
}
