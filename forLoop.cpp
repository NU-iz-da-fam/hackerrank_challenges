#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    string number[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a = 0; int b = 0;
    cin >> a >> b;
    
    for (int i = a - 1; i < b; i ++)
    {
        if (i < 9)
        {
            cout << number[i] << "\n";
        } else if (i >= 9 && i%2 == 1)
        {
            cout << "even" << "\n";
        } else 
        {
            cout << "odd" << "\n";
        }
    }
    
    return 0;
}
