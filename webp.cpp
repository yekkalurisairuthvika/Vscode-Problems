#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> webPages(N + 1);
    for (int i = 1; i <= N; i++) {
        int L;
        cin >> L;
        webPages[i].resize(L);
        for (int j = 0; j < L; j++) {
            cin >> webPages[i][j];
        }
    }

    int start, end;
    cin >> start >> end;

    vector<int> distance(N + 1, -1);
    queue<int> q;

    distance[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int linkedPage : webPages[current]) {
            if (distance[linkedPage] == -1) {
                distance[linkedPage] = distance[current] + 1;
                q.push(linkedPage);
            }
        }
    }

    if (distance[end] == -1) {
        cout << -1 << endl;
    } else {
        cout << distance[end] << endl;
    }

    return 0;
}
