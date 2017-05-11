#ifndef LINK_H
#define LINK_H
#include <string>

using namespace std;

class link {
    private:
        string* value;
        link* next;
    public:
        link(string* value, link* next);
        link* getNext();
        string* getString();
        void printAll();
        ~link();
};

#endif
