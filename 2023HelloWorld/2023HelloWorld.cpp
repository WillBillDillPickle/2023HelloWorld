#include <iostream>
using namespace std;

int main() {
	cout << "Hello World!" << '\n';
	int myNumber;
	myNumber = 15;
	cout << myNumber << endl;
	int x_1, y_1, z_1;
	x_1 = 5;
	y_1 = 6;
	z_1 = 7;
	cout << x_1 + y_1 + z_1 << endl;

	//int W;
	//cout << "Type a number: "; // Type a number and press enter
	//cin >> W; //Get the user input from the keyboard
	//cout << "Your number is: " << W << endl; //Display the input value


	//Method 1 for a simple calculator

	int A;
	cout << "Type 2 numbers please." << endl; // String
	cout << "Number 1: "; // Number 1;
	cin >> A; // Get Number 1;

	int B;
	cout << "Number 2: "; // Number 2;
	cin >> B; // Get Number 2;

	cout << "Sum: " << A + B << endl;

	//Method 2 for a simple calculator

	int x, y;
	int sum;
	cout << "Type a number: ";
	cin >> x;
	cout << "Type another number: ";
	cin >> y;
	sum = x + y;
	cout << "Sum is: " << sum << endl;
	
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

/*asdasdasdasdasd*/


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
