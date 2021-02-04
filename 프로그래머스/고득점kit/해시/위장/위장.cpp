#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<string> a, vector<string> b) {
    return a[1] < b[1];
}

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    int cnt = 0;

    sort(clothes.begin(), clothes.end(), compare);

    for (int v = 0; v < clothes.size() - 1; ++v) {
        if (clothes[v][1] != clothes[v + 1][1]) {
            answer *= cnt + 2;
            cnt = 0;
        }
        else
            cnt++;
    }

    answer *= cnt + 2;

    return answer - 1;
}