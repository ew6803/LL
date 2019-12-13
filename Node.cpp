// Node
#include "Node.h"
#include "Student.h"
#include <iostream>

using namespace std;

Node::Node() {
  student = NULL;
  next = NULL;
}

Node::~Node() {
  delete &student;
  next = NULL;
}

Student* Node::getStudent() {
  return student;
}
Node* Node::getNext() {
  return next; 
}

void Node::setNext(Node* newNext) {
  next = newNext;
}

void Node::setStudent(Student* newStudent) {
  student = newStudent; 
}
