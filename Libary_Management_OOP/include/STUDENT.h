#ifndef STUDENT_H
#define STUDENT_H
#include "READER.h"
#include <vector>

class STUDENT : public READER
{
    private:
        string classOfStudent;
    public:
    STUDENT();
    STUDENT(string, int, string, string, string, DATE, string, string, DATE, DATE, string);
    void setClassOfStudent(string);
    string getClassOfStudent();
    void input();
    void output();
    void outputSetw();
    void edit();
    void readFileAReader (ifstream &inFile);
    void exportFileAReader (ofstream &outFile);
    ~STUDENT();
};

#endif // STUDENT_H
