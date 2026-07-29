class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return start;
    }
};

/* Agar target number array me mil jaye, to uska index return karo.
 Agar target number na mile, to batao ki sorted array me use kis index par insert karna chahiye taaki array sorted hi rahe   */