#include <iostream>


int binary_search(int i, int *vector, int limit, int search)
{
	if(i > limit)
       	{
		std::cout << "cannot find it" << std::endl;
		return 0;
	}

	int half = (i + limit) / 2 + 1;
	int item_ref = vector[half];

	std::cout << "-> Value: " << item_ref << std::endl;


	if(item_ref == search)
	{
		std::cout << "Value finded" << std::endl;
		return 1;
	}
	if(item_ref > search) binary_search(i, vector, half, search);
	else binary_search(half, vector, limit, search);
	return 0;
}



int main()
{
	int vector[] = {2, 4, 6, 8, 10};
	binary_search(0, vector, 4, 10);
	return 0;	
}
