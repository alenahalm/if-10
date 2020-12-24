#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cout << "Enter x and y" << endl;
	cin >> x >> y;
	while (x < 1 || x>8 || y < 1 || y>8) {
		cout << "Wrong Input" << endl;
		cin >> x >> y;
	}
	if (x - 1 > 0 && y - 2 > 0) {
		cout << x - 1 << " " << y - 2 << endl;
	}
	if (x + 1 <= 8 && y - 2 > 0) {
		cout << x + 1 << " " << y - 2 << endl;
	}
	if (x - 1 > 0 && y + 2 <= 8) {
		cout << x - 1 << " " << y + 2 << endl;
	}
	if (x + 1 <= 8 && y + 2 <= 8) {
		cout << x + 1 << " " << y + 2 << endl;
	}
	if (x + 2 <= 8 && y - 1 > 0) {
		cout << x + 2 << " " << y - 1 << endl;
	}
	if (x + 2 <= 8 && y + 1 <= 8) {
		cout << x + 2 << " " << y + 1 << endl;
	}
	if (x - 2 > 0 && y - 1 > 0) {
		cout << x - 2 << " " << y - 1 << endl;
	}
	if (x - 2 > 0 && y + 1 <= 8) {
		cout << x - 2 << " " << y + 1 << endl;
	}

	system("pause");
}