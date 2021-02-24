#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {

    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> str_num;
    for (int v = 0; v < numbers.size(); ++v) {
        str_num.push_back(to_string(numbers[v]));
    }

    sort(str_num.begin(), str_num.end(), compare);

    for (auto v : str_num) {
        answer += v;
    }

    if (answer.substr(0, 1) == "0") return "0";

    return answer;
}