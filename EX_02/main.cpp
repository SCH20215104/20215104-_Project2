#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

inline double calc_volume(int radius) {
	return (4.0 / 3.0 * 3.14 * pow(radius, 3));
}

int main() {

	//p.160, 2번 문제

	/*double rad;
	cout << "반지름을 입력하시오: ";
	cin >> rad;
	double result = calc_volume(rad);
	cout << "구의 부피는 " << result;*/


	//p.160, 9번 문제

	/*srand(time(NULL));
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int sum = dice1 + dice2;
	cout << "사용자의 주사위 : " << dice1 << "+" << dice2 << "=" << sum << endl;
	if (sum == 7 || sum == 11)
		cout << "사용자가 이겼습니다.";
	else if (sum == 2 || sum == 3 || sum == 12)
		cout << "사용자가 졌습니다.";*/

	
	//p.160, 13번 문제

	string password;
	int Digit = 0;
	int Lower = 0;
	int Upper = 0;
	cout << "암호를 입력하시오: ";
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
		cout << "안전합니다.";
	else
		cout << "안전하지 않습니다.";
}