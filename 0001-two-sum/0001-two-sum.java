import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int[] result = new int[2]; // Corrected: Changed 'array' to 'result'

        for (int i = 0; i < nums.length; i++) { // Corrected: Changed 'nums.size()' to 'nums.length'
            int complement = target - nums[i];

            if (map.containsKey(complement)) {
                result[0] = map.get(complement);
                result[1] = i;
                break; // Added: Break out of the loop once the pair is found
            }

            map.put(nums[i], i);
        }

        return result;
    }
}
