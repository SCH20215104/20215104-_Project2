#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main() {

	//p.115, 1�� ����

	/*string s1;
	string s2;
	cout << "ù ��° ���ڿ�: ";
	cin >> s1;
	cout << "�� ��° ���ڿ�: ";
	cin >> s2;
		if (s1 == s2)
			cout << "2���� ���ڿ��� �����ϴ�.";
		else
			cout << "2���� ���ڿ��� �ٸ��ϴ�.";*/


	//p.115, 10�� ����

	/*for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			for (int k = 1; k <= 100; k++) {
				if ((i * i) + (j * j) == k * k)
					cout << i << " " << j << " " << k << endl;
			}
		}
	}*/


	//p.115��, 16�� ����

	int cash = 50;
	int bets = 0;
	int win = 0;
	int lose = 0;
	srand(time(NULL));
	cout << "�ʱ� �ݾ� $50" << endl;
	cout << "��ǥ �ݾ� $250" << endl;
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
	cout << bets << "���� " << win << "�� �¸�" << endl;
	cout << "�̱� Ȯ�� = " << (double)win / bets*100 << endl;
	cout << "��� ���� Ƚ�� = " << (double)bets << endl;
}