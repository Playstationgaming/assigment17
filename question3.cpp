#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> memo;

int countSolutions(int n, int val) {
    if (n == 0) {
        return val == 0 ? 1 : 0;
    }
    if (memo[n][val] != -1) {
        return memo[n][val];
    }
    int ans = 0;
    for (int i = 0; i <= val; i++) {
        ans += countSolutions(n-1, val-i);
    }
    memo[n][val] = ans;
    return ans;
}

int main() {
    int n, val;
    cin >> n >> val;
    memo.resize(n+1, vector<int>(val+1, -1));
    cout << countSolutions(n, val) << endl;
    return 0;
}
