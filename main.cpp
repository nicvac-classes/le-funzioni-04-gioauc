#include <iostream>
using namespace std;
int input(int x);
void moltiplicazione();
int somma(int a, int b);
int sottrazione(int x);
int main() {
    int a, b;
    int dichiarazA, dichiarazB, sommaA, sottrazioneA;

    dichiarazA = input(a);
    dichiarazB = input(b);
    sommaA = somma(a, b);
    sottrazioneA = sottrazione(a, b);
    return 0;
}

int input(int x) {
    int x;

    do {
        cout << "Inserisci numero positivo" << endl;
        cin >> valore;
        if (x <= 0) {
            cout << "Errore! il numero deve esere positivo. Riprova" << endl;
        }
    } while (x <= 0);
    
    return x;
}

void moltiplicazione() {
}

int somma(int a, int b) {
    int valore;

    somma = a + b;
    
    return valore;
}

int sottrazione(int x) {
    int valore;

    somma = (int) (a - b);
    
    return valore;
}