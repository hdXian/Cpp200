#include <iostream>

using namespace std;

int main() {

	// fimd(arg1, arg2) -> return (arg1 > arg2) ? (arg1 - arg2) : ( 0 )
	cout << fdim(-1.0, 0.0) << endl;
	cout << fdim(1.0, 0.0) << endl;
	cout << fdim(0.0, 0.0) << endl;
	cout << fdim(5, 1) << endl;
	cout << fdim(6, 15) << endl;
	cout << fdim(4.9, 1.1) << endl;
	cout << fdim(5.9, 20.1) << endl;

	return 0;
}