#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    
    vector<int> arr;
    for(int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
        
    for(int i = 0; i < arr.size();)
    {
        if(arr[i] <= l)
        {
            l++;
            arr.erase(arr.begin()+i);
            i = 0;
        }
        else i++;
    }
    
    cout << l;
    
    return 0;
}