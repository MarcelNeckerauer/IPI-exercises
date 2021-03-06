#include <iostream>
#include <cmath>
using namespace std;

class Point2D {
private:
  double x, y;

public:
  Point2D() {
	  x = 0;
	  y = 0;
  }
  Point2D(double xNew, double yNew) {
	  x = xNew;
	  y = yNew;
  }

  void setX(double xNew) {
	  x = xNew;
  }

  void setY(double yNew) {
	  y = yNew;
  }

  double getX() const {
	  return x;
  }
  double getY() const {
	  return y;
  }

  double calcDistance(const Point2D& newPoint) const {
	  double newX = (this -> x - newPoint.getX()) * (this -> x - newPoint.getX());
	  double newY = (this -> y - newPoint.getY()) * (this -> y - newPoint.getY());
	  double tmp = newX + newY;
	  double sol = sqrt(tmp);
	  return sol;
  }
};

class Point3D : public Point2D {
private:
	double z;
public:
	Point3D() : Point2D() {
		z = 0;
	}

	Point3D(double xNew, double yNew, double zNew) : Point2D(xNew, yNew), z(zNew) { }
	void setZ (double zNew) {
		z = zNew;
	}

	double getZ() const {
		return z;
	}

	double calcDistance(const Point3D& newPoint) const {
		double newX = (this -> getX() - newPoint.getX()) * (this -> getX() - newPoint.getX());
		double newY = (this -> getY() - newPoint.getY()) * (this -> getY() - newPoint.getY());
		double newZ = (this -> z - newPoint.getZ()) * (this -> z - newPoint.getZ());
		double tmp = newX + newY + newZ;
		double sol = sqrt(tmp);
		return sol;
	}
};

int main() {
  double x1 = 2.0;
  double x2 = 5.0;
  double y1 = 3.0;
  double y2 = -3.0;
  Point2D p1 = Point2D(x1, x2);
  Point2D p2 = Point2D();
  p2.setX(y1);
  p2.setY(y2);
  cout << "(" << p1.getX() << ", " << p1.getY() << ")" << endl;
  cout << "(" << p2.getX() << ", " << p2.getY() << ")" << endl;
  cout << "Der Abstand zwischen P1 = (2/5) und P2 = (3/-3) betraegt: "
       << p1.calcDistance(p2) << endl;
  double x3 = 4.0;
  double y3 = 0.0;
  Point3D p3 = Point3D();
  p3.setX(x1);
  p3.setY(x2);
  p3.setZ(x3);
  Point3D p4 = Point3D(y1, y2, y3);
  cout << "(" << p3.getX() << ", " << p3.getY() << ", " << p3.getZ() << ")" << endl;
  cout << "(" << p4.getX() << ", " << p4.getY() << ", " << p4.getZ() << ")" << endl;
  cout << "Der Abstand der Punkte P1 = (2/5/4) und P2 = (3/-3/0) betraegt: "
       << p3.calcDistance(p4) << endl;
	return 0;
}
