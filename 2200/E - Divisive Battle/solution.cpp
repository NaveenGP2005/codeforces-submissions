#include <bits/stdc++.h>
using namespace std;
 
const int MAXA = 1000005;
int spf[MAXA];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    for (int i = 2; i < MAXA; i++) {
        spf[i] = i;
    }
    
    for (int i = 2; i * i < MAXA; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXA; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
    
    int t; 
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n;
        
        int prev_a = 0, prev_p = 0;
        bool sorted_a = true, sorted_p = true, multiple_primes = false;
        
        for (int i = 0; i < n; i++) {
            int a; 
            cin >> a;
            
            if (a < prev_a) {
                sorted_a = false;
            }
            prev_a = a;
            
            int x = a;
            int prime = (a == 1 ? 1 : spf[a]);
            
            if (prime > 1) {
                while (x % prime == 0) {
                    x /= prime;
                }
            }
            
            int p = (x == 1 ? prime : -1); 
            
            if (p == -1) {
                multiple_primes = true;
            }
            if (p < prev_p) {
                sorted_p = false; 
            }
            prev_p = p;
        }
        
        if (sorted_a || (!multiple_primes && sorted_p)) {
            cout << "Bob
";
        } else {
            cout << "Alice
";
        }
    }
    
    return 0;
}