#include <iostream>

int main() {
    std::string word="world";
    std::string userCorrect[5]={"-","-","-","-","-"};
    std::string userGuess="";
    int tries=0;

    while (userGuess != word){
        tries++;
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        if(userGuess==word){
            std::cout << "You won!!\n";
            std::cout << "It took you "<<tries<<" tries";
            break;
        }
        for(int i=0;i<userGuess.length();i++){
            if(userGuess[i]==word[i]){
                userCorrect[i]=userGuess[i];
            }
            else if(word.find(userGuess[i]) != std::string::npos){
                std::cout << "Letter "<<userGuess[i]<<" is somewhere else\n";
            }
        }
        //printing letters that the user got correct
            for(int i=0;i<word.length();i++){
                if(i==0){
                    std::cout << "[";
                }
                std::cout << userCorrect[i];
                if(i==word.length()-1){
                    std::cout << "]\n";
                }
            }
    }

    return 0;
}
