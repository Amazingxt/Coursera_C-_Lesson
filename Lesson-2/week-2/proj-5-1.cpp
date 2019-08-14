#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	double idRate[100] = { 0 }; //按id存储繁殖率
	int idOrder[100] = { 0 };//记录id的顺序
	for (int i = 0; i < n; i++)
	{
		double id,numStart, numFinal ;
		cin >> id >> numStart >> numFinal;
		idOrder[i] = id;
		idRate[i] = double(numFinal /numStart);
	}
	//对繁殖率按升序排列
	//使得数组idRate和数组idOrder一一对应。
	for (int i = 0; i < n-1; i++)
		for (int j = i + 1; j < n;j++)
	{
		if (idRate[i] > idRate[j])
		{
			int changeRate = 0;
			changeRate = idRate[i];
			idRate[i] = idRate[j];
			idRate[j] = changeRate;
			int changeId = 0;
			changeId = idOrder[i];
			idOrder[i] = idOrder[j];
			idOrder[j] = changeId;
		}
	}
	//求相邻两繁殖率的差值，找出最大差值，取出其位置
	int maxDifference = 0;
	int flagSplit = 0;
	for (int i = 0; i < n-1; i++)
	{
		int difference = idRate[i + 1] - idRate[i];
		if (difference > maxDifference)
		{
			maxDifference = difference;
			flagSplit = i;
		}
	}
	//flagSplit位置及之前的为B类，之后的为A类
	//输出A类
	cout << n - (flagSplit+1) << endl;
	for (int i = flagSplit + 1; i < n; i++)
	{
		cout << idOrder[i] << endl;
	}
	//输出B类
	cout << flagSplit + 1 << endl;
	for (int i = 0; i <= flagSplit; i++)
	{
		cout << idOrder[i] << endl;
	}
	return 0;
}