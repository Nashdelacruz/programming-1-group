#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int p1;
	int p2;
	cout << "Enter your grade: " << endl;
	cin >> p1;
	if (p1 >= 75 && p1 <= 79) {
		cout << "Your grade is 3.0";
	}
	else if (p1 >= 80 && p1 <= 89) {
		cout << "Your grade is 2.0";
	}
	else if (p1 >= 90 && p1 <= 100){
		cout << "Your grade is 1.0";
	}
	else if ((p1 <= 75 && p1 >= 0)|| p1 > 100) {
		cout << "Grade must be greater or equal to 75 but not greater than 100";
	}
	else {
		cout << "Your grade is invalid!" << endl;
	}

	//switch (p1) {
	//case 1:
	//	cout << "Chicken: 1. 1pcs Chicken\n2. 2pcs Chicken\n3. 3pcs Chicken" << endl;
	//	cin >> p2;
	//	if (p2 == 1) {
	//		cout << "1 pcs chicken" << endl;
	//	}
	//	else if (p2 == 2) {
	//		cout << "2 pcs chicken" << endl;
	//	}
	//	else if (p2 == 3) {
	//		cout << "3 pcs chicken" << endl;
	//	}
	//	break;
	//case 2:
	//	cout << "Two" << endl;
	//	main();
	//	break;
	//case 3:
	//	cout << "Three" << endl;
	//	main();
	//	break;
	//default:
	//	cout << "You have entered an  invalid option" << endl;
	//	main();
	//	break;
	//}

	//main();
}