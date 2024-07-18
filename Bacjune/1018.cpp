#include<iostream>

using namespace std;

int main() {
	int n,m,cnt = 0;
	char firstChar;
	cin >> n >> m;
	cin >> firstChar;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			char str,bNw;
			if (!(i == 0 && j == 0)) {
				cin >> str;
			}
			if (firstChar == 'W') {
				if (i % 2 == 0) {
					if (j % 2 == 0) {
						bNw = 'W';
					}
					else {
						bNw = 'B';
					}
				}
				else {
					if (j % 2 == 0) {
						bNw = 'B';
					}
					else {
						bNw = 'W';
					}
				}
			}
			else {
				if (i % 2 != 0) {
					if (j % 2 == 0) {
						bNw = 'W';
					}
					else {
						bNw = 'B';
					}
				}
				else {
					if (j % 2 == 0) {
						bNw = 'B';
					}
					else {
						bNw = 'W';
					}
				}
			}
			

			if (!(i == 0 && j == 0)&&str != bNw) {
				cnt++;
			}
		}
	}
	cout << cnt;

}