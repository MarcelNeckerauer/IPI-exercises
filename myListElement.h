#ifndef MY_LIST_ELEMENT_H
#define MY_LIST_ELEMENT_H

template <typedef T>

class MyListElement {
private:
  T element;
  MyListElement* predecessor = this;
  MyListElement* successor = this;
public:
  MyListElement();
  MyListElement(T , MyListElement , MyListElement);
  T getElement() const;
  MyListElement* getPredecessor() const;
  MyListElement* getSuccessor() const;
  void setElement(T);
  void getPredecessor(MyListElement* p);
  void setSuccessor(MyListElement* s);
};

#endif
