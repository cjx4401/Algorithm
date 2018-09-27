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

//遍历方式 vector--------------------------------------------------------------
void Test_for()
{
	vector<int> v = { 1,2,3,4,23,5,6,6,9,21,565 };

	cout << endl;
	cout << "第一种遍历v：";
	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	cout << endl;
	cout << "第二种遍历v：";
	for (auto i : v)
	{
		//i而不是v[i]
		cout << i << " ";
	}


	cout << endl;
	cout << "第三种遍历v：";
	for (auto i = v.begin(); i < v.end(); i++)
	{
		cout << (*i) << " ";
	}

	cout << endl;
	cout << "第四种遍历v：";
	for (auto &i : v)
	{
		cout << i << " ";
	}


}


//遍历方式 vector<vecto<int>>----------------------------------------------
void Test_for2()
{
	vector<int> v = { 1,2,3,4,23,5,6,6,9,21,565 };
	vector<int> v1 = { 1,2,3,4,5,6 };
	vector<vector<int>> v2;

	//把v中的全部元素放入v2;
	v2.push_back(v);

	cout << "第一种输出二维v2:";
	for (auto iter = v2.begin(); iter != v2.end(); ++iter)
	{
		for (int i = 0; i < v.size(); ++i)
		{
			cout << (*iter)[i] << " ";
		}
	}

	cout << endl;
	//cout << "第二种输出二维v2:";  越界
	//for (auto i : v2)
	//{
	//	for (auto j : v)
	//	{
	//		cout << i[j] << " ";
	//	}

	//}


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
	vector<int> res;
	if (!nums.size()) return res;
	unordered_map<int, int> cnt;
	for (auto num : nums) cnt[num]++;//------------以nums（向量）中的值作为下标，存储在cnt（map）的key中，所以cnt的value就是nums中值出现的次数。
	vector<vector<int>> bucket(nums.size() + 1);
	for (auto kv : cnt) {
		bucket[kv.second].push_back(kv.first);
	}

	for (int i = bucket.size() - 1; i >= 0; --i) {
		for (int j = 0; j < bucket[i].size(); ++j) {
			res.push_back(bucket[i][j]);
			if (res.size() == k) return res;
		}
	}

	return res;
}

