#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 좌표 정렬하기 x좌표가 증가하는 순으로
int main(){
    int n, x, y;
    cin >> n;
    vector<pair<int, int>> v;
    
    for(int i=0; i<n; i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end()); // 정렬 (x좌표가 증가하는 순으로)
                              // x 좌표가 같으면 y 좌표가 증가하는 순으로
                              // sort 를 사용하면 x 좌표가 같을때 y 좌표를 자동으로 오름차순 정렬해줌
    for(int i=0; i<v.size(); i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}