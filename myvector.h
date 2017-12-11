class MyVector
{
private:
  float x,y,z;
  
public:
  // Konstruktoren und Dekonstruktor
  MyVector();
  MyVector(float, float, float);
  ~MyVector();
  
  // Methoden der Klasse
  void print();
  
  void setValues(float, float, float);
  void setX(float);
  void setY(float);
  void setZ(float);
  
  float getX();
  float getY();
  float getZ();
  
  float length() const;
  
  MyVector add(const MyVector&);
  MyVector subtract(const MyVector&);
  
  MyVector mult(float);
  float dot(const MyVector&);
  MyVector cross(const MyVector&);
  
  float angle(const MyVector&);
  float area(const MyVector&);
  
  bool isOrthogonal(const MyVector&);
  bool isParallel(const MyVector&);
};
