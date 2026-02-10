#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct group {
    int size;
    vector<pair<int, int>> songs;  // {인덱스, 재생횟수}

    // 초기화
    group() : size(0) {}
};

unordered_map<string, group> album;
vector<int> answer;

vector<int> solution(vector<string> genres, vector<int> plays) {
    for (int i = 0; i < genres.size(); i++) {
        album[genres[i]].size += plays[i];
        album[genres[i]].songs.push_back({i, plays[i]});
    }
    
    vector<pair<string, group>> sAlbum(album.begin(), album.end());
    
    // 장르를 총 재생 횟수 기준으로 내림차순 정렬
    sort(sAlbum.begin(), sAlbum.end(), 
         [](const pair<string, group>& a, const pair<string, group>& b) {
             return a.second.size > b.second.size;
         });
    
    for (auto& genrePair : sAlbum) {
        // 곡을 재생 횟수 내림차순, 같으면 인덱스 오름차순으로 정렬
        sort(genrePair.second.songs.begin(), genrePair.second.songs.end(), 
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 if (a.second == b.second) {
                     return a.first < b.first;
                 }
                 return a.second > b.second;
             });
        
        // 각 장르에서 최대 2곡 선택
        for (int i = 0; i < min(2, (int)genrePair.second.songs.size()); i++) {
            answer.push_back(genrePair.second.songs[i].first);
        }
    }

    return answer;
}
