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

int getSmallestMultiple(int n, vector<int> primes){
    int total=1;

    for (int i = 0; i<primes.size(); i++){
        int temp=1;
        while (temp<=n){
            temp=temp*primes[i];
        }
        temp=temp/primes[i];
        //cout << "Multiplying by " << temp << " at " << primes[i] << endl;
        total=total * temp;
    }
    return total;
}


int main(){
    
    vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37};

    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << getSmallestMultiple(n, primes) << endl;
    }
    
    return 0;

}
