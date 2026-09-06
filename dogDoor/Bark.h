#ifndef BARK_H_INCLUDED
#define BARK_H_INCLUDED

#include<string>

class Bark{
private:
    std::string m_sound{};

public:
    Bark(std::string sound):m_sound{sound}
    {}
    inline std::string getSound(){return m_sound;}
    inline bool equals(Bark bark){
        return m_sound == bark.getSound();
    }
};

#endif // BARK_H_INCLUDED
