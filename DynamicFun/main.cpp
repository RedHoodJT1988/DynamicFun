#include <iostream>
using namespace std;

int main()
{
	cout << boolalpha;
	int* myIntPtr = new int(123);
	bool* myBoolPtr = new bool(true);

	cout << *myIntPtr << endl;
	cout << *myBoolPtr << endl;

	delete myIntPtr;
	delete myBoolPtr;

	myIntPtr = nullptr;
	myBoolPtr = nullptr;

	return 0;
}