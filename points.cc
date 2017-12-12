#include <iostream>
#include <cmath>
using namespace std;

class Point2D {
private:
  double x, y;
  
public:
  Point2D();
  Point2D(double xNew, double yNew);

  void setX(double xNew);
  void setY(double yNew);

  double getX() const;
  double getY() const;

  double calcDistance(const Point2D& newPoint) const;
};

int main() {
	
	return 0;
}
