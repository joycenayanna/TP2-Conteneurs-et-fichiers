#include <fstream>
#include <iostream>

using namespace std;

int main() {
	ifstream lecteur("hiscore.txt");
	string line;

	while(!lecteur.eof()) {
		lecteur >> line;
		if(!lecteur.eof()) {
			cout << line << endl;
		}
	}
	lecteur.close();
}