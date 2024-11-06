#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int,int> a, pair<int, int> b)
{
    return a < b;
}

int main()
{
    int n;
    cin >> n;
    
    vector<pair<int, int>> pos;
    
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        pos.push_back({x, y});
    }
    
    sort(pos.begin(), pos.end(), compare);
    
    for(pair<int, int> i : pos)
        cout << i.first << ' ' << i.second << '\n';
    
    return 0;
}