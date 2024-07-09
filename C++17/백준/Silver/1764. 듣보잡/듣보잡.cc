#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    string *person = new string[n+m];
    
    for(int i = 0; i < n+m; i++)
        cin >> person[i];
        
    sort(person, person+n+m);
    
    string *ans = new string[m+n];
    int count = 0;
    
    for(int i=0; i<n+m-1; i++)
    {
        if(person[i] == person[i+1])
        {
            ans[count] = person[i];
            count++;
        }
    }
    
    cout << count << endl;
    for(int i=0; i<count; i++)
        cout << ans[i] << endl;
    
    delete[] person;

    return 0;
}