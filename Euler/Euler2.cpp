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


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        
        unsigned long long result = 0;
        unsigned long long i1 = 2;
        unsigned long long i2 = 0;
        unsigned long long sum = 2;
        
        while (true) {
            unsigned long long temp = (4*i1) + i2;
            if(temp>n){break;}
            sum += temp;
            i2=i1;
            i1=temp;
                     
        }
        cout << sum << endl;
    }
    return 0;
}
