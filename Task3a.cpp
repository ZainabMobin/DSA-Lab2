#include<iostream>
using namespace std;
void analyzePointer(int* ptr){
	cout << "Address pointed by pointer ptr: " << ptr;
	cout << "\nValue in pointed address: " << *ptr;
}

int main(){
	int a = 17;
	int *ptr = &a;
	analyzePointer(ptr);
	
	system("pause");
	return 0;
}