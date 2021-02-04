#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
bool compare(pair<string, int> a, pair<string, int> b) {
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, int> freq_map;
    int max = -1;
    int music_num = 0;

    for (int v = 0; v < genres.size(); ++v) {
        freq_map[genres[v]] += plays[v];
    }

    vector<pair<string, int>> freq_vec(freq_map.begin(), freq_map.end());
    sort(freq_vec.begin(), freq_vec.end(), compare);

    for (int i = 0; i < freq_vec.size(); ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int v = 0; v < genres.size(); ++v) {
                if (freq_vec[i].first == genres[v]) {
                    if (max < plays[v]) {
                        max = plays[v];
                        music_num = v;
                    }
                }
            }

            if (max != -1) {
                plays[music_num] = -1;
                answer.push_back(music_num);
                max = -1;
            }
        }
    }

    return answer;
}