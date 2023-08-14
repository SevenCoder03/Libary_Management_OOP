#pragma once
#include <iostream>
#include <cstring>
#include "DATE.h"
#include <vector>
#include <conio.h>
using namespace std;

class READER {
    protected:
        string idReader;
        int gender;
        string personalId;
        string firstName;
        string lastName;
        DATE dayOfBirth;
        string phoneNumber;
        string email;
        DATE cardIssuing;
        DATE cardExpiry;
    public:
        READER();
        READER(string, int, string, string, string, DATE, string, string, DATE, DATE);
        void setIdReader(string);
        string getIdReader();
        void setGender(int);
        int getGender();
        void setPersonalId(string);
        string getPersonalId();
        void setFirstName(string);
        string getFirstName();
        void setLastName(string);
        string getLastName();
        void setDayOfBirth(DATE);
        DATE getDayOfBirth();
        void setPhoneNumber(string);
        string getPhoneNumber();
        void setEmail(string);
        string getEmail();
        void setCardIssuing(DATE);
        DATE getCardIssuing();
        void setCardExpiry(DATE);
        DATE getCardExpiry();
        virtual void edit() = 0;
        virtual void input() = 0;
        virtual void output() = 0;
        virtual void outputSetw() = 0;
        virtual void readFileAReader(ifstream &) = 0;
        virtual void exportFileAReader(ofstream &) = 0;
        ~READER();
};
