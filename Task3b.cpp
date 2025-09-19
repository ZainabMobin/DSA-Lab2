#include<iostream>
using namespace std;
void analyzePointer(int* ptr){
	cout << "\nAddress pointed by pointer ptr: " << ptr;
	cout << "\nValue in pointed address: " << *ptr << endl;
}

int main(){
	//int allocated on the stack
	int iValue;
	cout << "Enter an integer (to be allocated on stack):";
	cin >> iValue;
	int *ptr = &iValue;
	analyzePointer(ptr);
	
	//int allocated on the heap
	int iheap;
	cout << endl << "Enter an integer (to be allocated on heap):";
	cin >> iheap;
	int* pint2 = new int;
	*pint2 = iheap;
	analyzePointer(pint2);

	delete pint2;
	system("pause");
	return 0;
}