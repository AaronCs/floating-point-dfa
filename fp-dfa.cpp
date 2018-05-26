/*
 * fp detector for CS311
 *
 * Authors:
 *  Aaron Chan
 *  Johnny Li
 *  Peter Chung
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void print_result(bool result);
void reset_state(int curr_state);
void state_transition(int curr_state, bool result);
void state_1(char c, int curr_state, bool result);
void state_2(char c, int curr_state, bool result);
void state_3(char c, int curr_state, bool result);
void state_4(char c, int curr_state, bool result);
void state_5(char c, int curr_state, bool result);
void state_6(char c, int curr_state, bool result);
void state_7(char c, int curr_state, bool result);
void state_8(char c, int curr_state, bool result);

int main() {
    int curr_state = 1; // Initial State is 1.
    bool result = false;
    
    print_result(result);

    reset_state(curr_state);
    return 0;
}

void reset_state(int curr_state) {
    // Not sure if good idea, 
    // but I feel like it's good for readability.
    curr_state = 1;
}

void print_result(bool result) {
    if(result) cout << "Accept" << endl;
    else {
        cout << "Reject" << endl;
    }
}

void state_transition(int curr_state, bool result) {
    char c = 'a';
    switch(curr_state) {
        case 1:
            state_1(c, curr_state, result);
            break;
        case 2:
            state_2(c, curr_state, result);
            break;
        case 3:
            state_3(c, curr_state, result);
            break;
        case 4:
            state_4(c, curr_state, result);
            break;
        case 5:
            state_5(c, curr_state, result);
            break;
        case 6:
            state_6(c, curr_state, result);
            break;
        case 7:
            state_7(c, curr_state, result);
            break;
        case 8:
            state_8(c, curr_state, result);
            break;
    }
}

void state_1(char c, int curr_state, bool result) {

}
void state_2(char c, int curr_state, bool result) {

}

void state_3(char c, int curr_state, bool result) {

}

void state_4(char c, int curr_state, bool result) {

}

void state_5(char c, int curr_state, bool result) {

}

void state_6(char c, int curr_state, bool result) { 
}

void state_7(char c, int curr_state, bool result) {

}

void state_8(char c, int curr_state, bool result) {

}

