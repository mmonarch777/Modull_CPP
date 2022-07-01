#include "Header.hpp"

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << WHITE << "a = " << a << ", b = " << b << DEFAULT << std::endl;
    std::cout << YELLOW <<"min( a, b ) = " << ::min( a, b ) << DEFAULT << std::endl;
    std::cout << GREEN <<"max( a, b ) = " << ::max( a, b ) << DEFAULT << std::endl;
    std::string c1 = "chaine1";
    std::string c2 = "chaine2";
    ::swap(c1, c2);
    std::cout << WHITE << "c1 = " << c1 << ", c2 = " << c2 << DEFAULT << std::endl;
    std::cout << YELLOW <<"min( c1, c2 ) = " << ::min( c1, c2 ) << DEFAULT << std::endl;
    std::cout << GREEN <<"max( c1, c2 ) = " << ::max( c1, c2 ) << DEFAULT << std::endl;
    return 0;
}
