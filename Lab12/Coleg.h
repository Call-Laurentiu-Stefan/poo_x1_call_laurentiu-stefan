#ifndef _COLEG_H
#define _COLEG_H


#include <string>
using namespace std;
#include "Contact.h"

class Coleg : public Contact {
  private:
    int phoneNr;

    string company;

    string adress;

};
#endif
