void bubble_sort(int a[], int n) // сортировка пузырьком
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}
// готовая функция

int main()
{
	int a[] = {4,2};
	bubble_sort(a, 2);
	return 0;
}
