#include <iostream>
#include <string>

std::string makeSecret() {
    return "1234";
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
    std::string secret = makeSecret();
    int tries = 0;

    while(true) {
        std::string guess;
        std::cout << "\n Ваш вариант: ";
        std::cin >> guess;


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