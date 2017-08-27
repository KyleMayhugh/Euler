#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool isPalindrome(int n){
    string s = to_string(n);
    
    return (s==string(s.rbegin(), s.rend()));
    
    }

bool hasThreeDigitDivisor(int n){
    for(int i = 999; i >=120; i--){
        if (n%i==0 && n/i<1000){
            return true;
        }
    }
    return false;
}

int highestPalindrome(int n){
    int flag = 0;

    for (int i = n-1; i >100001; i--){
        if (i%11==0 && flag == 0){
            if (isPalindrome(i)){
                if(hasThreeDigitDivisor(i)){
                    cout << i << endl;
                    flag = 1;
                }
            }
        }
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = highestPalindrome(n);
    }

    
    return 0;
}
