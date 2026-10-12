
class Solution {
public:
    int merge(vector<int>& nums, int start, int mid, int end) {
        int cnt = 0;
        int j = mid + 1;

        // Count reverse pairs
        for (int i = start; i <= mid; i++) {
            while (j <= end &&
                   (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }
            cnt += j - (mid + 1);
        }

        // Merge the sorted halves
        vector<int> temp;
        int left = start;
        int right = mid + 1;

        while (left <= mid && right <= end) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left++]);
        }

        while (right <= end) {
            temp.push_back(nums[right++]);
        }

        // Copy merged elements back
        for (int i = start; i <= end; i++) {
            nums[i] = temp[i - start];
        }

        return cnt;
    }

    int mergeSort(vector<int>& nums, int start, int end) {
        if (start >= end) return 0;

        int mid = start + (end - start) / 2;

        int cnt = mergeSort(nums, start, mid);
        cnt += mergeSort(nums, mid + 1, end);
        cnt += merge(nums, start, mid, end);

        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, (int)nums.size() - 1);
    }
};
