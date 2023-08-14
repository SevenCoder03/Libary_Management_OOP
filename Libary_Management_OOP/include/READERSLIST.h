#pragma once
#include <iostream>
#include <vector>
#include "READER.h"
#include "STUDENT.h"
#include "TEACHER.h"
#include "FUNCTIONPUBLIC.h"
#include "ACCOUNTSLIST.h"
//#include "BORROW_RETURNSLIST.h"
#include <sstream>
#include <string.h>
using namespace std;

class READERSLIST
{
    private:
        vector<READER*> readersList;
    public:
        READERSLIST();
        void setReadersList(vector<READER*>);
        vector<READER*> getReadersList();
        void input(ACCOUNTSLIST &);
        void output();
        void outputStudent();
        void outputTeacher();
        void outputAllReaders();
        bool checkDuplicatedIdReader(string);
        bool checkDuplicatedPersonalId(string);
        int findReaderById(string);
        void findReaderByName(string);
        void changeReaderInformation(string);
        void deleteReaderById(string);
        void sortReadersListById();
        void sortReadersListByLastName();
        bool checkCardExpiry(string);
        void extendCard(string);
        void readFile();
        void exportFile();
        ~READERSLIST();
};
