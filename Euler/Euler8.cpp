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

long long int getMaxDigitMultiple(string num, int n, int k){
    long long int high = 0;
    for (int i = 0; i<=(n-k); i++){
        long long int temp = 1;
        for(int j=i; j<i+k;j++){
            int digit = num[j] - 48;
            temp = temp * digit;
        }
        if (temp>high) high = temp;
    }
    return high;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        string num;
        cin >> num;
        long long int result = getMaxDigitMultiple(num, n, k);
        cout << result << endl;
    }
    return 0;
}
