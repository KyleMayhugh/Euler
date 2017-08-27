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
        n=n-1;
        long int three = (n-(n%3))/3;
        long int five = (n-(n%5))/5;
        long int fifteen = (n-(n%15))/15;
        long int result = ((three*(three+1)/2)*3) + ((five*(five+1)/2)*5) - ((fifteen*(fifteen+1)/2)*15);        
        
        cout << result << endl;
    }
    return 0;
}
