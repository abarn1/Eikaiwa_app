#include <iostream>
int gameChoice() {
  std::string game = "";
  int choice = 0;
  std::cout << "What game would you like to play(Taboo, Anomia, Riddles, Puzzles): ";
  std::cin >> game;
  std::cout << '\n';
  if (game == "Taboo" | game == "taboo") {
    std::cout << "Let's play Taboo!" << '\n';
    choice = 1;
  } else if(game == "Anomia" | game == "anomia"){
    std::cout << "Let's play Anomia!" << '\n';
    choice = 2;
  } else if(game == "Riddles" | game == "riddles"){
    std::cout << "Let's do some Riddles!" << '\n';
    choice = 3;
  } else if(game == "Puzzles" | game == "puzzles"){
    std::cout << "Let's do some Puzzles!" << '\n';
    choice = 4;
  } else{
    std::cout << "Input not valid" << '\n';
  }
  return choice;
}




int main() {
  //std::cout << "The next thing I need to do is determine which kind of dictionary or file storage I will use to create the games.";
  //std::cout << " Then based on the dictionary I will be able to make the app. Another difficult aspect will be creating the graphical interface for the app." << '\n';

  std::cout << '\n' <<gameChoice()<< '\n';


  return 0;
}
