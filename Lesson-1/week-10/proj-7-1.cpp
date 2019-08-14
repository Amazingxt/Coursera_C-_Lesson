#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	int K = 0;
	bool evenflag = 0;

	cin >> N;

	while (N != 0)
	{
		if (N % 2 == 0) { K = (N / 2) + 1; evenflag = 1; }
		else { K = (N + 1) / 2; }

		int* a = new int[K];
		int temp;

		//initialize and sort the first K numbers in array a[K]
		for (int i = 0; i < K; i++)
			cin >> a[i];

		for (int i = 0; i < K; i++)
			for (int j = 0; j < K - i - 1; j++)
			{
			if (a[j] < a[j + 1]) { temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp; }
			}

		for (int i = 0; i < N - K ; i++)
		{
			cin >> temp;
			if (temp > a[K - 1])
			{
				if (temp >= a[0])
				{
					for (int j = K - 1; j > 0; j--)
						a[j] = a[j - 1];
					a[0] = temp;
				}
				else
				{
					for (int j = K - 1; j > 0; j--)
					{
						if ((a[j]<=temp) && (a[j - 1]>temp)) 
						{
							for (int m = K - 1; m > j; m--)
								a[m] = a[m - 1];
							a[j] = temp;
						}
					}
				}
			}
		}

		if (evenflag == true) cout << int((a[K - 1] + a[K - 2]) / 2) << endl;
		else cout << int(a[K - 1]) << endl;

		delete[] a;

		evenflag = 0;
		cin >> N;

	}
	
	return 0;
}