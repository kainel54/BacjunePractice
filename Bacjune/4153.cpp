#include<iostream>
#include<cmath>

using namespace std;

int main() {
	while (true) {
		int a, b, c,temp,max;
		cin >> a >> b >> c;
		if (a > b) {
			if (a > c) {
				max == a;
				temp = pow(b, 2) + pow(c, 2);
			}
			else {
				max == c;
				temp = pow(a, 2) + pow(b, 2);
			}
		}
		else {
			if (c > b) {
				max == c;
				temp = pow(a, 2) + pow(b, 2);
			}
			else {
				max == b;
				temp = pow(a, 2) + pow(c, 2);
			}
		}

		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		
		if (temp == pow(max, 2)) {
			cout << "right"<<endl;
		}
		else {
			cout << "wrong" << endl;
		}
	}
}