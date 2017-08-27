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
        int n;
        cin >> n;
        long result = -1;

        for (int a = 1; a<=(n/3);a++){
            long b = (n*((2*a)-n))/(2*(a-n));
            if(b<=0) continue;
            long c = -1 * (((2*a*a)-(2*a*n)+(n*n))/((2*a)-(2*n)));
            if(c<=0) continue;
            //cout << a << " " << b << " " << c << " " << endl;
            if (a+b+c==n && (a*a)+(b*b)==(c*c) && a*b*c>result) {result = a*b*c;}
            
        }
        cout << result << endl;
    }
    
    return 0;
}
