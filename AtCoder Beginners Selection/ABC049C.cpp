#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int pos = 0;
	s.append("__________");
	while (true) {
		int length = 0;
		if (s.substr(0, 10) == "dreamerase") {
			length = 5;
		}
		else if ((s.substr(0, 9) == "eraserase")) {
			length = 5;
		}
		else if ((s.substr(0, 7) == "dreamer")) {
			length = 7;
		}
		else if ((s.substr(0, 6) == "eraser")) {
			length = 6;
		}
		else if ((s.substr(0, 5) == "dream")) {
			length = 5;
		}
		else if ((s.substr(0, 5) == "erase")) {
			length = 5;
		}
		else if ((s.substr(0, 10) == "__________")) {
			break;
		}
		else {
			cout << "NO" << endl;
			return 0;
		}
		s = s.substr(length, s.size() - length);
	}
	cout << "YES" << endl;
	return 0;
}