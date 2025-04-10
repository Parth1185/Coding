
#include <bits/stdc++.h>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    // Assign vector
    vector<int> v;

    // fill the vector with 10 five times
    v.assign(5, 10);


    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    
    v.push_back(15);
    
    v.insert(v.begin(), 5);


    
    // inserts at the beginning
    v.emplace(v.begin(), 85);
    
    v.emplace_back(20);


    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}
