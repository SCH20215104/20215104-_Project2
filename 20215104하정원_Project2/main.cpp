#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main() {

	//p.115, 1번 문제

	/*string s1;
	string s2;
	cout << "첫 번째 문자열: ";
	cin >> s1;
	cout << "두 번째 문자열: ";
	cin >> s2;
		if (s1 == s2)
			cout << "2개의 문자열은 같습니다.";
		else
			cout << "2개의 문자열은 다릅니다.";*/


	//p.115, 10번 문제

	/*for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			for (int k = 1; k <= 100; k++) {
				if ((i * i) + (j * j) == k * k)
					cout << i << " " << j << " " << k << endl;
			}
		}
	}*/


	//p.115번, 16번 문제

	int cash = 50;
	int bets = 0;
	int win = 0;
	int lose = 0;
	srand(time(NULL));
	cout << "초기 금액 $50" << endl;
	cout << "목표 금액 $250" << endl;
	while(true) {
		bets++;
		if ((double)rand() / RAND_MAX < 0.5) {
			cash++;
			win++;
		}
		else {
			cash--;
			lose++;
		}
		if (cash == 250)
			break;
	}
	cout << fixed;
	cout.precision(6);
	cout << bets << "중의 " << win << "번 승리" << endl;
	cout << "이긴 확률 = " << (double)win / bets*100 << endl;
	cout << "평균 배팅 횟수 = " << (double)bets << endl;
}