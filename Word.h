#ifndef WORD_H
#define WORD_H

#include <string>
#include <map>
using namespace std;

class Word {
	map<string, string> word;
	string eng, kor;
public:
	Word(string eng, string kor) {
		this->eng = eng;
		this->kor = kor;
		word[eng] = kor;
	}
	string getEng() { return eng; }
	string getKor() { return kor; }
};

#endif