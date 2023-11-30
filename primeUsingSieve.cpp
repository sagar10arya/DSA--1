#include<bits/stdc++.h>
using namespace std;

/*
prime number hum sieve of eratosthenes se nikal rahey hai taaki hum
time limit exceed naa ho, isme hum pehle sab ko prime maan rahe hai phir
jo unki table mein aata hai usko non prime kr de rahey hai
*/

class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        
        vector<bool> prime(n+1, true);

        prime[0] = prime[1] = false;

        for(int i=2; i<n; i++){
            if(prime[i]){
                count++;

                for(int j=2*i; j<n; j=j+i){
                    prime[j] = 0;
                }
            }
        }
        return count;
    }
};