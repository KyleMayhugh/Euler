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

long getLargestPrimeDivisor(long n){
    int lasti = 0;

    while(n%2==0){
        n=n/2;
    }
    if(n==1){return 2;}
    
    while(true){
        int flag = 0;
        for(int i = 3;i<=sqrt(n);i=i+2){
            if(n%i==0){
                lasti = i;
                n=n/i;
                flag = 1;
            }
            
         }
        
        if(flag==0){break;}  
        }
    if(n>2){return n;}
    return lasti;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long result = getLargestPrimeDivisor(n);
        cout << result << endl;
    }
    return 0;
}
