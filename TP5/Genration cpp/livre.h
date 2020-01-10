#ifndef livre_h
#define livre_h

#include "volume.h"

class Adherent;
class Emprunt;

class livre : public volume {

 public:

    virtual void empruntable();

 public:
    Boolean diponible;

 public:

    Adherent ** myAdherent;

    /**
     * @element-type Emprunt
     */
    Emprunt *myEmprunt;
};

#endif // livre_h
