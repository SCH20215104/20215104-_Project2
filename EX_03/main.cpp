#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

int main() {

	//p.353, 1번 문제

	/*int i, num;
	int* p;
	
	cout << "몇 개의 정수를 입력합니까? ";
	cin >> i;

	p = new int[i];

	for (int j = 0; j < i; j++) {
		cout << "정수를 입력하시오 : ";
		cin >> num;
		p[j] = num;
	}
	cout << "입력된 정수는 : ";
	for (int k = 0; k < i; k++) {
		cout << p[k] << ", ";
	}
	delete[] p;*/


	//p.353, 2번 문제

	int length;
	string input;
	string* names; 

	cout << "얼마나 많은 이름을 입력 하시겠습니까? ";
	cin >> length;
	names = new string[length];

	for (int j = 0; j < length; j++) {
		cout << "이름 입력 # " << j + 1 << ": ";
		cin >> input;
		names[j] = input;
	}
	cout << endl << "다음은 이름 목록입니다." << endl;
	for (int k = 0; k < length; k++) {
		cout << "이름 #" << k + 1 << ": ";
		cout << names[k] << endl;
	}
	delete[] names;
}