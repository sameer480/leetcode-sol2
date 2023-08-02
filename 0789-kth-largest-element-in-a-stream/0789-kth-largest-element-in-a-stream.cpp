#include <queue>
#include <vector>

class KthLargest {
public:
    KthLargest(int k, std::vector<int>& nums) {
        kth = k;
        for (int num : nums) {
            pq.push(num);
            if (pq.size() > k) {
                pq.pop(); // Remove the smallest element if the size exceeds k.
            }
        }
    }

    int add(int val) {
        pq.push(val);
        if (pq.size() > kth) {
            pq.pop(); // Remove the smallest element if the size exceeds k.
        }
        return pq.top(); // The top element of the priority queue will be the kth largest.
    }

private:
    int kth;
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
};
