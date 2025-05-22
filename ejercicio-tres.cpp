#include <iostream>
#include <cstdlib>
#include <ctime>
//Desarrolla un juego donde la computadora genera un número aleatorio y el jugador 
//debe adivinarlo. Implementa funciones para: generar el número aleatorio, 
//verificar el intento del usuario, dar pistas (caliente/frío según la cercanía)
//y controlar el número de intentos. Añade niveles de dificultad 
//(fácil: 1-50 con 10 intentos, medio: 1-100 con 7 intentos, difícil: 1-200 con 5 intentos) seleccionables mediante un menú. 
//Usa contadores e indicadores de estado para controlar la finalización de cada partida.

int numeroRandom(int difiGen){
    int numero;
    if(difiGen == 1){
        numero = rand() % 50 + 1;
    }
    if (difiGen == 2)
    {
        numero = rand() % 100 + 1;
    }
    if (difiGen == 3)
    {
        numero = rand() % 200 + 1;
    }

    return numero;
}

void pista(int &numeroPC, int &numeroUsuario){
    int pistaEntero;

    pistaEntero = abs(numeroPC - numeroUsuario);

    if (pistaEntero <= 5)
    {
        std::cout << "Muy Caliente." << std::endl;
    }
    if (pistaEntero <= 10 && pistaEntero >= 5)
    {
        std::cout << "Caliente." << std::endl;
    }
    if (pistaEntero > 10 && pistaEntero < 15)
    {
        std::cout << "Tibio." << std::endl;
    }
    if (pistaEntero >= 15 && pistaEntero < 20)
    {
        std::cout << "Frío." << std::endl;
    }
    if (pistaEntero >= 20){
        std::cout << "Muy Frío." << std::endl;
    }
}

void juego(int &elegirDificultad){
    int numeroIntentos = 0;
    int intentosDificultad;
    int valor;
    int numElegido;

    valor = numeroRandom(elegirDificultad);

    if (elegirDificultad == 1)
    {
        intentosDificultad = 10;
    } else if (elegirDificultad == 2)
    {
        intentosDificultad = 7;
    } else {
        intentosDificultad = 5;
    }
    
    do
    {
        std::cout << "Ingrese el numero: " << std::endl;
        std::cin >> numElegido;
        if (numElegido != valor)
        {
            std::cout << "Número incorrecto!" << std::endl;
            pista(valor, numElegido);
            std::cout << "Intente nuevamente." << std::endl;
            numeroIntentos++;
        }
    } while (numElegido != valor && numeroIntentos < intentosDificultad);

    if (numElegido == valor)
    {
        std::cout << "Felicidades! Has ganado el juego!" << std::endl;
        std::cout << "El numero es: " << valor << std::endl;
        std::cout << "Tu elección fue: " << numElegido << std::endl;
    } else {
        std::cout << "Fin del juego! Te has quedado sin intentos." << std::endl;
        std::cout << "El numero era: " << valor << std::endl;
    }    
}

void selectorDificultad(int &elegirDif){
    std::cout << "Escoja su dificultad: " << std::endl << "1 = Fácil" << std::endl << "2 = Normal" << std::endl << "3 = Difícil" << std::endl;
    std::cin >> elegirDif;

    juego(elegirDif);
}

int main(){
    int volverAJugar;
    int dificultad;

    srand(time(0));
    do
    {
        selectorDificultad(dificultad);
        std::cout << "¿Quieres volver a jugar? (1: Sí/2: No): " << std::endl;
        std::cin >> volverAJugar;
        if (volverAJugar != 1 && volverAJugar != 2)
        {
            std::cout << "Por favor, ingrese un valor valido." << std::endl;
        }
    } while (volverAJugar == 1);
    
    return 0;
}