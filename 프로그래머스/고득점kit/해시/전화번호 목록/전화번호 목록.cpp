#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    // string 자료형 sort의 결과 이용 -> 사전순 정렬
    sort(phone_book.begin(), phone_book.end());

    for (int num = 0; num < phone_book.size() - 1; ++num) {
        if (phone_book[num] == phone_book[num + 1].substr(0, phone_book[num].size())) {
            answer = false;
            break;
        }
    }

    return answer;
}