#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>arr;
    vector<int>curr;
    string line;
    int emp = 0;
    while(getline(cin, line)) {
        if(line.empty()) {
            emp++;
            if(emp == 2)
                break;
            arr.push_back(curr);
            curr.clear();
        }
        else {
            int num = stoi(line);
            curr.push_back(num);
            emp = 0;
        }
    }

    if(!curr.empty())
        arr.push_back(curr);

    /* cout << "OUTPUT : " << endl; */
    /* for(auto a : arr) { */
    /*     for(auto i : a) { */
    /*         cout << i << endl; */
    /*     } */
    /*     cout << endl; */
    /* } */

    long long sum = 0, max_sum = 0;
    /* for(auto a : arr) { */
    /*     sum = 0; */
    /*     for(auto i : a) { */
    /*         sum += i; */
    /*     } */
    /*     max_sum = max(max_sum, sum); */
    /* } */
    /* cout << endl <<  "Most Calories : " <<  max_sum; */

    vector<int>cal;
    for(auto a : arr) {
        sum = 0;
        for(auto i : a) {
            sum += i;
        }
        cal.push_back(sum);
    }
    int n = cal.size();
    sort(cal.begin(), cal.end());
    
    max_sum = cal[n-1] + cal[n-2] + cal[n-3];
    cout << endl << "Top 3 Calories sum : " << max_sum;

    return 0;
}
