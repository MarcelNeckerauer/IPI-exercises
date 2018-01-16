#include <ostream>
#include <cmath>
#include "myvector.h"

using namespace std;

int main() {
  float x1 = 5.0f;
  float y1 = 0.0f;
  float z1 = 2.0f;
  float x2 = 3.0f;
  float y2 = 1.0f;
  float z2 = 4.0f;
  float x3 = 5.0f;
  float y3 = 3.0f;
  float z3 = 5.0f;

  //Aufgabenteil b)
  MyVector a = MyVector(x1, y1, z1);
  MyVector b = MyVector();
  b.setValues(x2, y2, z2);
  MyVector c = MyVector(x3, y3, z3);
  a.print();
  b.print();
  c.print();

  //Aufgabenteil c)
  MyVector ab = a.subtract(b);
  MyVector bc = b.subtract(c);
  MyVector ca = c.subtract(a);
  if(ab.isOrthogonal(bc)) {
    cout << "Das Dreieck besitzt bei Punkt B einen rechten Winkel." << endl;
  }
  else if(bc.isOrthogonal(ca)) {
    cout << "Das Dreieck besitzt bei Punkt C einen rechten Winkel." << endl;
  }
  else if(ca.isOrthogonal(ab)) {
    cout << "Das Dreieck besitzt bei Punkt A einen rechten Winkel." << endl;
  }
  else {
    cout << "Das Dreieck besitzt keinen rechten Winkel." << endl;
  

  /*Aufgabenteil d)
  if (ab.isOrthogonal(bc) == true) {
    if (ab.length() == bc.length()) {
      std::cout << "Das Dreieck ist bei Punkt B gleichschenklig." << std::cout;
    }
    else {
      std::cout << "Das Dreieck ist nicht gleichschenklig." << std::endl;
    }
  }
  else if(bc.isOrthogonal(ca) == true) {
    if(bc.length() == ca.length()) {
      std::cout << "Das Dreieck ist bei Punkt C gleichschenklig." << std::endl;
    }
    else {
      std::cout << "Das Dreieck ist nicht gleichschenklig." << std::endl;
    }
  }
  else if(ca.isOrthogonal(ab) == true) {
    if(ca.length == ab.length()) {
  */
  return 0;
}
