#include <iostream>
#include <cstdlib>	//for malloc() and realloc() functions
using namespace std;

int main() {
	int n;
	cout << "Enter the size of the array:";
	cin >> n;
	int* arr = (int*)malloc(n*4); //5 Integers = 20 Bytes
	for (int i = 0; i < n; i++)
		arr[i] = i + 1;

	for (int i = 0; i < n; i++)
		cout <<endl<< "Element " << i + 1 << ":"<<arr[i];

	cout << endl << "Enter the new size: ";
	int newSize;
	cin >> newSize;
	//reallocate more memory and create a new pointer array
	int* newArr = (int*)realloc(arr, newSize * 4);
	arr = newArr;
	for (int i = n; i < newSize; i++){
		newArr[i] = i + 1;
	}
	for (int i = 0; i < newSize; i++)
		cout << endl<<"Element " << i + 1 << ":" << newArr[i];
	cout << endl;

	free(newArr);
	system("pause");

	return 0;
}
