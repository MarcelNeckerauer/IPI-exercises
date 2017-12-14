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
	  double newX = (this -> x + newPoint.getX()) * (this -> x + newPoint.getX());
	  double newY = (this -> y + newPoint.getY()) * (this -> y + newPoint.getY());
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
		double newX = (this -> getX() + newPoint.getX()) * (this -> getX() + newPoint.getX());
		double newY = (this -> getY() + newPoint.getY()) * (this -> getY() + newPoint.getY());
		double newZ = (this -> z + newPoint.getZ()) * (this -> z + newPoint.getZ());
		double tmp = newX + newY + newZ;
		double sol = sqrt(tmp);
		return sol;
	}
};

int main() {

	return 0;
}
