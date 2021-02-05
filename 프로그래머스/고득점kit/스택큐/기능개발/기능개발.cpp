#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> works;
    for (int v = 0; v < progresses.size(); ++v) {
        works.push((99 - progresses[v]) / speeds[v] + 1);
        /*
        if ((100 - progresses[v]) < speeds[v] || (100 - progresses[v]) % speeds[v] != 0) {
             works.push((100 - progresses[v]) / speeds[v] + 1);
         }
         else
             works.push((100 - progresses[v]) / speeds[v]);
         */
    }

    while (!works.empty()) {
        int size = works.size();
        int first = works.front();
        int release = 0;

        for (int v = 0; v < size; ++v) {
            if (works.front() <= first) {
                release++;
                works.pop();
            }
            else
                break;
        }

        answer.push_back(release);
    }

    return answer;
}