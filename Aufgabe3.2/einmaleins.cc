#include <iostream> //Implementiert alle Funktionen, die in der Bibliothek iostream zu finden sind
#include <cstdlib>
using namespace std;

  //Setzt den Namespace für das gesamte Programm auf 

int main(int argc, char *argv[])
{

    const int N = 10;
    int factor;
    cout << "Gebe die Anzahl der Zeilen und Spalten ein" << endl;
    cin >> factor;

    for (int i = 1; i <= factor; i++) {
          for (int j = 1; j <= factor; j++) {
               cout.width(4);
               cout << i*j;
           }
           cout << endl;
    }

    for (int i = factor; i >= 1; i--) {
          for (int j = 1; j <= factor; j++) {
               cout.width(4);
               cout << i*j;
           }
           cout << endl;
    }

    factor = N;
    for (int i = i; i <= factor; i++) {
          for (int j = 1; j <= factor; j++) {
                cout.width(4);
                cout << i*j;
          }
          cout << endl;
    }
    system("pause"); //Wenn Compiler Zeile nicht erkennt, rauskommentieren
  
  return 0;

}
