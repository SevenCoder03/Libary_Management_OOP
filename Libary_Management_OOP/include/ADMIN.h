#ifndef ADMIN_H
#define ADMIN_H
#include "ACCOUNT.h"

class ADMIN : public ACCOUNT
{
    private:
        string idAdmin;
    public:
        ADMIN();
        ADMIN(string, string, string);
        void setIdAdmin(string);
        string getIdAdmin();
        string getId();
        int getFormat();
        void input(string);
        void readFileAAccount(ifstream &);
        void exportFileAAccount(ofstream &);
        void changePassword(string);
        void changeUserName(string);
        ~ADMIN();
};

#endif // ADMIN_H
