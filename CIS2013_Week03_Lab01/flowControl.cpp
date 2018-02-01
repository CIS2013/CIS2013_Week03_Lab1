#include <iostream>
using namespace std;

int main() {
	char continueProgram = 'x';

	for (int i = 99; i >= 0; i--) {
		if (i == 1) {
			cout << i << " bottle of beer on the wall" << endl;
		}
		else if (i == 0) {
			cout << "No more bottles of beer on the wall" << endl;
		}		else {			cout << i << " bottles of beer on the wall" << endl;		}
	}
	
	//do {

	//	cout << "Do you want to continue (y/n)" << endl;
		cin >> continueProgram;

	//	switch (continueProgram) {
	//		case 'y':
	//			cout << "Going to continue" << endl;
	//			break;
	//		case 'n':
	//			cout << "Going to exit" << endl;
	//			break;
	//		default:
	//			continueProgram = 'y';
	//	}
	//} while (continueProgram == 'y');
	
	return 0;
}
