#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

inline double calc_volume(int radius) {
	return (4.0 / 3.0 * 3.14 * pow(radius, 3));
}

int main() {

	//p.160, 2�� ����

	/*double rad;
	cout << "�������� �Է��Ͻÿ�: ";
	cin >> rad;
	double result = calc_volume(rad);
	cout << "���� ���Ǵ� " << result;*/


	//p.160, 9�� ����

	/*srand(time(NULL));
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int sum = dice1 + dice2;
	cout << "������� �ֻ��� : " << dice1 << "+" << dice2 << "=" << sum << endl;
	if (sum == 7 || sum == 11)
		cout << "����ڰ� �̰���ϴ�.";
	else if (sum == 2 || sum == 3 || sum == 12)
		cout << "����ڰ� �����ϴ�.";*/

	
	//p.160, 13�� ����

	string password;
	int Digit = 0;
	int Lower = 0;
	int Upper = 0;
	cout << "��ȣ�� �Է��Ͻÿ�: ";
	cin >> password;
	int a = password.length();
	for (int i = 0; i < a; i++) {
		if(48 <= password[i] && password[i] <= 57)
			Digit = 1;
		else if (97 <= password[i] && password[i] <= 122) 
			Lower = 1;
		else if (65 <= password[i] && password[i] <= 90) 
			Upper = 1;
	}
	if (Digit == 1 && Lower == 1 && Upper == 1)
		cout << "�����մϴ�.";
	else
		cout << "�������� �ʽ��ϴ�.";
}