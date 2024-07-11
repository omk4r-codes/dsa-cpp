#include <bits/stdc++.h>
using namespace std;

int binSearchIndex(vector<int> &v, int target){
    int l= 0, r = v.size()-1;
    while (l <= r)
    {
        int mid = l + (r - l)/2;
        if(target == v[mid])
            return mid;
        if (target < v[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
    
}

int main()
{
    vector<int> v = {12, 56, 78, 98, 123, 167, 190, 256, 678};
    int n;
    cin >> n;
    cout << binSearchIndex(v, n);
    return 0;
    
}