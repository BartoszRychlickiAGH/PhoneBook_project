#include <iostream>
#include <map>

using std::endl;
using std::cin;
using std::cout;
using std::map;
using std::pair;
using std::string;

bool Contains(char& sign, map<char, int>& mapa);

int main() {
	string input{""};
	map<char, int>mapa;
	for (int i = 0; i <= input.size() - 1; i++) {
		if (Contains(input[i], mapa)) {
			mapa[input[i]]++;
		}
		else {
			mapa.insert(pair<char, int>(input[i], 1));
		}
	}



	return 0;
}
bool Contains(char& sign, map<char, int>& mapa) {

	for (auto i = mapa.begin(); i != mapa.end(); i++) {
		if (sign == i->first) {
			return true;
		}
	}
	return false;
}
