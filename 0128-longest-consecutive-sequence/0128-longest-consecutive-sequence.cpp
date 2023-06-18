class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_map<int, bool> ans;
    for (int val : arr) {
        ans[val] = true;
    }

    for (int val : arr) {
        if (ans.count(val - 1) > 0) {
            ans[val] = false;
        }
    }

    int mps = 0;
    int ml = 0;
    for (int val : arr) {
        if (ans[val] == true) {
            int tl = 1;
            int tsp = val;
            while (ans.count(tsp + tl) > 0) {
                tl++;
            }
            if (tl > ml) {
                ml = tl;
                mps = tsp;
            }
        }
    }

    return ml;
    }
};