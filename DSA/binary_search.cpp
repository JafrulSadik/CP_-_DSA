#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector <int> &v, int n, int t){
    int left = 0, right = n-1, mid;
    
    while(left <= right){
        mid = (left+right)/2;
        if(v[mid] == t){
            return mid;
        } else if(v[mid] < t){
            left = mid + 1;
        } else {
            right = mid-1;
        }
    }

    return -1;
}

int main()
{
    int n;
    vector<int> v;

    cin >> n;

    srand(time(0));

    for (int i = 0; i < n; i++){
        v.push_back(rand());
    }

    sort(v.begin(), v.end());

    for(auto u:v) cout << u << " " ;
    cout << endl;

    int t;

    cin >> t;

    int find = binarySearch(v,n,t);

    cout << find;
    
}