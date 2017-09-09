// The numberOfDivisors function solution borrows heavily from this blog post, which I thank for explaining the math behind the problem:
// http://code.jasonbhill.com/sage/project-euler-problem-12/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int numberOfDivisors(int n){
    if (n%2 == 0) n = n/2;
    int divisors = 1;
    int count = 0;
    while(n%2 ==0){
        count++;
        n = n/2;
        }
    divisors = divisors*(count+1);
    int p = 3;
    while (n!=1) {
        count = 0;
        while (n%p==0){
            count+=1;
            n=n/p;
        }
        divisors=divisors * (count+1);
        p = p + 2;
    }
    return divisors;
}

int main() {

    vector<int> arr(1001);

    int currentHigh = 0;
    int i = 0;
    while(currentHigh<=1000){
        i++;
        int tnum = (i*(i+1))/2;
        int check;
        check = numberOfDivisors(i) * numberOfDivisors(i+1);
        if (check > currentHigh){
            while (check > currentHigh){
                currentHigh++;
                arr[currentHigh]=tnum;
            }
        }
        }
    
    
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << arr[n+1] << endl;
    }
        
    return 0;
}
