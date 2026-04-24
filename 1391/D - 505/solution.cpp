#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    if (!(cin >> n >> m)) return 0;
 
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    // Step 1: The Math Trap!
    if (n >= 4) {
        cout << -1 << "
";
        return 0;
    }
 
    // Base Case: 1 row is already perfect
    if (n == 1) {
        cout << 0 << "
";
        return 0;
    }
 
    int min_total_cost = 1e9; // Start with a huge number
 
    // Step 2: Set up the patterns
    // For n rows, there are (n - 1) adjacent row pairs.
    // So there are 2^(n-1) possible starting XOR patterns.
    int num_xor_masks = 1 << (n - 1);
 
    // Loop through every possible starting pattern
    for (int start_mask = 0; start_mask < num_xor_masks; start_mask++) {
        int current_pattern_cost = 0;
 
        // Step 3: Go column by column
        for (int c = 0; c < m; c++) {
            
            // The required XOR pattern MUST alternate every single column
            int required_xor_mask = start_mask;
            if (c % 2 != 0) {
                // If it's an odd column, flip all the bits in the mask!
                required_xor_mask ^= (num_xor_masks - 1); 
            }
 
            int best_col_cost = 1e9;
 
            // Try all possible ways to color THIS specific column (from 0 to 2^n - 1)
            for (int col_val = 0; col_val < (1 << n); col_val++) {
                
                // What is the XOR pattern of this specific column configuration?
                int actual_xor_mask = 0;
                for (int i = 0; i < n - 1; i++) {
                    int top_bit = (col_val >> i) & 1;
                    int bottom_bit = (col_val >> (i + 1)) & 1;
                    
                    if (top_bit != bottom_bit) {
                        actual_xor_mask |= (1 << i);
                    }
                }
 
                // If this column configuration matches our required pattern, 
                // calculate how many cells we actually need to change
                if (actual_xor_mask == required_xor_mask) {
                    int cost = 0;
                    for (int r = 0; r < n; r++) {
                        int real_bit = a[r][c] - '0';
                        int target_bit = (col_val >> r) & 1;
                        if (real_bit != target_bit) {
                            cost++;
                        }
                    }
                    // Keep the cheapest valid configuration for this column
                    best_col_cost = min(best_col_cost, cost);
                }
            }
            
            // Add the cheapest column cost to our running total for this pattern
            current_pattern_cost += best_col_cost;
        }
 
        // Keep the absolute best out of the possible starting patterns
        min_total_cost = min(min_total_cost, current_pattern_cost);
    }
 
    cout << min_total_cost << "
";
 
    return 0;
}