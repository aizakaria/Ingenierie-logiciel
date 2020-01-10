#ifndef journal_h
#define journal_h

#include "date.h"
#include "document.h"


class journal : public document {

 public:
    date date_parution;
};

#endif // journal_h
