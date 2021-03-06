// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

#ifndef PCH_H
#define PCH_H
#include<vector>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<queue>
#include<unordered_map>
#include<iostream>
using namespace std;

// TODO: 添加要在此处预编译的标头

//---------------------------------测试函数----------------------------------------------------------
void testMap();//map
int random(int n);//rand
void Test_for();//vector 循环
void Test_for2();//遍历方式 vector<vecto<int>>


//比较模版-------模版声名与定义分开会报错？LNK2019错误！ 无法解析的外部错误----------------------------------
template <typename T>
int compare1(const T &c1, const T &c2);

template <typename T>
int compare(const T &c1, const T &c2)
{
	if (c1 > c2)
		return 1;
	if (c1 < c2)
		return -1;
	return 0;
}




//=======================================================题目实例=====================================
//215. Kth Largest Element in an Array
int findKthLargest(vector<int>& nums, int k);
int findKthLargest1(vector<int>& nums, int k);

//347. Top K Frequent Elements
vector<int> topKFrequent(vector<int>& nums, int k);








#endif //PCH_H
