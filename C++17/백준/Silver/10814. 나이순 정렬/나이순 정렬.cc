#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class member
{
    int age;
    string name;
    
    public:
    member(int a = 0, string n = "") : age{a}, name{n} {};
    int getAge() const { return age; }
    string getName() const { return name; }
    void print() { cout << age << ' ' << name << '\n'; }
};

bool compare(const member& a, const member& b)
{
    return a.getAge() < b.getAge();
}

int main()
{
    ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    
    member *memList = new member[n];
    
    for(int i = 0; i < n; i++)
    {
        int a; string n;
        cin >> a >> n;
        memList[i] = member(a, n);
    }
    
    stable_sort(memList, memList+n, compare);
    
    for(int i = 0; i < n; i++)
        memList[i].print();
    
    delete []memList;
    return 0;
}