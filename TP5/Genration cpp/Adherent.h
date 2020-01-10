#ifndef Adherent_h
#define Adherent_h

#include <vector>


class Bibliotheque;
class livre;

class Adherent {

 public:

    virtual void umprunterLivre();

    virtual void rendreLivre();

    virtual void newOperation();

    virtual void newOperation();

 public:
    String nom;
    String prenom;

 public:

    /**
     * @element-type Bibliotheque
     */
    Bibliotheque *myBibliotheque;

    /**
     * @element-type Bibliotheque
     */
    Bibliotheque *myBibliotheque;

    /**
     * @element-type Bibliotheque
     */
    Bibliotheque *myBibliotheque;

    /**
     * @element-type Bibliotheque
     */
    Bibliotheque *myBibliotheque;

    /**
     * @element-type livre
     */
    std::vector< livre* > mylivre;
};

#endif // Adherent_h
