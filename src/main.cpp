#include <iostream>
#include "boardarray.h"
using namespace std;

int main() {
    Board* board = new BoardArray();
    char ans;
    do {
        cout << "Op: ";
        cin >> ans;
        cin.ignore();
        switch (ans) {
            case 'a': {
                Entry* player = new Entry();
                cout << "Enter name: ";
                getline(cin, player->name);
                cout << "Enter college: ";
                getline(cin, player->college);
                cout << "Enter score: ";
                cin >> player->score;
                cin.ignore();
                board->add(player);
                break;
            }
            case 'p':
                board->print();
                break;
            case 'x':
                cout << "Exiting";
                break;
            default:
                cout << "Invalid operation" << endl;
        }
    } while (ans != 'x');
    return 0;
}