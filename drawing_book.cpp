#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int p;
    cin >> p;
    if (n % 2 == 0)
    {
        n = n + 1;
    }
    cout<< min(p/2,(n-p)/2);
    return 0;
}
