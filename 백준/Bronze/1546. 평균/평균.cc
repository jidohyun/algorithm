#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<double> scores(n);
    
    double max_score = 0;
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
        max_score = max(max_score, scores[i]);
    }

    for (int i = 0; i < n; i++) {
        scores[i] = (scores[i] / max_score) * 100;
    }

    double average = accumulate(scores.begin(), scores.end(), 0.0) / n;
    
    cout << fixed << setprecision(2) << average << endl;

    return 0;
}