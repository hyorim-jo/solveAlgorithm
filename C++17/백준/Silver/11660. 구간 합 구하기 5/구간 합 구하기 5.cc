#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
	int n, m;
	cin >> n >> m;

	vector<vector<int>> sum(n+1, vector<int>(n+1, 0));

	for(int i = 1; i < n+1; i++)
		for(int j = 1; j < n+1; j++)
		{
			int temp;
			cin >> temp;

			sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + temp;
		}

	for(int i = 0; i<m; i++)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << sum[x2][y2] - sum[x2][y1-1] - sum[x1-1][y2] + sum[x1-1][y1-1] << '\n';
	}

	return 0;
}