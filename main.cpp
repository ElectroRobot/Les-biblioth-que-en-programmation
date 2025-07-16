#include <iostream>
#include "./fonction_ET.cpp"

int main() {
    bool a, b;

    std::cout << "Entrez deux valeurs logiques (0 ou 1) : " << std::endl << " a : ";
    std::cin >> a;
    std::cout << std::endl << " b : ";
    std::cin >> b;

    bool result = fonction_ET(a, b);

    std::cout << std::endl << a << " ET " << b << " = " << result << std::endl;

    return 0;
}
