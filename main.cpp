#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>


std::string makeSecret() {
    std::string digits = "0123456789" ;

    for(int i = 0; i < 4; i++) {
        int j  =  i + rand() % (10 - i);
        std::swap(digits[i], digits[j]); 
    }

    return digits.substr(0,4);


}


bool isValidInput(const std::string& guess) {

    if(guess.size() != 4) {
        return false;
    }

    for(int i = 0; i < 4; i++) {
        if(!isdigit(guess[i])) return false;
    }

    return true;

}

void countBullsCows(const std::string& secret, const std::string& guess, int& bulls, int& cows) {


    for(int i = 0; i < 4; i++) {
        if(guess[i] == secret[i]) {
            bulls++;
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(i != j) {
                if(guess[i] == secret[j]) {
                    cows++;
                }
            }
        }
    }

}



int main() {

    srand(std::time(nullptr));
    std::string secret = makeSecret();
    int tries = 0;

    while(true) {
        std::string guess;
        std::cout << "\n Ваш вариант: ";
        std::cin >> guess;

        if(!isValidInput(guess)) {
            std::cout << "\n Ошибка ввода";
            continue;
        }
            

        int bulls = 0, cows = 0;
        countBullsCows(secret, guess, bulls, cows);
        std::cout << "Быки: " << bulls << "\nКоровы: " << cows;
        
        tries++;

        if(bulls == 4) {
            std::cout << "\nПобеда за " << tries << " ходов\n";
            break;
        }
    }


}