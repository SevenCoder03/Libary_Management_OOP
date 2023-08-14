#ifndef USER_H
#define USER_H
#include "ACCOUNT.h"

class USER : public ACCOUNT
{
    private:
        string idUser;
    public:
        USER();
        USER(string, string, string);
        void setIdUser(string);
        string getIdUser();
        string getId();
        int getFormat();
        void input(string);
        void readFileAAccount(ifstream &);
        void exportFileAAccount(ofstream &);
        void changePassword(string _password);
        void changeUserName(string _userName);
        ~USER();
};

#endif // USER_H
