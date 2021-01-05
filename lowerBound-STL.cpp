#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N = 0; int Q = 0; int q = 0; int count = 0;
    vector<int>::iterator index;
    cin >> N;
    vector <int> v;
    v.assign(N, 0);
    for (int i = 0; i < N; i ++)
    {
        cin >> v.at(i);
    }  
    cin >> Q;
    for (int i = 0; i < Q; i ++)
    {
        cin >> q;
        /*
        for (int j = 0; j < N; j ++)
        {
            if (v.at(j) == q)
            {
                count++;
                break;
            }
        }
        if (count > 0)
        {
            cout << "Yes ";
        } else
        {
            cout << "No ";
        }
        count = 0;*/
        
        index = lower_bound(v.begin(), v.end(), q);
        if (v.at(index - v.begin())== q) 
        {
            cout << "Yes ";
        } else
        {
            cout << "No ";
        }
        cout << index - v.begin() + 1 << "\n";
        
    }
    return 0;
}
