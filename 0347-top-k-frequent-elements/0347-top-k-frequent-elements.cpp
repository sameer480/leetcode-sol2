#include <vector>
#include <unordered_map>
#include <queue>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> map;
        for (auto x : nums) {
            map[x]++;
        }
        
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
        
        for (auto x : map) {
            pq.push(std::make_pair(x.second, x.first));
            if (pq.size() > k) {
                pq.pop();
            }
        }
        
        std::vector<int> ans;
        
        while (!pq.empty()) {
            std::pair<int, int> temp = pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }
        
        return ans;
    }
};
