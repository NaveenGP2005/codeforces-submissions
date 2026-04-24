#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
const int MAX_VAL = 10000005;
 
// Global arrays for memory efficiency
int spf[MAX_VAL];
int countA[MAX_VAL];
int countB[MAX_VAL];
 
// Step 1: Standard SPF Sieve
void buildSPF() {
    for (int i = 2; i < MAX_VAL; i++) {
        spf[i] = i;
    }
    for (int i = 2; i * i < MAX_VAL; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAX_VAL; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}
 
int main() {
    // Fast I/O is absolutely mandatory here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    buildSPF();
 
    int n, m;
    if (!(cin >> n >> m)) return 0;
 
    vector<int> A(n);
    vector<int> B(m);
 
    // Read Numerator array and count prime factors
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        int temp = A[i];
        while (temp > 1) {
            countA[spf[temp]]++;
            temp /= spf[temp];
        }
    }
 
    // Read Denominator array and count prime factors
    for (int i = 0; i < m; i++) {
        cin >> B[i];
        int temp = B[i];
        while (temp > 1) {
            countB[spf[temp]]++;
            temp /= spf[temp];
        }
    }
 
    // Step 2: Find the overlapping prime factors to cancel
    // We overwrite countA and countB to save memory
    for (int i = 2; i < MAX_VAL; i++) {
        int common = min(countA[i], countB[i]);
        countA[i] = common; 
        countB[i] = common;
    }
 
    // Step 3 & 4: Shave off the canceled primes and print Top
    cout << n << " " << m << "
";
    
    for (int i = 0; i < n; i++) {
        int temp = A[i];
        int final_val = 1;
        while (temp > 1) {
            int p = spf[temp];
            // If we still have cancellations allowed for this prime, use it
            if (countA[p] > 0) {
                countA[p]--;
            } 
            // Otherwise, this prime survives! Multiply it into our final value
            else {
                final_val *= p;
            }
            temp /= p;
        }
        cout << final_val << " ";
    }
    cout << "
";
 
    // Shave off the canceled primes and print Bottom
    for (int i = 0; i < m; i++) {
        int temp = B[i];
        int final_val = 1;
        while (temp > 1) {
            int p = spf[temp];
            if (countB[p] > 0) {
                countB[p]--;
            } else {
                final_val *= p;
            }
            temp /= p;
        }
        cout << final_val << " ";
    }
    cout << "
";
 
    return 0;
}