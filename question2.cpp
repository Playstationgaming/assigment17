#include <iostream>
using namespace std;
int summation(int n, int m) {
    if (m == 1) {
        return n*(n+1)/2;
    }
    return summation(n*(n+1)/2, m-1);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << "SUM(" << n << ", " << m << ") = " << summation(n, m) << std::endl;
    return 0;
}