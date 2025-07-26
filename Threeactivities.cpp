#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    // Fast input/output (kept as plain statements, not a macro)
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<pair<int,int>> A(n), B(n), C(n);   // {value, index}

        for (int i = 0, x; i < n; ++i) {
            cin >> x;
            A[i] = {x, i};
        }
        for (int i = 0, x; i < n; ++i) {
            cin >> x;
            B[i] = {x, i};
        }
        for (int i = 0, x; i < n; ++i) {
            cin >> x;
            C[i] = {x, i};
        }

        // Sort in descending order of value
        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());
        sort(C.rbegin(), C.rend());

        int k = min(20, n);          // Try only top‑k elements of each list
        ll best = 0;

        for (int i = 0; i < k; ++i)
            for (int j = 0; j < k; ++j)
                for (int l = 0; l < k; ++l) {
                    int dayA = A[i].second;
                    int dayB = B[j].second;
                    int dayC = C[l].second;
                    if (dayA != dayB && dayB != dayC && dayA != dayC) {
                        ll sum = 1LL * A[i].first + B[j].first + C[l].first;
                        best = max(best, sum);
                    }
                }

        cout << best << '\n';
    }
    return 0;
}
