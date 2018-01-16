#include <iostream>
#include <cmath>
#include "myvector.h"

MyVector::MyVector() : x(0), y(0), z(0) { }

MyVector::MyVector(float newX, float newY, float newZ): x(newX), y(newY),
							z(newZ){ }

MyVector::print() {
  std::cout << "(" << a.x << ", " << a.y << ", " << a.z << ")" << std::endl;
}

MyVector::setValues(float newX, float newY, float newZ) {
  x = newX;
  y = newY;
  z = newZ;
}

MyVector::setX (float newX) {
  x = newX;
}

MyVector::setY (float newY) {
  y = newY;
}

MyVector::setZ (float newZ) {
  z = newZ;
}

float MyVector::getX() {
  return x;
}

float MyVector::getY() {
  return y;
}

float MyVector::getZ() {
  return z;
}

float MyVector::length() {
  float a = x * x;
  float b = y * y;
  float c = z * z;
  float abc = a + b + c;
  return (float) sqrt(abc);
}

MyVector MyVector::add(const MyVector& vec) {
  float newX= x + vec.getX();
  float newY= y + vec.getY();
  float newZ = z + vec.getZ();
  MyVector sol = MyVector(newX, newY, newZ);
  return sol;
}

MyVector MyVector::subtract(const MyVector& vec) {
  float newX = x - vec.getX();
  float newY = y - vec.getY();
  float newZ = z - vec.getZ();
}

MyVector MyVector::mult(float c) {
  float newX = c * x;
  float newY = c * y;
  float newZ = c * z;
  MyVector sol = MyVector(newX, newY, newZ);
  return sol;
}

float MyVector::dot(const MyVector& vec) {
   float s1 = x * vec.getX();
   float s2 = y * vec.getY();
   float s3 = z * vec.getZ();
   float sol = s1 + s2 + s3;
   return sol;
 }

MyVector MyVector::cross(const MyVector& vec) {
   float newX = y * vec.getZ() - z * vec.getY();
   float newY = z * vec.getX() - x * vec.getZ();
   float newZ = x * vec.getY() - y * vec.getX();
   MyVector sol = MyVector(newX, newY, newZ);
   return sol;
 }

float MyVector::angle(const MyVector& vec) {
   float q1 = dot(vec);
   float p1 = length();
   float p2 = vec.length();
   float q2 = p1 * p2;
   float zs = q1 / q2;
   float sol = acos(zs);
   return sol;
}

float MyVector::area(const MyVector& vec) {
   MyVector cross = cross(vec);
   float sol = cross.length();
   return sol;
}

bool MyVector::isParalell(const MyVector& vec) {
  if ((x%vec.getX() == 0 || vec.getX() == 0) && (y%vec.getY() == 0 || vec.getY()%y == 0)
      && (z%vec.getZ() == 0 || vec.getZ()% z == 0)) {
    return true;
  }
  else {
    return false;
  }
}

bool MyVector::isOrthogonal(const MyVector& vec) {
  if (dot(vec) == 0) {
    return true;
  }
  else {
    return false;
  }
}
