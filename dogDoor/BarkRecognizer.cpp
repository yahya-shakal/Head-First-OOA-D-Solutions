#include<iostream>


#include "BarkRecognizer.h"

void BarkRecognizer::recognize(Bark bark){
    std::vector<Bark> allowedBarks{m_door.getAllowedBarks()};
    for(auto candidate:allowedBarks){
        if(bark.equals(candidate)){

            std::cout << "\nBarkRecoginzer: Heard a \"" << candidate.getSound() << "\"";
            m_door.open();
            return;
        }
    }
    std::cout << "\nBarkRecoginzer: Heard a \"" << bark.getSound() << "\"";
    std::cout << "\nthis dog is not allowed!";
    return;
}
