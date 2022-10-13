#include <iostream>



bool all_types()
{
	int integer = 0;
	const int pi = 3;
	const double PI = 3.14;
	const float Pi = 3.14;
	bool bol = true;
	int hexa = 0x33;
	unsigned long long int longest = 100020020ULL;
	char a = 'a';
	
	std::string aa = "aaaa";


	std::cout << integer << std::endl
		  << pi << std::endl
		  << PI << std::endl
		  << Pi << std::endl
		  << bol << std::endl
		  << hexa << std::endl
		  << longest << std::endl
		  << a << std::endl
	
		  << aa << std::endl;

	return true;
}


int main()
{
	all_types();
}
