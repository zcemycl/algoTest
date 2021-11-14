#include "duplicateEmails.h"

string duplicateEmails::naive(){
    sqlite3* DB;
    int exit = 0;
    exit = sqlite3_open(":memory:", &DB);
    if (exit) {
        cerr << "Error open DB " << sqlite3_errmsg(DB) << endl;
        return "error";
    }
    else
        cout << "Opened Database Successfully!" << endl;
    sqlite3_close(DB);
    return "abc";
}
