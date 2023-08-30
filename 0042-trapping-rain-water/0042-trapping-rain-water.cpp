class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
         int left[n];
        int right[n];
        int ans = 0; // Initialize ans with 0
        left[0] = height[0];
        right[n - 1] = height[n - 1];
        
        // Calculate maximum heights to the left of each bar
        for (int i = 1; i < n; i++) {
            left[i] = max(left[i - 1], height[i]);
        }
        
        // Calculate maximum heights to the right of each bar
        for (int i = n - 2; i >= 0; i--) {
            right[i] = max(right[i + 1], height[i]);
        }
        
        // Calculate trapped water for each bar
        for (int i = 0; i < n; i++) {
            ans += min(left[i], right[i]) - height[i];
        }
        
        return ans;

    }
};
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         if (n <= 2) {
//             return 0; // Trapping water is not possible with less than 3 bars
//         }
        
//         int left[n];
//         int right[n];
//         int ans = 0; // Initialize ans with 0
//         left[0] = height[0];
//         right[n - 1] = height[n - 1];
        
//         // Calculate maximum heights to the left of each bar
//         for (int i = 1; i < n; i++) {
//             left[i] = max(left[i - 1], height[i]);
//         }
        
//         // Calculate maximum heights to the right of each bar
//         for (int i = n - 2; i >= 0; i--) {
//             right[i] = max(right[i + 1], height[i]);
//         }
        
//         // Calculate trapped water for each bar
//         for (int i = 0; i < n; i++) {
//             ans += min(left[i], right[i]) - height[i];
//         }
        
//         return ans;
//     }
// };
