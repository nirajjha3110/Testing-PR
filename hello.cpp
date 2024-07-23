#include<iostream>
using namespace std;

int main() {
	cout << "Hello World" << endl;

	int age;
	cout << "Enter your age: ";
	cin >> age;

	if(age >= 18) {
		cout << "Hey, you are eligible to vote" << endl;
	} else {
		cout << "You are not allowed to vote." << endl;
	}
}
