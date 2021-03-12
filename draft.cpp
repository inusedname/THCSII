#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    v.push_back("0");
    v.push_back("1");
    while (v.size() < pow(2, n))
    {
        int tmp = v.size();
        for (int i = 0; i < tmp;i++)
        {
            v.push_back("1" + v[tmp - 1 - i]);
            v[tmp - 1 - i] = "0" + v[tmp - 1 - i];
        }
    }
    
    for (int i = 0; i < v.size();i++)
    {
        cout << v[i] << endl;
    }
}