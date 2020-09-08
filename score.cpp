#include <iostream>
#include "score.h"

using namespace std;

Score::Score(string id, string un, string pt) {
	this->gameId = id;
	this->username = un;
	this->points = pt;
}

string Score::getId() {
	return this->gameId;
}

string Score::getUsername() {
	return this->username;
}

int Score::getPoints() {
	return stoi(this->points);
}