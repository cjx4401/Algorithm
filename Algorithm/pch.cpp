// pch.cpp: 与预编译标头对应的源文件；编译成功所必需的

#include "pch.h"



// 一般情况下，忽略此文件，但如果你使用的是预编译标头，请保留它。
//---------------------------------------------- 比较大小模版-------------------------------
template<typename T>
int compare1(const T &c1, const T &c2)//无法解析的外部错误，模版分开声名与定义
{
	if (c1 > c2) 
		return 1;
	if (c1 < c2) 
		return -1;
	return 0;
}



//-------------------------Test map--------------------------------------------------------
int testMap(vector<int> &nums) {
	unordered_map<int, int> map;
	for (int num : nums) {
		map[num]++;
	}

	return 1;

}
//------------------------int random--------------------------------
int random(int n) {

	int r =rand()%101;

	return r;

}





//215. Kth Largest Element in an Array
int findKthLargest(vector<int>& nums, int k) {
	nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), greater<int>());
	return nums[k - 1];
}

int findKthLargest1(vector<int>& nums, int k) {
	sort(nums.begin(), nums.end());
	return nums[nums.size() - k];
}


//347 347. Top K Frequent Elements
vector<int> topKFrequent(vector<int>& nums, int k) {


	return nums;
}
