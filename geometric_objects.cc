#include <iostream>

const double PI = 3.14159; //initialisiert die Konstante Pi im globalen Raum

//a)
double circumference_rectangle(double a, double b) {
  double c = 2 * a +  2 * b;
  return c;
}

double area_rectangle(double a, double b) {
  double c = a * b;
  return c;
}

double circumference_square(double a) {
  double c = 4 * a;
  return c;
}

double area_square(double a) {
  double b = a * a;
  return b;
}

double circumference_circle(double r) {
  double b = 2 * PI * r;
  return b;
}

double area_circle(double r) {
  double b = PI * r * r;
  return b;
}

//b)
double surface_area_cuboid(double a, double b, double c) {
  double d = 2 * a * b + 2 * a * c + 2 * b * c;
  return d;
}

double volume_cuboid(double a, double b, double c) {
  double d = a * b * c;
  return d;
}

double surface_area_cube(double a) {
  double b = 6 * a * a;
  return b;
}

double volume_cube(double a) {
  double b = a * a * a;
  return b;
}

double surface_area_sphere(double r){
  double b = 4 * PI * r * r;
  return b;
}

double volume_sphere(double r){
  double b = 4/3 * PI * r * r * r;
  return b;
}

//c)
int main(){
  double a,b,c;
  int s,r;
  std::cout << "Geben Sie eine Dimension ein: ";
  std::cin >> s;
  if(s == 2) {
    std::cout << "Welches Objekt moechten Sie betrachten?" << std::endl
	      << "0 - Rechteck" << std::endl
	      << "1 - Quadrat" << std::endl
	      << "2 - Kreis" << std::endl;
    std::cin >> r;
    switch(r){
    case 0: 
      std::cout << "Geben Sie die Seitenlaengen des Rechtecks ein: " << std::endl;
      std::cin >> a;
      std::cin >> b;
      std::cout << "Das Rechteck hat einen Umfang von " << circumference_rectangle(a, b)
      	        << " und eine Flaeche von " << area_rectangle(a, b) << std::endl;
      break;
    case 1:
      std::cout << "Geben Sie die Seitenlaenge des Quadrates ein: " << std::endl;
      std:: cin >> a;
      std::cout << "Der Würfel hat einen Umfang von " << circumference_square(a)
		<< " und eine Flaeche von " << area_square(a) << std::endl;
      break;
    case 2:
      std::cout << "Geben Sie den Radius des Kreises ein: " << std::endl;
      std::cin >> a;
      std::cout << "Der Kreis hat einen Umfang von " << circumference_circle(a)
	        << " und eine Flaeche von " << area_circle(a) << std::endl;
      break;
    default:
      std::cerr << "Du willst also gar nichts tun? Wie langweilig.";
      break;
    }
  }
  else if (s == 3) {
     std::cout << "Welches Objekt moechten Sie betrachten?" << std::endl
	       << "0 - Quader" << std::endl
	       << "1 - Wuerfel" << std::endl
               << "2 - Kugel" << std::endl;
     std::cin >> r;
     switch(r){
     case 0:
       std::cout << "Geben Sie die Kantenlaengen des Quaders ein:" << std::endl;
       std::cin >> a;
       std::cin >> b;
       std::cin >> c;
       std::cout << "Der Quader hat einen Oberflaecheninhalt von " << surface_area_cuboid(a, b, c)
		 << " und ein Volumen von " << volume_cuboid(a, b, c);
       break;
     case 1:
       std::cout << "Geben Sie die Kantenlaenge des Wuerfels ein:" << std::endl;
       std::cin >> a;
       std::cout << "Der Wuerfel hat einen Oberflaecheninhalt von " << surface_area_cube(a)
		 << " und ein Volumen von " << volume_cube(a);
       break;
     case 2:
       std::cout << "Geben Sie den Radius der Kugel ein:" << std::endl;
       std::cin >> a;
       std::cout << "Die Kugel hat einen Oberflaecheninhalt von " << surface_area_sphere(a)
		 << " und ein Volumen von " << volume_sphere(a);
       break;
     default:
       std::cerr << "Was soll ich damit?" << std::endl;
       break;
     }
  }
  else {
    std::cerr << "Was ist das denn fuer eine Dimension?" << std::endl;
  }
  return 0;
}


