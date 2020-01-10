#ifndef Emprunt_h
#define Emprunt_h

#include "date.h"

class livre;

class Emprunt {

 public:

    virtual void prolongerDate();

 public:
    date dateUmprunt;
    date dateRetour;

 public:

    /**
     * @element-type livre
     */
    livre *mylivre;
};

#endif // Emprunt_h
