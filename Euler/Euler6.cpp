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
        long int n;
        cin >> n;
        long a;
        long b;
        long result;
        a = (n*(n+1)*((2*n)+1))/6;
        b = (n*(n+1)) / 2;
        b = b*b;
        result = b - a;
        cout << result << endl;
        }
             
    return 0;
}
