#include "canvas.h"

Canvas::Canvas(const Point& center, double width, double height, int horPixels, int vertPixels)
               : _center(center), _width(width);, _height(height), _horPixels(horPixels), _vertPixels(vertPixels), _pixels(horPixels,std::vector<int> (vertPixels))
{}

Point Canvas::center() const {
  return _center;
}

double Canvas::width() const {
  return _width;
}

double Canvas::height() const {
  return _height;
}

int Canvas::horPixels() const {
  return _horPixels;
}

int Canvas::vertPixels() const {
  return _vertPixels;
}

Point Canvas::coord(int i, int j) const {
  double x = (i - _horPixels/2.)*_width / _horPixels;
  double y = (j - _vertPixels/2.)*_height / _vertPixels;
  return {x + _center.x(), y + _center.y()};
}

int Canvas::operator()(int i, int j) {
  return _pixels[i][j];
}

int& Canvas::operator()(int i, int j) {
  
}
