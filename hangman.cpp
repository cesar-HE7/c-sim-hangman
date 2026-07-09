// hangman.cpp : playing hangman with random words

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

char mayuscula(char letra)
{
    int numchar;
    char letraupper;
    numchar = int(letra);           // convert character to integer
    if (numchar > 96)               // In ASCII 97 starts the lowercase letters
    {
        numchar = numchar - 32;     // Convert this to uppercase letters
    }
    letraupper = char(numchar);     // Convert integer back to character
    return letraupper;
}

string palabra(int valor)
{
    string theword;
    switch (valor)
    {
    case 1: theword = "ALLIGATOR"; break;
    case 2: theword = "ALBATROS"; break;
    case 3: theword = "ALPACA"; break;
    case 4: theword = "ANACONDA"; break;
    case 5: theword = "ANT"; break;
    case 6: theword = "ANTELOPE"; break;
    case 7: theword = "APE"; break;
    case 8: theword = "ARMADILLO"; break;
    case 9: theword = "BEAR"; break;
    case 10: theword = "CAT"; break;
    case 11: theword = "DEER"; break;
    case 12: theword = "EAGLE"; break;
    case 13: theword = "FALCON"; break;
    case 14: theword = "GOAT"; break;
    case 15: theword = "HORSE"; break;
    case 16: theword = "IGUANA"; break;
    case 17: theword = "JAGUAR"; break;
    case 18: theword = "KANGAROO"; break;
    case 19: theword = "LOBSTER"; break;
    case 20: theword = "MOOSE"; break;
    case 21: theword = "NIGHTINGALE"; break;
    case 22: theword = "OCTOPUS"; break;
    case 23: theword = "PENGUIN"; break;
    case 24: theword = "QUAIL"; break;
    case 25: theword = "RACCOON"; break;
    case 26: theword = "SALAMANDER"; break;
    case 27: theword = "TIGER"; break;
    case 28: theword = "URIAL"; break;
    case 29: theword = "VIPER"; break;
    case 30: theword = "WALRUS"; break;
    case 31: theword = "XERUS"; break;
    case 32: theword = "YAK"; break;
    case 33: theword = "ZEBRA"; break;
    default: theword = "HANGMAN";
    }
    return theword;
}

void draw(int valor)
{
    switch (valor)
    {
    case 1:
        cout << "*******************************************************" << endl;
        cout << "*                                                     *" << endl;
        cout << "*      +----------+                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |         (_)                                  *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*******************************************************" << endl;
        break;
    case 2:
        cout << "*******************************************************" << endl;
        cout << "*                                                     *" << endl;
        cout << "*      +----------+                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |         (_)                                  *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*******************************************************" << endl;
        break;
    case 3:
        cout << "*******************************************************" << endl;
        cout << "*                                                     *" << endl;
        cout << "*      +----------+                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |         (_)                                  *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |         /                                    *" << endl;
        cout << "*      |        /                                     *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*******************************************************" << endl;
        break;
    case 4:
        cout << "*******************************************************" << endl;
        cout << "*                                                     *" << endl;
        cout << "*      +----------+                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |         (_)                                  *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |         / \\                                  *" << endl;
        cout << "*      |        /   \\                                 *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*******************************************************" << endl;
        break;
    case 5:
        cout << "*******************************************************" << endl;
        cout << "*                                                     *" << endl;
        cout << "*      +----------+                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |         (_)                                  *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |         / \\                                  *" << endl;
        cout << "*      |        /   \\                                 *" << endl;
        cout << "*      |       o                                      *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*******************************************************" << endl;
        break;
    case 6:
        cout << "*******************************************************" << endl;
        cout << "*                                                     *" << endl;
        cout << "*      +----------+                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |         (_)                                  *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |         / \\                                  *" << endl;
        cout << "*      |        /   \\                                 *" << endl;
        cout << "*      |       o     o                                *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*******************************************************" << endl;
        break;
    case 7:
        cout << "*******************************************************" << endl;
        cout << "*                                                     *" << endl;
        cout << "*      +----------+                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |         (_)                                  *" << endl;
        cout << "*      |         /|                                   *" << endl;
        cout << "*      |        / |                                   *" << endl;
        cout << "*      |         / \\                                  *" << endl;
        cout << "*      |        /   \\                                 *" << endl;
        cout << "*      |       o     o                                *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*******************************************************" << endl;
        break;
    case 8:
        cout << "*******************************************************" << endl;
        cout << "*                                                     *" << endl;
        cout << "*      +----------+                                   *" << endl;
        cout << "*      |          |     H A N G E D !                 *" << endl;
        cout << "*      |         (_)                                  *" << endl;
        cout << "*      |         /|\\                                  *" << endl;
        cout << "*      |        / | \\                                 *" << endl;
        cout << "*      |         / \\                                  *" << endl;
        cout << "*      |        /   \\                                 *" << endl;
        cout << "*      |       o     o                                *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*******************************************************" << endl;
        break;
    case 9:
        cout << "*******************************************************" << endl;
        cout << "*                                                     *" << endl;
        cout << "*      +----------+                                   *" << endl;
        cout << "*      |          |     H A N G M A N !               *" << endl;
        cout << "*      |         (_)                                  *" << endl;
        cout << "*      |         /|\\                                  *" << endl;
        cout << "*      |        / | \\                                 *" << endl;
        cout << "*      |         / \\                                  *" << endl;
        cout << "*      |        /   \\                                 *" << endl;
        cout << "*      |       o     o      by: Cesar Rios            *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*******************************************************" << endl;
        break;
    default:
        cout << "*******************************************************" << endl;
        cout << "*                                                     *" << endl;
        cout << "*      +----------+                                   *" << endl;
        cout << "*      |          |                                   *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*      |                                              *" << endl;
        cout << "*******************************************************" << endl;
    }
    // 8 possibilities of hangman
}

int main()
{
    char letra;
    string sletra;
    string lapalabra;
    string adivinada;
    string letrasusadas;
    int elnumero, i, intentosfallidos = 0;
    int position, position2, position3;
    srand(time(0));
    elnumero = rand() % 27;
    lapalabra = palabra(elnumero);
    cout << "Hello, Welcome to Hangman!" << endl;
    draw(9);
    cout << "You have 8 chances to guess the word." << endl;
    cout << "The word is: ";
    for (i = 0; i < lapalabra.size(); i++)
    {
        cout << "_";
        adivinada.append("_");
    }

    //Aqui deberia empezar un bucle "while"
    //Termina cuando adivino la palabra completa o a los 8 intentos
    
    while (intentosfallidos < 8 && lapalabra != adivinada)
    {
        cout << endl << "Type a letter: ";
        letra = _getch();
        system("cls");                          // Borro la pantalla
        letra = mayuscula(letra);               // uppercase for letra (siempre en mayuscula)
        sletra = letra;                         // convierto char a string
        position = lapalabra.find(letra, 0);    // ver si la letra esta en la palabra, position es -1 si no esta.
        if (position >= 0)                        // si la letra esta, sera >0 dando la posicion de la letra en la palabra
        {
            adivinada.replace(position, 1, sletra);     // reemplazo solo 1 caracter con la letra en la correcta posicion.
            position2 = lapalabra.find(letra, position + 1);    // analizo si existe una segunda letra igual en la palabra.
            if (position2 >= 0)
            {
                adivinada.replace(position2, 1, sletra);    // remplazo la segunda letra en la correcta posicion en la palabra.
                position3 = lapalabra.find(letra, position2 + 1);   // analizo si existe una tercera letra igual en la palabra.
                if (position3 >= 0)
                {
                    adivinada.replace(position3, 1, sletra);    // reemplza la tercera letra en la correcta posicion en la palabra.
                } //      escribir la letra en esas posiciones en "adivinada"
            } //      escribir la letra en esas posiciones en "adivinada"
        }//      ver si esta en una o mas posiciones en "la palabra"
        else // si la letra no esta:
        {
            intentosfallidos++;             // incrementar "intentos fallidos"
            letrasusadas.append(sletra);    // escribir la letra en "letrasusadas" y agregar un espacio
            letrasusadas.append(" ");
        }
        draw(intentosfallidos);     // mostrar el dibujo de acuerdo al numero de intentos fallidos
        cout << endl;
        cout << "Incorrect letters guessed: " << letrasusadas << endl;  // mostrar "letrasusadas"
        cout << "So far you have guessed: " << adivinada << endl;       // mostrar "adivinada"
    }
    if (lapalabra == adivinada)
    {
        cout << endl << "CONGRATULATIONS! You have guessed the word...!" << endl;
    }
    else
    {
        cout << endl << "Oh no, you lost! The correct word was: " << lapalabra << endl;
    }
    system("pause>0");
    return 0;
}
