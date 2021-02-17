#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto n : scoville) pq.push(n);

    while (pq.top() < K) {
        if (pq.size() == 1) {
            answer = -1;
            break;
        }
        else {
            int first = pq.top();
            pq.pop();

            int second = pq.top();
            pq.pop();

            pq.push(first + (second * 2));
            answer++;
        }
    }

    return answer;
}