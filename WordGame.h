#ifndef WORDGAME_H
#define WORDGAME_H

#include "Word.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
class WordGame {
	vector<Word> v;
public:
	WordGame() {
		srand((unsigned)time(0));
		v.push_back(Word("human", "�ΰ�"));
		v.push_back(Word("baby", "�Ʊ�"));
		v.push_back(Word("society", "��ȸ"));
		v.push_back(Word("dall", "����"));
		v.push_back(Word("love", "���"));
		v.push_back(Word("picture", "����"));
		v.push_back(Word("bear", "��"));
		v.push_back(Word("animal", "����"));
		v.push_back(Word("trade", "�ŷ�"));
		v.push_back(Word("emotion", "����"));
	}
	void run();
};

#endif