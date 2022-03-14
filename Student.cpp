#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, const char *nName) {
  studentId = id;
  strcpy(name, nName);
  
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID : " << studentId << endl;
  cout << "Name : " << name << endl;
}
