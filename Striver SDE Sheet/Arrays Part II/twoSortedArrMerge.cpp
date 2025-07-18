class Solution {
public:
    void swapIfGreater(vector<int>& arr1, vector<int>& arr2, int i1, int i2) {
        if (arr1[i1] > arr2[i2]) {
            swap(arr1[i1], arr2[i2]);
        }
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m + n;
        int gap = (len / 2) + (len % 2);

        while (gap > 0) {
            int left = 0;
            int right = left + gap;

            while (right < len) {
                if (left < m && right >= m) {
                    swapIfGreater(nums1, nums2, left, right - m);
                } else if (left >= m) {
                    swapIfGreater(nums2, nums2, left - m, right - m);
                } else {
                    swapIfGreater(nums1, nums1, left, right);
                }
                left++;
                right++;
            }

            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }

        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};
