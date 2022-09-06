// CGT 215
// Lab 3
// Gabby Willard

#include <iostream>
using namespace std;

// Input Choice
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}

// Input Numbers
void getChoices(float& A, float& B) {
	cout << "Please enter the first value: ";
	cin >> A;
	cout << "Please enter the second value: ";
	cin >> B;
}

// Performing Calculations
// Addition
void addition(float A, float B) {
	float ans_add = A + B;
	cout << A << " + " << B << " = " << ans_add << endl;
}
// Subtraction
void subtraction(float A, float B) {
	float ans_sub = A - B;
	cout << A << " - " << B << " = " << ans_sub << endl;
}
// Multiplication
void multiplication(float A, float B) {
	float ans_mult = A * B;
	cout << A << " * " << B << " = " << ans_mult << endl;
}
// Division
void division(float A, float B) {
	float ans_div = A / B;
	cout << A << " / " << B << " = " << ans_div << endl;
}


// Main
int main() {
	// Variables
	int choice;
	float A;
	float B;

	// User Input Prompts
	printMenu(choice);
	getChoices(A, B);

	// Run the correct choice
	if (choice == 1) {
		addition(A, B);
	}
	if (choice == 2) {
		subtraction(A, B);
	}
	if (choice == 3) {
		multiplication(A, B);
	}
	if (choice == 4) {
		division(A, B);
	}
	return 0;
}
