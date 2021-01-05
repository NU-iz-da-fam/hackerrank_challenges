#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    char comma;
    int a = 0;
    vector <int> pInts;
    while(ss >> a)
    {
        pInts.push_back(a);
        ss >> comma;
        if ( comma == ',')
        {} 
        else break;
    }
        
    return pInts;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
