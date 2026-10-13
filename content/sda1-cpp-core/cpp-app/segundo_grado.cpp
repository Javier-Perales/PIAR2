/*CALCULADORA DE ECUACIONES DE SEGUNDO GRADO*/
#include <iostream>
#include <cmath>
int main() {
    double a, b, c, discriminante, x1, x2;

    //Cabecera del programa
    std::cout << "CALCULADORA DE ECUACIONES DE SEGUNDO GRADO\n";
    std::cout << "==========================================\n";

    // Solicitar al usuario los coeficientes de la ecuación
    std::cout << "Ingrese el coeficiente a: ";
    std::cin >> a;
    std::cout << "Ingrese el coeficiente b: ";
    std::cin >> b;
    std::cout << "Ingrese el coeficiente c: ";
    std::cin >> c;

    // Ecuacion de segundo grado: ax^2 + bx + c = 0
    std::cout << "La ecuación es: " << a << "x^2 + " << b << "x + " << c << " = 0\n" ;

    // Calcular el discriminante
    discriminante = b * b - 4 * a * c;

    // Verificar el valor del discriminante
    if (discriminante > 0) {
        // Dos soluciones reales y distintas
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        std::cout << "Las soluciones son: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    } else if (discriminante == 0) {
        // Una solución real doble
        x1 = -b / (2 * a);
        std::cout << "La solución es: x = " << x1 << std::endl;
    } else {
        // No hay soluciones reales
        std::cout << "No hay soluciones reales." << std::endl;
    }

    return 0;
}
