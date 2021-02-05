#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;

    for (int v = 0; v < prices.size(); ++v) {
        int cnt = 0;
        for (int after = v + 1; after < prices.size(); ++after) {
            if (prices[v] > prices[after]) {
                cnt++;
                break;
            }
            else
                cnt++;
        }

        answer.push_back(cnt);
    }

    return answer;
}