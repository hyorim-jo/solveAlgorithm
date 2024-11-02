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
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < n; i++)
        cout << arr[i] << '\n';

    return 0;
}