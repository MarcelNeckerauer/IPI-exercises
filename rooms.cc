#include <iostream>
#include <string>
using namespace std;

class Room {
public:
  Room (string n, int a) {name = n; North = this; South = this; East = this; West = this; allowedEntries = a;}
  string name;
  int allowedEntries;
  Room *North, *South, *East, *West;
  void init() {
    cout << "Sie sind im " << this -> name << ". Es gibt Wege nach";
    if (this -> East != this) cout << " O";
    if (this -> West != this) cout << " W";
    if (this -> North != this) cout << " N";
    if (this -> South != this) cout << " S";
    cout << ". Sie duerfen den Raum noch " << this -> allowedEntries << "mal betreten.";
    cout << " Wohin? (X:exit)" << endl;
  }
};

int main()
{
  int a1 = 5;
  int a2 = 3;
  int a3 = 10;
  int a4 = 1;
  int a5 = 7;
  int a6 = 6;
  Room r1("Bad", a1);
  Room r2("Schlafzimmer", a2);
  Room r3("Wohnzimmer", a5);
  Room r4("Esszimmer", a4);
  Room r5("Flur", a3);
  Room r6("Kueche", a6);
  Room r7("Draussen", a4);
  r1.North = &r2; r1.East = &r5;
  r2.South = &r1; r2.East = &r3;
  r3.West = &r2;  r3.South = &r5; r3.East = &r4;
  r4.West = &r3; r4.South = &r6;
  r5.West = &r1;  r5.North = &r3; r5.East = &r6; r5.South = &r7;
  r6.North = &r4; r6.West = &r5;
  string stop = r7.name;
  Room * here = &r2;
  bool done = false;
  do {
    here -> init();
    string in;
    cin >> in;
    switch (toupper(in[0])) {           // in[0] ist der erste Buchstabe der Eingabe.
      case 'N': here = here->North; break;  // toupper() konvertiert zu einem Großbuchstaben
      case 'S': here = here->South;
       if (here -> name == stop) {
         done = true;
         cout << "Tschuess!" << endl;
       }
       break;

      case 'O': here = here->East; break;
      case 'W': here = here->West; break;
      default: done = true; cout << "Tschuess!\n"; break;
    }
    here -> allowedEntries = here -> allowedEntries - 1;
    if (here -> allowedEntries < 0) {
      done = true;
      cout << "Der Spieler ist ausgeschieden :(" << endl;
    }
  } while (!done);
  return 0;
}
