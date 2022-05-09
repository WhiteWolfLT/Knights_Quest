#include <iostream>
#include <iomanip>
#include <vector>
#include <time.h>

#include "Interface.h"
#include "Dungeon_room.h"

using namespace std;

int main()
{

    cout << endl << "  K N I G H T ' S   Q U E S T" << endl << endl;
    system("pause");
    system("cls");
    cout << endl << "You are a Knight of the realm, you serve the Queen." << endl << endl;
    cout << endl << "You are on a quest to find the rose of ice to prove your worth." << endl << endl;
    cout << endl << "You are blessed by the Queen, she wishes for you to succeed" << endl << endl;
    system("pause");
    system("cls");


    /*
    difficulty translation
    easy = 1
    medium = 2
    hard = 3
    */

    int battleship = 0;
    int difficulty = 2, number_of_rooms = 3, current_room = 0, display = 0;
    string player_input;
    int item;
    vector<Dungeon_room> rooms;
    Hero Knight;

    //Creates a seed based on time for random number generation, time is from the time.h library
    srand(time(0));

    //picks a number between 5 and 3
    number_of_rooms = std::rand() % 5 + 3;
    for (int i = 0; i < number_of_rooms; i++)
    {
        Dungeon_room generated_room(difficulty);
        rooms.push_back(generated_room);
    }

    while (Knight.Get_health() > 0)
    {
        while (display == 0)
        {
            system("cls");
            rooms[current_room].Display_room();
            cin >> player_input;

            if (player_input == "Fight" || player_input == "FIGHT" || player_input == "fight")
            {
                while (rooms[current_room].Get_enemies() > 0)
                {
                    Knight.Damage(rooms[current_room].Combat(Knight));
                }
                cout << "You have defeated all the enemies!" << endl;
                system("pause");
            }

            else if (player_input == "Search" || player_input == "SEARCH" || player_input == "search")
            {
                if (rooms[current_room].Get_enemies() <= 0)
                {
                    if (rooms[current_room].Get_item_number() > 0)
                    {
                        cout << "You found:" << endl << endl;
                        rooms[current_room].Get_items();
                        rooms[current_room].Transfer_items(Knight);
                        system("pause");
                    }
                    else
                    {
                        cout << "Nothing of use" << endl;
                        system("pause");
                    }
                }
                else
                {
                    cout << "You can't search the room while enemies are present!" << endl;
                    system("pause");
                }
            }
            
            else if (player_input == "Forward" || player_input == "FORWARD" || player_input == "forward")
            {
                if (rooms[current_room].Get_enemies() <= 0)
                {
                    if (number_of_rooms -1 > current_room)
                        current_room++;
                    else
                    {
                        battleship = 1;
                        break;
                    }
                }
                else
                {
                    cout << "The monsters are blocking your path!" << endl;
                    system("pause");
                }
            }

            else if (player_input == "Backtrack" || player_input == "BACKTRACK" || player_input == "backtrack")
            {
                if (current_room > 0)
                    current_room--;
                else
                {
                    cout << "You can't leave yet" << endl;
                    player_input = "";
                    system("pause");
                }
            }
            else if (player_input == "Inventory" || player_input == "INVENTORY" || player_input == "inventory")
            {
                display = 1;
                while (display == 1)
                {
                    system("cls");
                    Knight.Display_inventory();
                    Knight.Display_equipment();
                    Knight.Display_stats();

                    std::cout << "What do you want to do? :" << std::endl << std::endl;
                    std::cout << "Equip/Unequip equipment" << std::endl;
                    std::cout << "Wield/Unwield weapon" << std::endl;
                    std::cout << "Consume consumable" << std::endl;
                    std::cout << "Back" << std::endl << std::endl;
                    std::cin >> player_input;

                    if (player_input == "Equip" || player_input == "EQUIP" || player_input == "equip")
                    {
                        std::cin >> item;
                        item--;
                        if (Knight.Get_item(item) != -1)
                            Knight.Equip_wearable(item);
                        else
                            std::cout << "Item is not here" << std::endl << std::endl;
                        system("pause");
                    }
                    else if (player_input == "Unequip" || player_input == "UNEQUIP" || player_input == "unequip")
                    {
                        std::cin >> item;
                        item--;
                        if (Knight.Get_wearable(item) != -1)
                            Knight.Unequip_wearable(item);
                        else
                            std::cout << "You don't have that equiped" << std::endl << std::endl;
                        system("pause");
                    }
                    else if (player_input == "Wield" || player_input == "WIELD" || player_input == "wield")
                    {
                        std::cin >> item;
                        item--;
                        if (Knight.Get_item(item) != -1)
                            Knight.Equip_weapon(item);
                        else
                            std::cout << "Item is not here" << std::endl << std::endl;
                        system("pause");
                    }
                    else if (player_input == "Unwield" || player_input == "UNWIELD" || player_input == "unwield")
                    {
                        std::cin >> item;
                        item--;
                        if (Knight.Get_weapon(item) != -1)
                            Knight.Unequip_weapon(item);
                        else
                            std::cout << "You are not wielding that" << std::endl << std::endl;
                        system("pause");
                    }
                    else if (player_input == "Consume" || player_input == "CONSUME" || player_input == "consume")
                    {
                        std::cin >> item;
                        item--;
                        if (Knight.Get_item(item) != -1)
                            Knight.Consume_consumable(item);
                        else
                            std::cout << "Item is not here" << std::endl << std::endl;
                        system("pause");
                    }
                    else if (player_input == "Back" || player_input == "BACK" || player_input == "back")
                        display = 0;
                    else if (player_input == "");
                    else
                    {
                        std::cout << "Command Unrecognized 1.0" << std::endl;
                        system("pause");
                    }
                }

            }
            else if (player_input == "Quit" || player_input == "QUIT" || player_input == "quit")
            {
                battleship = -1;
                break;
            }
            else if (player_input == "");
            else
            {
                std::cout << "Command Unrecognized 0" << std::endl;
                system("pause");
            }
        }
        if (battleship == 1)
            break;
        if (battleship == -1)
            break;
    }

    if (battleship == -1)
    {
        system("cls");
        cout << "Thank you for playing!" << endl << endl;
        cout << "Press enter to quit" << endl << endl;
        return 0;
    }
    if (battleship == 0)
    {
        system("cls");
        cout << endl << "  You died!" << endl << endl;
    }
    else if (battleship == 1)
    {
        system("cls");
        cout << endl << "You defeated all the enemies and you found the rose of ice" << endl << endl;
        cout << endl << "Your quest was succesful" << endl << endl;
        cout << endl << "You managed to gain the favor of the Queen" << endl << endl;
        cout << endl << "Rejoice!" << endl << endl;
    }
}