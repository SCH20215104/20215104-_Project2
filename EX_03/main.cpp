#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

int main() {

	//p.353, 1�� ����

	/*int i, num;
	int* p;
	
	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> i;

	p = new int[i];

	for (int j = 0; j < i; j++) {
		cout << "������ �Է��Ͻÿ� : ";
		cin >> num;
		p[j] = num;
	}
	cout << "�Էµ� ������ : ";
	for (int k = 0; k < i; k++) {
		cout << p[k] << ", ";
	}
	delete[] p;*/


	//p.353, 2�� ����

	int length;
	string input;
	string* names; 

	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
	cin >> length;
	names = new string[length];

	for (int j = 0; j < length; j++) {
		cout << "�̸� �Է� # " << j + 1 << ": ";
		cin >> input;
		names[j] = input;
	}
	cout << endl << "������ �̸� ����Դϴ�." << endl;
	for (int k = 0; k < length; k++) {
		cout << "�̸� #" << k + 1 << ": ";
		cout << names[k] << endl;
	}
	delete[] names;
}