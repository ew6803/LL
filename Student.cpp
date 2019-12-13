//Student Class File

#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

Student::Student(const char* sName, int sID, float sGPA) {
  strcpy(name, sName);
  ID = sID;
  GPA = sGPA; 
 
}

Student::~Student() {
  delete name; 
}

char* Student::getName() {
  return name;
}

int Student::getID() {
  return ID;
}

float Student::getGPA() {
  return GPA; 
}

