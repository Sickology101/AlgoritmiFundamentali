#include <iostream>
using namespace std;

/*
bool check_if_prim(int nr)
{
	int index;
	index = 2;
	while (index < nr/2)
	{
		if ((nr % index) == 0)
			return false;
		index++;
	}
	return true;
}

int *prim(int *array, int *size, int marime)
{
	int index;
	int *array2;

	*size = 0;
	index = 0;
	array2 = (int *)malloc(sizeof(int) * marime);
	while (index < marime)
	{
		if (check_if_prim(array[index]))
		{
			array2[*size] = array[index];
			(*size)++; 
		}
		index++;
	}
	return array2;
}
*/

/*
int get_big(int *array, int marime)
{
	int index;
	int ret;

	ret = array[0];
	index = 1;
	while (index < marime)
	{
		if (array[index] > ret)
			ret = array[index];
		index++;
	}
	return ret;
}

int *divizori(int *array, int *size, int marime)
{
	int index;
	int *array2;
	int nr;

	*size = 0;
	index = 0;
	array2 = (int *)malloc(sizeof(int) * marime);
	nr = get_big(array, marime);
	while (index <= nr/2)
	{
		if ((nr % index) == 0 )
		{
			array[*size] = index;
			(*size)++;
		}
			
		index++;
	}
	array[*size] = nr;
	(*size)++;
	return (array);
}
*/
/*
int get_medie(int *array, int marime)
{
	int ret;
	int index;

	index = 0;
	ret = 0;
	while (index < marime)
	{
		ret = ret + array[index];
		index++;
	}
	return (ret/marime);
}

int *multipli(int *array, int *size, int marime)
{
	int index;
	int *array2;
	int nr;

	*size = 0;
	index = 1;
	nr = get_medie(array, marime);
	array2 = (int *)malloc(sizeof(int) * nr);
	while (index <= nr)
	{

		array[*size] = nr * index;
		(*size)++;
		index++;
	}
	return (array);
}
*/
/*
int *sumare(int *array, int *size, int marime)
{
	int index;
	int *array2;

	*size = 0;
	index = 0;
	array2 = (int *)malloc(sizeof(int) * (marime - 1));
	while (index <= (marime - 1))
	{

		array[*size] =  array[index] + array[index + 1];
		(*size)++;
		index++;
	}
	(*size)--;
	return (array);
}
*/
/*
int get_sum(int nr)
{
	int ret;

	ret = 0;
	while (nr/10 != 0)
	{
		ret = ret + (nr % 10);
		nr = nr / 10;
	}
	ret = ret + nr;
	return ret;
}

int *suma(int *array, int *size, int marime)
{
	int index;
	int *array2;

	*size = 0;
	index = 0;
	array2 = (int *)malloc(sizeof(int) * (marime));

	while (index <= (marime - 1))
	{

		array2[*size] =  get_sum(array[index]);
		(*size)++;
		index++;
	}
	return (array2);
}
*/

int *palindrom(int *array, int *size, int marime)
{
	int index;
	int *array2;

	*size = 0;
	index = marime - 1;
	array2 = (int *)malloc(sizeof(int) * (marime));
	while (index >= 0)
	{
		array2[*size] = array[index];
		(*size)++;
		index--;
	}
	return (array2);
}

int main()
{
	int *array1;
	int index;
	int *array2;
	int size;
	int marime;

	index = 0;
	cout << "Introduceti dimensiunea: ";
	cin>>marime;
	array1 = (int *)malloc(sizeof(int) * marime);
	cout << "Introduceti numerele:";
	while(index < marime)
	{
		cin >> array1[index];
		index++;
	}
	//array2 = prim(array1, &size, marime);
	//array2 = divizori(array1, &size, marime);
	//array2 = multipli(array1, &size, marime);
	//array2 = sumare(array1, &size, marime);
	//array2 = suma(array1, &size, marime);
	array2 = palindrom(array1, &size, marime);
	index = 0;
	cout<< "Rezulat: ";
	while (index < size)
	{
		cout<<array2[index]<<" ";
		index++;
	}
	return 0;
}

