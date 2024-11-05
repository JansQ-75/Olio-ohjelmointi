#include "student.h"

// Getter opiskelijan nimelle
string Student::getName() const
{
    return name;
}

// Setter opiskelijan nimelle
void Student::setName(const string &newName)
{
    name = newName;
}

//  Getter opiskelijan opiskelijanumerolle
int Student::getStudentNumber() const
{
    return studentNumber;
}

//  Setter opiskelijan opiskelijanumerolle
void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

// Getter opiskelijan keskiarvolle
double Student::getAverage() const
{
    return average;
}

// Setter opiskelijan keskiarvolle
void Student::setAverage(double newAverage)
{
    average = newAverage;
}

// Muodostin oliolle Student
Student::Student() {}

//  Olion tuhoaja
Student::~Student()
{

}
