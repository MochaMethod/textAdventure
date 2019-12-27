#include "player.cpp"
#include "map.cpp"
#include "tools.cpp"

int main()
{
   Player player("Bryce", 10);
   Map map;

   std::vector<std::vector<char>> level1 = map.createMap(10, 10);
   map.printMap(level1);

   /*
   General usage of the dialogue function:
   std::vector<std::string> answers = {"Yes", "YEah", "no", "maybe", "I don't know"};
   std::string answer = dialogue(answers, "Can you repeat the question? ");
   std::cout << "Your chosen answer was: " << answer << "\n";
   */

   return 0;
}