#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<pair<int, string>> memList;
    
    for(int i = 0; i < n; i++)
    {
        int a; string n;
        cin >> a >> n;
        memList.push_back({a, n});
        // memList.push_back(make_pair(a, n));
    }
    
    stable_sort(memList.begin(), memList.end(), compare);
    
    for(int i = 0; i < n; i++)
        cout << memList[i].first << ' ' << memList[i].second << '\n';
    
    return 0;
}
