#include <iostream>
#include <string>
#include "link.h"

using namespace std;

link::link(string *v, link *n) : value(v), next(n) {}

link* link::getNext() {
    return next;
}

string* link::getString() {
    return value;
}

void link::printAll() {
    cout << *value << endl;
    if (next != NULL) {
        next->printAll();
    }
} 

link::~link() {
    delete value;
} 
