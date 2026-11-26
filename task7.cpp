#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> v;
    v.push_back("Hadeer Mahmoud");
    v.push_back("Youssef Ali");
    v.push_back("Ahmed Mostafa");
    v.push_back("Esraa Ebrahim");
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}
