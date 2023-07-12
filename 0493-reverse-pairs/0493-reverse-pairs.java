class Solution {
    public int reversePairs(int[] nums) {
        return mergeSort(nums, 0, nums.length - 1);
    }
    
    private int mergeSort(int[] nums, int left, int right) {
        if (left >= right) {
            return 0;
        }
        
        int mid = left + (right - left) / 2;
        int count = mergeSort(nums, left, mid) + mergeSort(nums, mid + 1, right);
        
        int[] merged = new int[right - left + 1];
        int i = left;
        int j = mid + 1;
        int k = 0;
        
        while (i <= mid && j <= right) {
            if ((long) nums[i] > 2 * (long) nums[j]) {
                count += mid - i + 1;
                j++;
            } else {
                i++;
            }
        }
        
        i = left;
        j = mid + 1;
        
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                merged[k++] = nums[i++];
            } else {
                merged[k++] = nums[j++];
            }
        }
        
        while (i <= mid) {
            merged[k++] = nums[i++];
        }
        
        while (j <= right) {
            merged[k++] = nums[j++];
        }
        
        System.arraycopy(merged, 0, nums, left, merged.length);
        
        return count;
    }
}
