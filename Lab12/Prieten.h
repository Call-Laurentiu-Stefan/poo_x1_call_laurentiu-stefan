#ifndef _PRIETEN_H
#define _PRIETEN_H


#include <string>
using namespace std;
#include "Contact.h"

class Prieten : public Contact {
  private:
    string dateOfBirth;

    int phoneNr;

    string adress;

};
#endif
