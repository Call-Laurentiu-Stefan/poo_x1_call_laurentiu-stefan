#ifndef _AGENDA_H
#define _AGENDA_H


#include <string>
using namespace std;

class Prieten;
class Contact;

class Agenda {
  public:
    void findByName(string name,  & );

    int listOfFriends(Prieten & friends);

    void deleteContact(const String & name);

    void addContact(const Contact & contact);


  private:
    <Contact *> contact;

};
#endif
