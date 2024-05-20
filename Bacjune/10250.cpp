#include<iostream>
using namespace std;

int main() {
	int t,temp;
	cin >> t;

	for (int i = 0;i < t;i++) {
		int h, w, n;
		cin >> h >> w >> n;

		if (n % h == 0) {
			temp = h * 100;
		}
		else {
			temp = n % h * 100;
		}
		if (n / h==0) {
			temp += 1;
		}
		else {
			temp += n / h+1;
		}
		cout << temp<<endl;
	}
}