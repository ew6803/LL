// Node.h
#ifndef NODE_H
#define NODE_H
#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

class Node {
 public:
  Node();
  ~Node();
  void setStudent(Student*);
  void setNext(Node* newNext);
  Student* getStudent();
  Node* getNext();
 private:
  Student* student;
  Node* next;

};

#endif
