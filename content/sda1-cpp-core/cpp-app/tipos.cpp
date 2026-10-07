#include <iostream>

int main() {
    int bateriaTotal = 25;
    int motores = 4;
    int reparto = bateriaTotal / motores;

    std::cout << "Energia por motor: " << reparto << std::endl;
    return 0;
}