#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> gph;
vector<bool> visited; // 방문 여부를 저장
	
void DFS(int v)
{
    if(visited[v]) return;
    visited[v] = true;
    
    // gph[v]의 배열 원소를 모두 확인
    for(int i : gph[v])
        if(visited[i] == false) DFS(i);
}

int main()
{
	int n, m;
	cin >> n >> m;
	
	// 0을 제외하고 사용
	gph.resize(n+1);
	visited.resize(n+1, false);

	for(int i = 0; i < m; i++)
	{
        int u, v;
        cin >> u >> v;
        
        gph[u].push_back(v);
        gph[v].push_back(u);
	}
	
	int cnt = 0; // 연결 요소의 개수
	
	for(int i = 0; i < n; i++)
	{
	    if(!visited[i+1])
	    {
	        cnt++;
	        DFS(i+1);
	    }
	}
	
	cout << cnt;

	return 0;
}