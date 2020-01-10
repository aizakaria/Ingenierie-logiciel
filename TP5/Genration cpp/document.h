#ifndef document_h
#define document_h

class Bibliotheque;

/*
 */
class document {

 public:
    String titre;

 public:

    /**
     * @element-type Bibliotheque
     */
    Bibliotheque *myBibliotheque;
};

#endif // document_h
