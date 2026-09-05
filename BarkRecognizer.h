#ifndef BARKRECOGNIZER_H_INCLUDED
#define BARKRECOGNIZER_H_INCLUDED

#include<string>
#include "DogDoor.h"

class BarkRecognizer{
private:
    DogDoor m_door;

public:
    BarkRecognizer(DogDoor door)
    :m_door{door}
    {}
    void recognize(Bark bark);
};

#endif // BARKRECOGNIZER_H_INCLUDED
