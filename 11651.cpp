#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 좌표 정렬하기 y 가 증가하는 순으로 정렬
bool compare(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) {     // ex) 1,2 / 2,2 
        return a.first < b.first;  // ex) > : 내림차순 , < : 오름차순
    }
    else {
        return a.second < b.second; // ex) > : 내림차순, < : 오름차순
    }
}
int main(){
    int n, x, y;
    cin >> n;
    vector<pair<int, int>> v;
    
    for(int i=0; i<n; i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end(), compare);
    
    for(int i=0; i<v.size(); i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}