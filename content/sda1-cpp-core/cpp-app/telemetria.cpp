#include <iostream>
#include <string>

int main() {
    // 1. DECLARACIÓN E INICIALIZACIÓN DE VARIABLES (Diferentes tipos)
    std::string nombreRover = "Curiosity-Horta"; // Texto: comillas dobles
    int muestrasRocas = 5;                       // Entero: números sin decimales
    float temperaturaSuelo = 18.7;              // Decimal: magnitudes continuas
    bool motorActivo = true;                     // Booleano: true (1) o false (0)

    // 2. MOSTRAR LOS DATOS POR PANTALLA
    std::cout << "========================================\n";
    std::cout << "    SISTEMA DE TELEMETRIA DEL ROVER     \n";
    std::cout << "========================================\n";
    
    std::cout << "Identificador del Rover : " << nombreRover << "\n";
    std::cout << "Muestras recogidas      : " << muestrasRocas << " unidades\n";
    std::cout << "Temperatura del suelo   : " << temperaturaSuelo << " oC\n";
    std::cout << "Estado del motor (1/0)  : " << motorActivo << "\n";

    std::cout << "----------------------------------------\n";

    // 3. MODIFICACIÓN DEL VALOR DE UNA VARIABLE
    // El rover avanza y recoge una muestra adicional
    muestrasRocas = muestrasRocas + 1;

    std::cout << ">> Nueva muestra detectada!\n";
    std::cout << ">> Muestras actualizadas: " << muestrasRocas << " unidades\n" ;
    std::cout << "========================================";

    return 0;
}