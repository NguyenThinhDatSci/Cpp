#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <stdio.h>

FILE* inp, * out;

using namespace std;

int main() {//code trau
    inp = freopen("D://NguyenThinhDatSci//Cpp//HUST_IT3040_KTLT_TN//LIS.inp", "r", stdin);
    out = freopen("D://NguyenThinhDatSci//Cpp//HUST_IT3040_KTLT_TN//sol2.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> c(n, vector<int>(n, 1e8));
    while (m--) {
        int x, y, w;
        cin >> x >> y >> w;
        c[x - 1][y - 1] = min(c[x - 1][y - 1], w);
    }
    int ans = 1e9;
    vector<int> p(n);
    iota(p.begin(), p.end(), 0);
    do {
        int sum = 0;
        for (int i = 0; i < n; ++i)
            sum += c[p[i]][p[(i + 1) % n]];
        ans = min(ans, sum);
    } while (next_permutation(p.begin() + 1, p.end()));
    cout << ans << endl;
}
