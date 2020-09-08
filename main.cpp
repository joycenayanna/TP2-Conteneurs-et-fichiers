#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "score.h"

using namespace std;

int main() {
	ifstream lecteur("hiscore.txt");
	ofstream ecrire("asterostorm.txt");

	string line;
	string data[3];
	vector<Score> scores;
	int i = 0;

	while(!lecteur.eof()) {
		lecteur >> line;
		int rem = i%3;
		data[rem] = line;
		if(rem == 2) {
			Score score(data[0], data[1], data[2]);
			scores.push_back(score);
		}
		++i;
	}

	sort(scores.begin(), scores.end(), 
		[](Score& lhs, Score& rhs) {
    		return lhs.getPoints() > rhs.getPoints();
		}
	);

	for(int i=0 ; i < scores.size() ; i++) {
		ecrire << scores[i].getUsername() + '\n';
		ecrire << scores[i].getId() + '\n';
		ecrire << "Asterostorm=" + to_string(scores[i].getPoints()) + '\n';
	}

	lecteur.close();
}
