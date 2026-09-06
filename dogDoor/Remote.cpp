#include<iostream>
#include <thread>
#include <chrono>

#include "Remote.h"

void Remote::pressButton(){
    if(m_door.isOpen()){
        std::cout << "Closing the door...\n";
        m_door.close();
    }
    else{
        std::cout << "Opening the door...\n";
        m_door.open();

        std::cout << "Time passes...\n";

        if(m_door.isOpen()){
            std::cout << "Closing the door...\n";
            m_door.close();
        }
    }
}
