// Algorithm.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

//------------------------------------------模版放在同一个cpp当中--------------------------
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
	vector<int> v = { 1,2,3,4,4,5,6,6,6};
	vector<int> v1 = { 1,2,3,4,5,6 };
	vector<int> v2 = { 1,2,3,4 };
	vector<int> v3 = { 1,2,3,5 };

	//int a= compare1(v2, v3);
	int a = 123;
	a = compare(3,4);

	cout << a << endl;

	//int a = v.size();

	//if (v1.size())
	//{
	//	cout << "123";
	//}

	//for (int num : v) {
	//	map[num]++;
	//}


	//for (int i = 0; i < map.size(); i++)
	//{
	//	cout << map[i] << endl;
	//}
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
