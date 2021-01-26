#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE]{};
	bool alreadythere;
	for (int i = 0; i < SIZE;)
	{
		alreadythere = false;
		int newgenerate = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newgenerate)
			{
				alreadythere = true;
				break;
			}
		}
		if (alreadythere != true)
		{
			arr[i] = newgenerate;
			i++;
		}

	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	cout << endl;
	cout << sizeof(arr) << " - Array size from " << SIZE << " values!\n";
	cout << sizeof(arr) / sizeof(int) << " - The total number of values in the array\n";

	int min_v = arr[0];
	for (int s = 1; s < SIZE; s++)
	{
		if (arr[s] < min_v)
		{
			min_v = arr[s];
		}
	}
	cout << min_v << " - min value array!\n";
}
