#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(6);
    vec.push_back(35);
    vec.push_back(64);
    vec.push_back(13);
    vec.push_back(65);
    vec.push_back(1);
    vec.push_back(6);
    vec.insert(vec.begin(),99);
   // vec.erase(vec.begin()+2,vec.end());
    sort(vec.begin(),vec.end());
    for(int i = 0; i<vec.size();i++)
    cout << vec.at(i) << " ";
    return 0;
}
