//Rich Davis
//10 / 2 / 2022
//Project 10

#include <iostream>
using namespace std;

int main() {
	int x;
	int y;
	srand(time(NULL));
	x = rand() % 100+1;
	cout << "Pick a number between 1 and 100: ";
	cin >> y;
	while (true) {
		if (x == y) {
			cout << "\n\nYou guessed right! The number was " << x;
			break;
		}
		else if (y > x) {
			cout << "\n\nToo high, try again: ";
			cin >> y;
		}
		else if (y < x) {
			cout << "\n\nToo low, try again: ";
			cin >> y;
		}
	}

	return 0;
}