#ifndef REMOTE_H_INCLUDED
#define REMOTE_H_INCLUDED

#include "DogDoor.h"

class Remote{
private:
    DogDoor m_door;

public:
    Remote(DogDoor door){m_door = door;}
    void pressButton();
};

#endif // REMOTE_H_INCLUDED
