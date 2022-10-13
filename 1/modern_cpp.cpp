#include <iostream>
#include <vector>

// constante que sera executada pelo preprocessador, é preferível ao invés de macros do C


constexpr float PI = 3.14;


int main(){	
	std::vector<int> v {1, 2, 3, 4, 5, 6}; // vector é melhor vetores no estilo c, pois tem mais desempenh
					       //
	for(auto& value:v)
	{
		std::cout << value << std::endl;
	}		// loop moderno é mais eficiente
	
	return 0;
	
}

