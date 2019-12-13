#include <iostream>
#include "Student.h"
#include "Node.h"
#include <iomanip>


using namespace std;

Node* start = NULL;

void ADD(char* Name, int ID, float GPA);
void PRINT(Node* next);

int main () {
  bool continueList = true;
  while(continueList == true) {
    char* input = new char[100];
    char* sName = new char[100];
    int ID = 0;
    float GPA = 0;
    cout << "Hello, Welcome to StudentList, Because it isn't finished, you can only ADD or EXIT \n";
    cin.getline(input, 100);
    if (strcmp(input, "ADD") == 0) {
      cout << "Name: \n";
      cin.getline(sName, 100);
      cout << "ID: \n";
      cin >> ID;
      cin.clear();
      cin.ignore(9999, '\n');
      cout << "GPA \n";
      cin >> GPA;
      cin.clear();
      cin.ignore(9999, '\n');
      cout << "Before?";
      //ADD(sName, ID, GPA);
      cout << "Added"; 
      PRINT(start);
    }
    else if (strcmp(input, "EXIT") == 0) {
      continueList = false; 
    }
    else {
      cout << "Valid Input Plz \n"; 
    }
    

  }

  return 0;
}


void ADD(char* Name, int ID, float GPA) {
  Student* newStudent = new Student(Name, ID, GPA);
  Node* current = start;
  if(current = NULL) {
    start = new Node();
    start ->setStudent(newStudent); 
  }
  else {
    while(current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setStudent(newStudent); 
  }
}

void PRINT(Node* next) {
  if(next == start) {
    cout << "Students \n";
  }
  if (next != NULL) {
    cout << "Name: " << next->getStudent()->getName() << endl; 
    cout << "ID: " << next->getStudent()->getID() << endl; 
    cout << "GPA: " << fixed << setprecision(2) << next->getStudent()->getGPA() << endl;
    PRINT(next->getNext()); 
  }
}
