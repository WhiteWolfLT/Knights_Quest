// KQ_Main_code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <time.h>

#include "Interface.h"
#include "Dungeon_room.h"
#include "Enemy.h"

using namespace std;


int main()
{
    /*
    difficulty translation
    easy = 1
    medium = 2
    hard = 3
    */
    int difficulty = 2, number_of_rooms;
    string player_input;
    vector<Dungeon_room> rooms;

    //srand(time(0));
    //picks a number between 9 and 6
   // number_of_rooms = std::rand() % 9 + 6;
   // for (int i = 0; i < number_of_rooms; i++)
   // {
        Dungeon_room generated_room(difficulty);
    //    rooms.push_back(generated_room);
    //}
    //Game_Logic Game;
    //int temp = std::rand() % 3 + 1;
    //std::cout << std::endl << temp << std::endl;
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
