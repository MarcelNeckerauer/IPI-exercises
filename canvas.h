#ifndef CANVAS_H
#define CANVAS_H

#include <vector>

#include "point.h"
#include "pgm.h"

class canvas {
private:
  const Point _center;
  const double _width;
  const double _height;
  const int _horPixels;
  const int _vertPixels;
  std::vector<std::vector<int> > _pixels;

public:
  Canvas(const Point&, double, double, int, int);

  Point center() const;
  double width() const;
  double height() const;
  int horPixels() const;
  int vertPixels() const;

  Point coord(int, int) const;

  int operator()(int, int);
  int& operator()(int, int);

  void write(const std::string&) const;
};

#endif
