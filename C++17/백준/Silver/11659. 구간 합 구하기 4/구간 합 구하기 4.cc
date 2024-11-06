#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
;    
    int n, m = 0;
    
    cin >> n >> m;
    
    int *sum = new int[n+1];
    sum[0] = 0;
    
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum[i+1] = sum[i]+temp;
    }  
    
    for(int p = 0; p < m; p++)
    {
        int i, j;
        cin >> i >> j;
        cout << sum[j] - sum[i-1] << '\n';
    }
    
    delete []sum;

    return 0;
}