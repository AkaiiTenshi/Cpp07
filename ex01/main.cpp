#include "iter.hpp"

template <typename T>
void printElement(T const &elem) {
    std::cout << elem << std::endl;
}

int main(){
	std::string str_tab[] = {"Yo", "comment", "tu", "vas"};
	int tab[5] = {42, 61, 93, 2000, 26};

	std::cout << "Iter on arr of int" << std::endl;
	iter(tab, 5, printElement<int>);
	std::cout << std::endl;
	std::cout << "Iter on arr of strings" << std::endl;
	iter(str_tab, 4, printElement<std::string>);
}
