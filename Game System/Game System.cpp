/*
//1. Player Setup:
// -Player can enter their name
// -Each player starts with a set amoun of health and damage 

//2 Monsters:
// -There are 3 monsters available for players to choose from
// -Each monster can andomly produce one of the following effects;
  // No effect
  // Adds health to the player
  // Adds attack power to the player

// 3. Gameplay:
//  -Players will fight against the chosen monster
// -The gae continues until the player's health reaches 0 or less

//4 Restart:
// -Players can choose to play again after health reaches 0 or less
//testz
*/
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

    while (true) { // Game loop for restart
        // Player Setup
        string playerName;
        int playerHealth = 100;
        int playerDamage = 10;

        cout << "Enter your name: ";
        cin >> playerName;

        // Monsters
        string monsters[3] = { "Goblin", "Orc", "Troll" };
        string monster;
        int monsterHealth = 100;
        int monsterDamage = 10;

        cout << "Choose a monster:\n";
        cout << "1. Goblin\n";
        cout << "2. Orc\n";
        cout << "3. Troll\n";

        int choice;
        cout << "Enter the number of your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            monster = "Goblin";
            break;
        case 2:
            monster = "Orc";
            break;
        case 3:
            monster = "Troll";
            break;
        default:
            cout << "Invalid choice! Defaulting to Goblin.\n";
            monster = "Goblin";
        }

        cout << "You chose: " << monster << endl;
        cout << "Monster Health: " << monsterHealth << ", Monster Damage: " << monsterDamage << endl;

        // Gameplay
        while (playerHealth > 0) {
            cout << "You are fighting a " << monster << endl;
            cout << "Player Health: " << playerHealth << endl;
            cout << "Monster Health: " << monsterHealth << endl;

            // Player's turn
            cout << "Press any key to attack: \n";
            cin.ignore(); // Clear any leftover input
            cin.get();

            int playerAttack = rand() % playerDamage;
            monsterHealth -= playerAttack;

            cout << "You attacked the monster for " << playerAttack << " damage" << endl;

            system("cls");

            if (monsterHealth <= 0) {
                cout << "You defeated the monster!" << endl;
                break;
            }

            // Monster's turn
            int monsterAttack = rand() % monsterDamage;
            playerHealth -= monsterAttack;

            cout << "The monster attacked you for " << monsterAttack << " damage" << endl;

            if (playerHealth <= 0) {
                cout << "You were defeated by the monster!" << endl;
                break;
            }
        }

        // Restart
        char restartChoice;
        cout << "Do you want to play again? (y/n): ";
        cin >> restartChoice;

        if (restartChoice != 'y' && restartChoice != 'Y')
            cout << "Thanks for playing!"; {
            break;
        }
    }

    return 0;
}
