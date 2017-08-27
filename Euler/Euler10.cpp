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
    vector<long int> primesieve(1000000,0);
    primesieve[0]=1;
    primesieve[1]=1;
    for (int i = 2; i<sqrt(1000000);i++){
        int temp = i*2;
        while (temp <= 1000000){
            primesieve[temp]=1;
            temp = temp+i;
        }
    }
    
   
    long int total = 0;
    
    for (int i = 0; i<primesieve.size(); i++){
        if(primesieve[i]==0){
            total = total + i;
        }
        primesieve[i]=total;
    }

        
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << primesieve[n] <<endl;
    }
    return 0;
}
