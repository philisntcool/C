#include <iostream>

int main(){

    bool option11 = false;
    bool option12 = false;

    std::cout << "this program was created by philisntcool.\n";

    std::cout << "hi! welcome to my game thing. so basically youre this guy, right, youre in your house. what do you do?\n";
    
    std::cout << "1. go to the kitchen, get a snack.\n";
    std::cout << "2. go outside, its a beautiful day out.\n";
    std::cout << "3. go shoot yourself in the head with a .357 magnum revovler.\n";

    switch (std::cin.get()) {
        case '1':
            std::cout << "you get a snack and go back to your couch to eat it. i wonder whats on tv?\n";
            option11 = true;
            break;
        case '2':
            std::cout << "you go outside, its a beautiful day out. oh hey look a plane! wait why is it heading for the northern tower?\n";
            option12 = true;
            break;
        case '3':
            std::cout << "you shoot yourself in the head with a .357 magnum revovler. youre dead.\n";
    }

    if(option11 == true) {
        std::cout << "you turn on the tv and begin watching spongebob, suddenly the broadcast is interrupted and the news comes out. 9/11 just happened. what do you do?\n";
        std::cout << "1. ignore it and start playing half life on your computer\n";
        std::cout << "2. go outside and see if you can help anyone.\n";
        std::cout << "3. keep watching, this might go somewhere.\n";
        switch (std::cin.get()){
            case '1':
                std::cout << "'damn well that sucks.' you say, you then go to your computer and begin playing half life. eventually you get to that one really annoying part with the vortigaunts in the hallways and you quit. the end.\n";
                break;
            case '2':
                std::cout << "'okay fine,' you mutter, 'ill go help people.' you go outside and see george bush crying like a sissy bitch in a corner. you call him a mean word then he kills you. the end!\n";
                break;
            case '3':
                std::cout << "you decide to keep watching the news. it gets boring and you eventually fall asleep. in the wake of the night theres a rustling in the bushes. you wake up for a stint then its all black. some dude came and shot you for NO VALID REASON. okay the end.\n";
                break;
        }
    }
    else if(option12 == true) {
        std::cout << "okay so 9/11 just happened. that was a close one! what should you do?\n";
        std::cout << "1. dont give a fuck.\n";
        std::cout << "2. go back inside, you honestly couldnt care less.\n";
        std::cout << "3. go look at what happened.\n";
        switch(std::cin.get()){
            case '1':
                std::cout << "'damn well that sucks.' you say to yourself. the end.\n";
                break;
            case '2':
                std::cout << "you go back inside. you honestly couldnt care less. the end.\n";
                break;
            case '3':
                std::cout << "you go out and stare at the people. theyre all really ugly and covered with ash and dust. not your problem you think to yourself. the end.\n";
                break;
        }
    }
}