class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = nums[0], largest = nums[0];
        for(int x : nums) {
            largest = max(largest, x);
            smallest = min(smallest, x);
        }
        while(smallest!=0) {
            int rem = largest%smallest;
            largest = smallest;
            smallest = rem;
        }
        return largest;
    }
};