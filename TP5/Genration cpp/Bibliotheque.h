#ifndef Bibliotheque_h
#define Bibliotheque_h

#include <vector>


class ;
class Adherent;
class document;

class Bibliotheque {

 public:

    virtual void ajouterAdherent();

    virtual void enleverAdherent();

    virtual void ajouterDocument();

 public:

    /**
     * @element-type 
     */
     *my;

    /**
     * @element-type Adherent
     */
    Adherent *myAdherent;


    /**
     * @element-type Adherent
     */
    Adherent *myAdherent;

    /**
     * @element-type Adherent
     */
    std::vector< Adherent* > myAdherent;

    /**
     * @element-type document
     */
    document *1.*;
};

#endif // Bibliotheque_h
