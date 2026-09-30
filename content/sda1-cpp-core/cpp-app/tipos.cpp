#include <iostream>

int main() {
    int bateriaTotal = 25;
    int motores = 4;
    float reparto = (float)bateriaTotal / (float)motores;

    std::cout << "Energia por motor: " << reparto << std::endl;
    return 0;
}