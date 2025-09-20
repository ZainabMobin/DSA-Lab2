#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void reverseArray(char* arr,int size){
	int left = 0;
	int right = size-1;
	char temp;
	while (left < right){
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;

		left++;
		right--;
	}
}

int main(){
	string s;
	cout << "\nEnter a String : ";
	cin >> s;
	char* arr = new char[s.size()+1];

	for (int i = 0; i < s.size(); i++){
		arr[i] = s[i];
	}
	arr[s.size()] = '\0';
	int length = strlen(arr);

	cout << "\nEntered String : ";
	for (int i = 0; i < length ; i++){
		cout << arr[i];
	}

	reverseArray(arr,length);
	cout << "\nReversed String: ";
	for (int i = 0; i < length ; i++){
		cout << arr[i];
	}
	cout << endl;

	delete[] arr;
	//dynamically created array deleted in the end to free memory on the heap
	system("pause");
	return 0;
}
