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
		cin >> salArray[i];
	}

	//update salaries
	for (int j = 0; j < size; j++)
		salArray[j] = (salArray[j]+salArray[j])/(j+1);

	//output updates salaries
	cout << endl << "UPDATED SALARIES";
	for (int i = 0; i < size; i++){
		cout << endl << "Employee " << (i + 1) << " : " << salArray[i];
	}
	cout << endl;
	delete[] salArray;
	return 0;
}