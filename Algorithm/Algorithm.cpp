// Algorithm.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

//------------------------------------------模版放在同一个cpp当中或者都放在头文件中！--------------------------
template<typename T>
int compare2(const T &c1, const T &c2)
{
	if (c1 > c2)
		return 1;
	if (c1 < c2)
		return -1;
	return 0;
}







int main()
{
    std::cout << "Hello World!\n"; 

	unordered_map<int, int> map;
	vector<int> v = { 1,2,3,4,23,5,6,6,9,21,565};
	vector<int> v1 = { 1,2,3,4,5,6 };
	vector<vector<int>> v2;



	unordered_map<int, int> cnt;
	for (auto num : v) cnt[num]++;//------------以nums（向量）中的值作为下标，存储在cnt（map）的key中，所以cnt的value就是nums中值出现的次数。
	vector<vector<int>> bucket(v.size() + 1);
	for (auto kv : cnt) {
		bucket[kv.second].push_back(kv.first);
	}
		

	Test_for2();

	//输出map
    cout << endl;
	cout << "map:";
	for (auto i = 0; i < cnt.size(); i++)
	{
		cout << map[i] << " ";
	}


	cout << endl;
	cout << "bucket:";

	//auto iter = bucket.begin();
	//for (auto i = 0; i < bucket.size()-2; ++i)
	//{
	//	cout <<  (*iter)[i]<< " ";
	//}

	//for (auto i = bucket.begin(); i < bucket.end(); i++)
	//{
	//	cout <<  << endl;
	//}
	//for (auto  i = 0;i < bucket.size(); i++)
	//{
	//	cout << bucket[i][i] << " ";
	//}



	

	return 0;

}






// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
