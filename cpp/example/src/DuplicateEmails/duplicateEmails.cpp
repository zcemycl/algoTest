#include "duplicateEmails.h"

static int callback(void *d, int argc, char **argv, char **azColName){
    int i;
    string *data = (string*)d;
    for(i = 0; i<argc; i++){
        printf("%s = %s\n",azColName[i],argv[i]?argv[i]:"NULL");
        *data = argv[i];
    }
    printf("\n");
    return 0;
}


string duplicateEmails::naive(){
    sqlite3* DB;
    int exit = 0;
    char *sql;
    exit = sqlite3_open(":memory:", &DB);
    string createStr = "CREATE TABLE Person ("
        "id INT PRIMARY KEY NOT NULL,"
        "email TEXT NOT NULL);";
    string getStr = "SELECT email as Email FROM Person GROUP BY "
        "email HAVING COUNT(email)>1;";
    char *zErrMsg = 0;
    int rc;
    string data = "";
  
    if (exit) {
        cerr << "Error open DB " << sqlite3_errmsg(DB) << endl;
        return "error";
    }
    else
        cout << "Opened Database Successfully!" << endl;
        sqlite3_exec(DB,createStr.c_str(),nullptr,nullptr,nullptr);
        sqlite3_exec(DB,"INSERT INTO Person VALUES (1,'a@b.com')",nullptr,nullptr,nullptr);
        sqlite3_exec(DB,"INSERT INTO Person VALUES (2,'c@d.com')",nullptr,nullptr,nullptr);
        sqlite3_exec(DB,"INSERT INTO Person VALUES (3,'a@b.com')",nullptr,nullptr,nullptr);
        rc = sqlite3_exec(DB,getStr.c_str(),callback,&data,&zErrMsg);
    sqlite3_close(DB);
    return data;
}
