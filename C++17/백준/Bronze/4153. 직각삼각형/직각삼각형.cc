#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int arr[3];
    
    while(true)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        
        if(arr[0]==0 && arr[1]==0 && arr[2]==0) return 0;
        
        if(pow(arr[2],2) == pow(arr[0],2) + pow(arr[1],2))
            cout << "right" << '\n';
        else cout << "wrong" << '\n';
    }
    
    return 0;
}