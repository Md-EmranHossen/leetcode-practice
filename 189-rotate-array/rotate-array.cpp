class Solution {
public:
	void rotate(vector<int>& nums, int k) {
        //Emran
    k = k % nums.size();
	reverse(nums.begin(), nums.end());
	reverse(nums.begin(), nums.begin() + k);
	reverse(nums.begin() + k, nums.end());
	}
};