#include <iostream>
#include <string>
using namespace std;

class Room {
public:
  Room (string n) {name = n; North = this; South = this; East = this; West = this;};
  string name;
  Room *North, *South, *East, *West;
};

int main() 
{
  Room r1("Bad");
  Room r2("Schlafzimmer");
  Room r3("Wohnzimmer");
  Room r4("Esszimmer");
  Room r5("Flur");
  r1.North = &r2; r1.East = &r5;
  r2.South = &r1; r2.East = &r3;
  r3.West = &r2;  r3.South = &r5; r3.East = &r4;
  r4.West = &r3;
  r5.West = &r1;  r5.North = &r3;
  Room * here = &r1;
  bool done = false;
  do {
    cout << "Sie sind im " << here->name << ". Es gibt Wege nach";
    if (here->East != here) cout << " O";
    if (here->West != here) cout << " W";
    if (here->North != here) cout << " N";
    if (here->South != here) cout << " S";
    cout << ". Wohin? (X:exit)" << endl;
    string in;
    cin >> in;
    switch (toupper(in[0])) {           // in[0] ist der erste Buchstabe der Eingabe.
      case 'N': here = here->North; break;  // toupper() konvertiert zu einem Großbuchstaben
      case 'S': here = here->South; break;
      case 'O': here = here->East; break;
      case 'W': here = here->West; break;
      default: done = true; cout << "Tschuess!\n"; break;
    }
  } while (!done);
}