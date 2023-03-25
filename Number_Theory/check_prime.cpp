#include<bits/stdc++.h>

using namespace std;

bool check_prime(int n){
    if(n == 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for (int i = 2; i < sqrt(n); i++){
        if(n%i == 0) return false;
    }

    return true;
}

int main()
{
    int n;

    cin >> n;

    bool check = check_prime(n);

    if(check){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
