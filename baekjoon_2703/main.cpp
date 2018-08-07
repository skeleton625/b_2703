#include <iostream>
#include <string>
using namespace std;

int main(){
	string i1;
	string al;
	int t = 2;
	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++) {
		cin.clear();
		getline(cin, i1);
		getline(cin, al);
		for (int j = 0; j < i1.size(); j++) {
			if(i1.at(j) != ' ') cout << al.at(i1.at(j) - 'A');
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}