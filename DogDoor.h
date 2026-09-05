#ifndef DOGDOOR_H_INCLUDED
#define DOGDOOR_H_INCLUDED

#include<vector>
#include"Bark.h"

class DogDoor{
private:
    bool m_open{};
    std::vector<Bark>AllowedBarks{};

public:
    DogDoor(){}

    inline void addAllowedBark(Bark bark){AllowedBarks.push_back(bark);}
    inline std::vector<Bark> getAllowedBarks(){return AllowedBarks;}
    inline bool isOpen(){return m_open;}
    inline void open(){
        std::cout << "\nOpening the door...";
        m_open = true;

        std::cout << "\nTime passes...";

        if(isOpen()){
            std::cout << "\nClosing the door...";
            close();
        }
    }
    inline void close(){m_open=false;}
};


#endif // DOGDOOR_H_INCLUDED
