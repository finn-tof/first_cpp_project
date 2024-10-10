#include <iostream>
using namespace std;

int main() {
    float sum;
    float num1, num2, num3, average;

    cout << "Note: Please enter three numbers separated by spaces." << endl; // Instructions for the user
    cout << "Example: 5 10 15" << endl << endl; // Show an example input

    cout << "Enter three numbers: "; // Prompt user for input
    cin >> num1 >> num2 >> num3;

    sum = num1 + num2 + num3; // Calculate the sum of the numbers
    cout << "The sum of three numbers is: " << sum << endl; // Display the sum

    average = sum / 3; // Calculate the average
    cout << "The average is: " << average << endl;

    return 0;
}