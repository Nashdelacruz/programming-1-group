#include <iostream>
#include <string>
//#include "filename.h" (Custom Library)
#define PI 3.14169
#define NAME "John Doe"

using namespace std;

int main() {
	int x;
	string y;
	cout << PI << endl;
	cout << NAME << endl;
	cout << "Hello World!" << endl;
	addNumber(2, 2);
	return 0; //Optional
}

int addNumber(int input1,int input2) {
	return input1 + input2;
}