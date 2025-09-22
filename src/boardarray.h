#include <iostream>
#include "board.h"
#define SIZE 5
using namespace std;

class BoardArray : public Board {
    Entry* array;
    int index;

    public:
        BoardArray() {
            array = new Entry[SIZE];
            index = 0;
        }

        void add(Entry* entry) {
            for(int i = index; i > 0; i--) {
                if (entry->score > array[i - 1].score) {
                    array[i] = array[i - 1];
                } else {
                    array[i] = *entry;
                    index++;
                    return;
                }
            } 
            array[0] = *entry;
            index++;
        }

        void print() {
            for (int i = 0; i < index; i++) {
                cout << i + 1 << ". ";
                array[i].print();
            }
        }
};