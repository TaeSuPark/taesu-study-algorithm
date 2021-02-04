#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    string answer = participant[participant.size() - 1];

    for (int v = 0; v < completion.size(); ++v) {
        if (completion[v] != participant[v]) {
            answer = participant[v];
            break;
        }
    }

    return answer;
}