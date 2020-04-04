//	Swap Pointer
//	Demonstrates passing constants to alter arguments variables

#include <iostream>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int* const pX, int* const pY);

int main () {
	int myScore = 150;
	int yourScore = 1000;
	cout << "Original Values\n";
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";

	cout << "Calling badSwap\n";
	badSwap(myScore, yourScore);
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";

	cout << "Calling goodSwap\n";
	goodSwap(&myScore, &yourScore);
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";

	return 0;
}

void badSwap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int* const pX, int* const pY) {
	//	store value pointed to by pX in temp
	int temp = *pX;
	//	store value ponited to by pY in address ponited to by pX
	*pX = *pY;
	//	store value originally pointed to by pX in address pointed to by pY
	*pY = temp;
}
