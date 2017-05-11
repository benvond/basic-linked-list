#include <iostream>
#include <string>
#include "link.h"

using namespace std;

int main() {

    link * head = NULL;
    string value;

    while(cin >> value) {
        head = new link(new string(value), head) ;
    }

    head->printAll();

    while(head != NULL) {
	link * temp = head->getNext();
	delete head;
	head = temp;
    }

    return 42;
}
    
