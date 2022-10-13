#include <iostream>
#include <iomanip>
//using namespace istream;

void receiv()
{
	std::string name;
	std::getline(std::cin, name);

	std::cout << "item2: " << name;

}

void limit_entry()
{
	std::string name;
	std::cin>>std::setw(5) >> name;

	std::cout << name;
}



int main()
{
//	char[5] item;
//	item = "pl";
//	std::cin.getline(&item, 4);

//	std::cout << item;

	receiv();

	limit_entry();
	return 0;

}
