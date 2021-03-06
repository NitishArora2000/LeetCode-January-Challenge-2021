class Solution {
public:
    int count = 0;
    void Swap(int nums[], int i, int j) {
        swap(nums[i],nums[j]);
    }
    void helper(int nums[], int start) {
        if (start == 0) {
            count++;
            return;
        }
        for (int i = start; i > 0; i--) {
            Swap(nums, start, i);
            if (nums[start] % start == 0 || start % nums[start] == 0) helper(nums, start-1);
            Swap(nums,i, start);
        }
    }
     int countArrangement(int N) {
        if (N == 0) return 0;
        int nums[N+1];
        for (int i = 0; i <= N; i++) nums[i] = i;
        helper(nums, N);
        return count;
    }
};
