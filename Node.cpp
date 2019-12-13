// Node Class File

#include "Node.h"
#include "Student.h"
#include <iostream>

using namespace std;

Node::Node() {
  student = NULL;
  nextNode = NULL;
}

Node::~Node() {
  delete &student;
  nextNode = NULL;
}

void Node::setStudent(Student* newStudent) {
  student = newStudent;
}

void Node::setNext(Node* NextNextNode) {
  nextNode = NextNextNode;
}

Node* Node::getNext() {
  return nextNode;
}

Student* Node::getStudent() {
  return student;
}

