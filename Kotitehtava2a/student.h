#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
private:
    string name;            // muuttuja opiskelijan nimeä varten
    int studentNumber;      // muuttuja opiskelijan opiskelijanroa varten
    double average;   // muuttuja opiskelijan keskiarvoa varten.
public:
    Student();                                      // muodostin
    ~Student();                                     // tuhoaja
    string getName() const;                         // Getter opiskelijan nimelle
    void setName(const string &newName);            // Setter opiskelijan nimelle
    int getStudentNumber() const;                   // Getter opiskelijan opiskelijanumerolle
    void setStudentNumber(int newStudentNumber);    // Setter opiskelijan opiskelijanumerolle
    double getAverage() const;                      // Getter opiskelijan keskiarvolle
    void setAverage(double newAverage);             // Setter opiskelijan keskiarvolle
};

#endif // STUDENT_H
