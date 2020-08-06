#include <stdlib.h>
#include <random>
#include<iostream>
using namespace std;
int main(){
	std::random_device rnd; 
    	std::mt19937 mt(rnd());
        std::uniform_int_distribution<> rand100(0,99);
	cout << "Who are you?" << endl;
	string s;
	cout << "> ";
	cin >> s;
	cout << "Hello," << s << "!" << endl;
	cout << "Tossing a coin.." << endl;
    	for (int i = 0; i < 3; ++i) {
		cout << "Round " << i+1 << ":";
        	if(rand100(mt)%2==0) cout << "Heads" << endl;
        	else cout << "Tails" << endl;
    	};
}
