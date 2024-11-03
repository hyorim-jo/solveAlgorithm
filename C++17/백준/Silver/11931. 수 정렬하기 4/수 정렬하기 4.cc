#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> arr(n, 0);
    
    for(int i = 0; i < arr.size(); i++)
        cin >> arr[i];
        
    sort(arr.begin(), arr.end(),greater<>());
    
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << '\n';
    
    return 0;
}