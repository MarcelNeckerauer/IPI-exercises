#include "myListElement.h"

MyListElement::MyListElement() : element(0), predecessor(this), successor(this) { }

MyListElement::MyListElement(T e, MyListElement* p, MyListElement* s) : element(e),
                                                                           predecessor(p),
                                                                           successor(s)
                                                                           { }

T MyListElement::getElement() const {
  return element;
}

MyListElement* MyListElement::getPredecessor() const {
  return predecessor;
}

MyListElement* MyListElement::getSuccessor() const {
  return successor;
}

MyListElement::setElement(T e) {
  element = e;
}

MyListElement::setPredecessor(MyListElement* p) {
  predecessor = p;
}

MyListElement::setSuccessor(MyListElement* s) {
  successor = s;
}
