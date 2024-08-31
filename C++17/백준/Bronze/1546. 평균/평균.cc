#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // 시험 본 과목의 개수
    int n; 
    cin >> n;
    
    // n 크기의 배열 선언
    double* arr = new double[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
        
    // 배열 내림차순으로 정렬
    sort(arr, arr+n);
    
    // 점수 중 최댓값
    double m = arr[n-1];
    double sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / m;
        sum += arr[i];
    }
    
    cout << sum / n *100;

    delete[] arr;
    return 0;
}