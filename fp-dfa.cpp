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
void state_1(int curr_state, bool result);
void state_2(int curr_state, bool result);
void state_3(int curr_state, bool result);
void state_4(int curr_state, bool result);
void state_5(int curr_state, bool result);
void state_6(int curr_state, bool result);
void state_7(int curr_state, bool result);
void state_8(int curr_state, bool result);

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
    switch(curr_state) {
        case 1:
            state_1(curr_state, result);
            break;
        case 2:
            state_2(curr_state, result);
            break;
        case 3:
            state_3(curr_state, result);
            break;
        case 4:
            state_4(curr_state, result);
            break;
        case 5:
            state_5(curr_state, result);
            break;
        case 6:
            state_6(curr_state, result);
            break;
        case 7:
            state_7(curr_state, result);
            break;
        case 8:
            state_8(curr_state, result);
            break;
    }
}

void state_1(int curr_state, bool result) {

}
void state_2(int curr_state, bool result) {

}

void state_3(int curr_state, bool result) {

}

void state_4(int curr_state, bool result) {

}

void state_5(int curr_state, bool result) {

}

void state_6(int curr_state, bool result) {

}

void state_7(int curr_state, bool result) {

}

void state_8(int curr_state, bool result) {

}

