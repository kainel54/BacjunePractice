#include <iostream>

using namespace std;
int main() {
    int at, lu, st, ag, in, sm, ma;

    cin >> at >> lu >> st >> ag >> in >> sm >> ma;

    for (int i = 0;i < 7;i++) {
        int temp;
        cin >> temp;
        switch (temp)
        {
        case 1:
            at += 5;
            lu += 5;
            sm += 10;
            break;
        case 2:
            at++;
            ag += 2;
            lu += 2;
            break;
        case 3:
            at += 10;
            st += 10;
            lu += 10;
            break;
        case 4:
            at += 7;
            in += 10;
            ma += 10;
            sm += 10;
            break;
        }
    }
    cout << at << " " << lu << " " << st << " " << ag << " " << in << " " << sm << " " << ma;
    return 0;
}