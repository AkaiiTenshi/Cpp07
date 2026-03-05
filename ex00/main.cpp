#include <iostream>
#include "whatever.hpp"

int main(){
	// int a = 42;
	// int b = 40;
	//
	// std::cout << "Max of "<< a << " and " << b << " is:" << max(a, b) << std::endl;
	//
	// int c = 5;
	// int d = 0;
	// std::cout << "Min of "<< c << " and " << d << " is:" << min(c, d) << std::endl;
	//
	// char e = 'e';
	// char f = 'f';
	// std::cout << "Max of "<< e << " and " << f << " is:" << max(e, f) << std::endl;
	//
	//
	// int z = 2;
	// int s = 42;
	// std::cout << "Swap of z: "<< z << " and " << " s: " << s << " gives us " << std::endl;
	// swap(z, s);
	// std::cout << "z "<< z << " and " << " s " << s <<  std::endl;

 int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0; 

}
