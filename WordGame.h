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
		v.push_back(Word("human", "인간"));
		v.push_back(Word("baby", "아기"));
		v.push_back(Word("society", "사회"));
		v.push_back(Word("dall", "인형"));
		v.push_back(Word("love", "사랑"));
		v.push_back(Word("picture", "사진"));
		v.push_back(Word("bear", "곰"));
		v.push_back(Word("animal", "동물"));
		v.push_back(Word("trade", "거래"));
		v.push_back(Word("emotion", "감정"));
	}
	void run();
};

#endif