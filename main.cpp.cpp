#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int size = 10;
	int arr[size]{};
	bool alreadythere;
	for (int i = 0; i < size;)
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
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}