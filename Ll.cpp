// This program is the first part of a Linked List, which is Essentialy performs the same functions as the Student List Program, this incomplete version allows you to add students to a database and exit
// Ethan Wang
// 12/12/19
#include <iostream>
#include "Student.h"
#include "Node.h"
#include <iomanip>


using namespace std;

Node* start = NULL;

void ADD(char* Name, int ID, float GPA);
void PRINT(Node* nextNode);

//Runner and UI, Function Caller
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
      cout << "GPA: \n";
      cin >> GPA;
      cin.clear();
      cin.ignore(9999, '\n');
      ADD(sName, ID, GPA);
      cout << "Students \n";
      PRINT(start);
    }
    else if (strcmp(input, "EXIT") == 0) {
      continueList = false; 
    }
    else {
      cout << "Valid Input Plz \n"; 
    }
    

  }

}

//Add Students Function
void ADD(char* Name, int ID, float GPA) {
  Student* aStudent = NULL;
  Student* aNotherStudent = NULL;
  Student* newStudent = new Student(Name, ID, GPA);
  Node* current = start;
  if(current == NULL) {
    start = new Node(aStudent);
    start->setStudent(newStudent);
  }
  else{
    while(current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node(aNotherStudent));
    current->getNext()->setStudent(newStudent);
  }
}

//Print Students Function 
void PRINT(Node* nextNode) {
  if (nextNode != NULL) {
    cout << "Name: " << nextNode->getStudent()->getName() << endl; 
    cout << "ID: " << nextNode->getStudent()->getID() << endl; 
    cout << "GPA: " << fixed << setprecision(2) << nextNode->getStudent()->getGPA() << endl;
    PRINT(nextNode->getNext()); 
  }
}
