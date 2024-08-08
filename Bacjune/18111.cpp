#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, b;
    cin >> n >> m >> b;

    vector<int> heights(n * m);
    int min_height = 256, max_height = 0;

    for (int i = 0; i < n * m; i++) {
        cin >> heights[i];
        min_height = min(min_height, heights[i]);
        max_height = max(max_height, heights[i]);
    }

    int min_time = INT_MAX, best_height = 0;

    for (int h = min_height; h <= max_height; h++) {
        int add_blocks = 0, remove_blocks = 0;

        for (int i = 0; i < n * m; i++) {
            if (heights[i] < h) {
                add_blocks += (h - heights[i]);
            }
            else {
                remove_blocks += (heights[i] - h);
            }
        }

        if (remove_blocks + b >= add_blocks) {
            int time = remove_blocks * 2 + add_blocks;
            if (time <= min_time) {
                min_time = time;
                best_height = h;
            }
        }
    }

    cout << min_time << " " << best_height << "\n";
    return 0;
}
