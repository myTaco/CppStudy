#include "WordGame.h"

void WordGame::run() {
	cout << "���� ���� �׽�Ʈ�� �����մϴ�. 1~4 �� �ٸ� �Է½� �����մϴ�." << endl;
	string items[4];
	string answerEng;
	string answerKor;
	int answerIndex;
	while (true) {
		for (int i = 0; i < 4; i++) items[i] = "";
		answerIndex = rand() % v.size();
		answerEng = v[answerIndex].getEng();
		answerKor = v[answerIndex].getKor();
		items[rand() % 4] = answerKor;
		string tmp;
		for (int i = 0; i < 4; i++) {
			if (items[i] == answerKor) continue;
			while (true) {
				tmp = v[rand() % v.size()].getKor();
				if ((tmp == items[0]) || (tmp == items[1]) || (tmp == items[2]) || (tmp == items[3])) {
					continue;
				}
				else {
					items[i] = tmp;
					break;
				}
			}

		}
		cout << endl << answerEng << "�� ���� ��? " << endl;
		for (int i = 0; i < 4; i++) {
			cout << "(" << i + 1 << ") " << items[i] << " ";
		}
		cout << " >> ";


		int inv;
		cin >> inv;
		if (items[inv - 1] == answerKor) {
			cout << "Excellent!!" << endl;
		}
		else if (inv == 1 || inv == 2 || inv == 3 || inv == 4) {
			cout << "No!!" << endl;
		}
		else {
			cout << "�����մϴ�..";
			break;
		}
	
	}
}