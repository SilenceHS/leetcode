void moveZeroes(vector<int>& nums) {
	for (int k = 0; k < nums.size() - 1; k++)
	{
		for(int i=0;i< nums.size() - 1-k;i++)
		if (nums[i] == 0)
		{
			nums[i] ^= nums[i + 1];
			nums[i + 1] ^= nums[i];
			nums[i] ^= nums[i + 1];
		}
	}
}
//类似冒泡排序算法,此题有更好解法
