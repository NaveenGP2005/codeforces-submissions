#include <iostream>
 
using namespace std;
 
// O(sqrt(n)) primality check
bool isprime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n;
    if (cin >> n) {
        // Case 1: Is n already a prime number? (This covers n=2 as well)
        if (isprime(n)) {
            cout << "1
";
        }
        // Case 2: Is n even? OR Is n odd and (n-2) is prime?
        else if (n % 2 == 0 || isprime(n - 2)) {
            cout << "2
";
        }
        // Case 3: Everything else (Odd number where n-2 is not prime)
        else {
            cout << "3
";
        }
    }
    
    return 0;
}