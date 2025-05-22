#include <iostream>
//Desarrolla un programa que permita convertir entre diferentes unidades de medida. Implementa funciones separadas para conversiones de: temperatura (Celsius, Fahrenheit, Kelvin), longitud (metros, pies, pulgadas), peso (kilogramos, libras) y volumen (litros, galones). El programa debe tener un menú principal para seleccionar el tipo de unidad y submenús para las conversiones específicas. Diseña las condiciones de los bucles para que el programa continúe ejecutándose hasta que el usuario elija salir.

float tempCalculadora(){
    float resultado;
    float temperaturaInicial;
    int unidadTempInicial;
    int unidadTempFinal;
    do
    {
        std::cout << "Escoja la unidad inicial" << std::endl << "1. Celsius./2. Fahrenheit/3. Kelvin" << std::endl;
        std::cin >> unidadTempInicial;
        std::cout << "Escoja a que unidad quiere convertir su valor inicial" << std::endl << "1. Celsius./2. Fahrenheit/3. Kelvin" << std::endl;
        std::cin >> unidadTempFinal;
        if (unidadTempInicial == unidadTempFinal)
        {
            std::cout << "Estas convirtiendo de una unidad a sí misma :)" << std::endl;
        }
    } while ((unidadTempInicial < 1 || unidadTempInicial > 3) || (unidadTempFinal < 1 || unidadTempFinal > 3) || (unidadTempInicial == unidadTempFinal));

    std::cout << "Ingrese la temperatura:" << std::endl;
    std::cin >> temperaturaInicial;

    if (unidadTempInicial == 1 && unidadTempFinal == 2)
    {
        resultado = (temperaturaInicial * 9.0f/5.0f) + 32;
    }
    if (unidadTempInicial == 1 && unidadTempFinal == 3){
        resultado = temperaturaInicial + 273.15f;
    }
    if (unidadTempInicial == 2 && unidadTempFinal == 1){
        resultado = (temperaturaInicial - 32) * 5.0f/9.0f;
    }
    if (unidadTempInicial == 2 && unidadTempFinal == 3){
        resultado = (temperaturaInicial - 32) * 5.0f/9.0f + 273.15;
    }
    if (unidadTempInicial == 3 && unidadTempFinal == 1){
        resultado = temperaturaInicial - 273.15f;
    }
    if (unidadTempInicial == 3 && unidadTempFinal == 2){
        resultado = (temperaturaInicial - 273.15f) * 9.0f/5.0f + 32;
    }

    return resultado;
}

float longitudCalculadora(){
    float resultado;
    float longitudInicial;
    int unidadLongitudInicial;
    int unidadLongitudFinal;
    do
    {
        std::cout << "Escoja la unidad inicial" << std::endl << "1. Metros./2. Pies/3. Pulgadas" << std::endl;
        std::cin >> unidadLongitudInicial;
        std::cout << "Escoja a que unidad quiere convertir su valor inicial" << std::endl << "1. Metros./2. Pies/3. Pulgadas" << std::endl;
        std::cin >> unidadLongitudFinal;
        if (unidadLongitudInicial == unidadLongitudFinal)
        {
            std::cout << "Estas convirtiendo de una unidad a sí misma :)" << std::endl;
        }
    } while ((unidadLongitudInicial < 1 || unidadLongitudInicial > 3) || (unidadLongitudFinal < 1 || unidadLongitudFinal > 3) || (unidadLongitudInicial == unidadLongitudFinal));

    std::cout << "Ingrese la longitud:" << std::endl;
    std::cin >> longitudInicial;

    if (unidadLongitudInicial == 1 && unidadLongitudFinal == 2)
    {
        resultado = longitudInicial * 3.281;
    }
    if (unidadLongitudInicial == 1 && unidadLongitudFinal == 3){
        resultado = longitudInicial * 39.3701;
    }
    if (unidadLongitudInicial == 2 && unidadLongitudFinal == 1){
        resultado = longitudInicial * 0.3048;
    }
    if (unidadLongitudInicial == 2 && unidadLongitudFinal == 3){
        resultado = longitudInicial * 12;
    }
    if (unidadLongitudInicial == 3 && unidadLongitudFinal == 1){
        resultado = longitudInicial / 39.37;
    }
    if (unidadLongitudInicial == 3 && unidadLongitudFinal == 2){
        resultado = longitudInicial / 12;
    }

    return resultado;
}

float pesoCalculadora(){
    float resultado;
    float pesoInicial;
    int unidadPesoInicial;
    int unidadPesoFinal;
    do
    {
        std::cout << "Escoja la unidad inicial" << std::endl << "1. Kilos./2. Libras" << std::endl;
        std::cin >> unidadPesoInicial;
        std::cout << "Escoja a que unidad quiere convertir su valor inicial" << std::endl << "1. Kilos./2. Libras" << std::endl;
        std::cin >> unidadPesoFinal;
        if (unidadPesoInicial == unidadPesoFinal)
        {
            std::cout << "Estas convirtiendo de una unidad a sí misma :)" << std::endl;
        }
    } while ((unidadPesoInicial != 1 && unidadPesoInicial != 2) || (unidadPesoFinal != 1 && unidadPesoFinal != 2) || (unidadPesoInicial == unidadPesoFinal));

    std::cout << "Ingrese el peso:" << std::endl;
    std::cin >> pesoInicial;

    if (unidadPesoInicial == 1 && unidadPesoFinal == 2)
    {
        resultado = pesoInicial * 2.205;
    }
    if (unidadPesoInicial == 2 && unidadPesoFinal == 1){
        resultado = pesoInicial / 2.205;
    }

    return resultado;
}

float volumenCalculadora(){
    float resultado;
    float masaInicial;
    int unidadMasaInicial;
    int unidadMasaFinal;
    do
    {
        std::cout << "Escoja la unidad inicial" << std::endl << "1. Litros./2. Galones" << std::endl;
        std::cin >> unidadMasaInicial;
        std::cout << "Escoja a que unidad quiere convertir su valor inicial" << std::endl << "1. Litros./2. Galones" << std::endl;
        std::cin >> unidadMasaFinal;
        if (unidadMasaInicial == unidadMasaFinal)
        {
            std::cout << "Estas convirtiendo de una unidad a sí misma :)" << std::endl;
        }
    } while ((unidadMasaInicial != 1 && unidadMasaInicial != 2) || (unidadMasaFinal != 1 && unidadMasaFinal != 2) || (unidadMasaInicial == unidadMasaFinal));

    std::cout << "Ingrese la masa:" << std::endl;
    std::cin >> masaInicial;

    if (unidadMasaInicial == 1 && unidadMasaFinal == 2)
    {
        resultado = masaInicial / 3.785;
    }
    if (unidadMasaInicial == 2 && unidadMasaFinal == 1){
        resultado = masaInicial * 3.785;
    }

    return resultado;
}

void unidadFinal(int &tipoConversion){
    float res;
    if (tipoConversion == 1)
    {
        res = tempCalculadora();
        std::cout << "La unidad convertida es de " << res << std::endl;
    }
    if (tipoConversion == 2)
    {
        res = longitudCalculadora();
        std::cout << "La unidad convertida es de " << res << std::endl;
    }
    if (tipoConversion == 3)
    {
        res = pesoCalculadora();
        std::cout << "La unidad convertida es de " << res << std::endl;
    }
    if (tipoConversion == 4)
    {
        res = volumenCalculadora();
        std::cout << "La unidad convertida es de " << res << std::endl;
    }
}

void menuPrincipal(int &tipoConversion){
    int repetirPrograma;
    do
    {
        std::cout << "Elija que tipo de medida quiere convertir" << std::endl << "1. Temperatura" << std::endl << "2. Longitud" << std::endl << "3. Peso" << std::endl << "4. Volumen" << std::endl << "5. Salir" << std::endl;
        std::cin >> tipoConversion;
        
        if (tipoConversion >= 1 && tipoConversion <= 4)
        {
            unidadFinal(tipoConversion);
        } else if (tipoConversion != 5){
            std::cout << "Valor incorrecto para el tipo de conversión. Intente nuevamente" << std::endl; 
        } 
        std::cout << "¿Desea convertir otra medida? (0 = Sí/1 = No)" << std::endl;
        std::cin >> repetirPrograma;
    } while (tipoConversion != 5 && repetirPrograma == 0);
}

int main(){
    int conversion;

    menuPrincipal(conversion);

    return 0;
}