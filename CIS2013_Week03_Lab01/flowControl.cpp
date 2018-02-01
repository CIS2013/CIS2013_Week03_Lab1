#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	
	char cont;
	srand(time(NULL));
	
	int num1 = rand() % 10 + 1;
	cout << "your random number is " << num1;
	cin >> cont;

	return 0;
}
