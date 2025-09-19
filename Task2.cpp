#include<iostream>
using namespace std;

int main(){
	int size;
	cout << "Total number of employees: ";
	cin >> size;

	int* salArray = new int[size];

	//input salaries
	cout << "INPUT SALARIES OF EMPLOYEES" << endl << endl;
	for (int i = 0; i < size; i++){
		cout << "Employee " << (i + 1) << " : ";
		cin >> salArray[i
	for (int i = 0; i < size; i++){
		cout << endl << "Employee " << (i + 1) << " : " << salArray[i];
	}
	cout << endl;
	delete[] salArray;
	system("pause");
	return 0;
} 
