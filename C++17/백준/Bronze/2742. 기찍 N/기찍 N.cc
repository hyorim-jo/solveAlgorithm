#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    
	int n;
	cin >> n;

	for(int i = 0; i<n; i++)
		cout << n-i << '\n';

	return 0;
}