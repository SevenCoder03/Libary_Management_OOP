#ifndef TEACHER_H
#define TEACHER_H
#include "READER.h"

class TEACHER : public READER
{
    private:
        string facility;
    public:
    TEACHER();
    TEACHER(string, int, string, string, string, DATE, string, string, DATE, DATE, string);
    void setFacility(string);
    string getFacility();
    void input();
    void output();
    void outputSetw();
    void edit();
    void readFileAReader (ifstream &inFile);
    void exportFileAReader (ofstream &outFile);
    ~TEACHER();
};

#endif // TEACHER_H
