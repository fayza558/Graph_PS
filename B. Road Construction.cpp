
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<bool> forbidden(n + 1, false);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        forbidden[u] = true;
        forbidden[v] = true;
    }

    int hub = -1;
    for (int i = 1; i <= n; ++i) {
        if (!forbidden[i]) {
            hub = i;
            break;
        }
    }

    cout << n - 1 << '\n';
    for (int i = 1; i <= n; ++i) {
        if (i != hub) {
            cout << hub << ' ' << i << '\n';
        }
    }

    return 0;
}
