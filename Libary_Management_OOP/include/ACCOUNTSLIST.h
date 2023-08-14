#ifndef ACCOUNTSLIST_H
#define ACCOUNTSLIST_H
#include "ACCOUNT.h"
#include "ADMIN.h"
#include "USER.h"
#include <vector>

class ACCOUNTSLIST
{
    private:
         vector<ACCOUNT*> accountsList;
    public:
        ACCOUNTSLIST();
        void setAccountsList(vector<ACCOUNT*>);
        vector<ACCOUNT*> getAccountsList();
        void inputAAcount(string);
        bool checkDuplicatedUsername(string);
        void readFile();
        void exportFile();
        int checkAccount (string username, string password);
        void deleteAccount (string);
        ~ACCOUNTSLIST();
};

#endif // ACCOUNTSLIST_H
