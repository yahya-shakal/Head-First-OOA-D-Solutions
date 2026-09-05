#include <iostream>
#include "DogDoor.h"
#include "Remote.h"
#include "BarkRecognizer.h"


int main() {

    DogDoor door = DogDoor();
    door.addAllowedBark(Bark("rowlf"));
    door.addAllowedBark(Bark("rooowlf"));
    door.addAllowedBark(Bark("rawlf"));
    door.addAllowedBark(Bark("woof"));
    BarkRecognizer recognizer = BarkRecognizer(door);
    Remote remote = Remote(door);
    // Simulate the hardware hearing a bark
    std::cout << "Bruce starts barking.";
    recognizer.recognize(Bark("rowlf"));
    std::cout<< "\nBruce has gone outside...";

    std::cout<< "\nBruce's all done...";
    std::cout<< "\n...but he's stuck outside!";

    // Simulate the hardware hearing a bark (not Bruce!)
    Bark smallDogBark = Bark("yip");
    std::cout<< "\nA small dog starts barking.";
    recognizer.recognize(smallDogBark);

    // Simulate the hardware hearing a bark again
    std::cout<< "\nBruce starts barking.";
    recognizer.recognize(Bark("rooowlf"));
    std::cout<< "\nBruce's back inside...";

    return 0;
}
