#include<iostream>

void insertionsort(double *a, int size);

int main()
{
	int n;
	std::cin >> n;
	double *a = new double[n];
		for (int i = 0; i < n; ++i)
			std::cin >> a[i];

	insertionsort(a, n);
	system("pause");
	return 0;
}


void insertionsort(double *a, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		while (abs(a[i + 1]) <abs(a[i]) && i >= 0)
		{
			double tmp = a[i + 1];
			a[i + 1] = a[i];
			a[i] = tmp;
			--i;
		}
	}
	for (int i = 0; i < size; ++i)
		std::cout << a[i] << " ";
}