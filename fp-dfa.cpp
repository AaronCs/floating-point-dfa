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
#include <cstring>

using namespace std;

void print_result(int curr_state, bool & result);
void reset_state(int & curr_state);
void state_transition(char c, int & curr_state);
int state_1(char c);
int state_2(char c);
int state_3(char c);
int state_4(char c);
int state_5(char c);
int state_6(char c);
int state_7(char c);
int state_8(char c);

int main() {
    string test = ".";
    int curr_state = 1; // Initial State is 1.
    bool result = false;
    
    state_transition(test[0], curr_state);
    cout << "CURRENT STATE: " << curr_state << endl;
    print_result(curr_state, result);

    reset_state(curr_state);
    return 0;
}

void reset_state(int & curr_state) {
    // Not sure if good idea, 
    // but I feel like it's good for readability.
    curr_state = 1;
}

void print_result(int curr_state, bool & result) {
    switch(curr_state) {
        case 2:
        case 4:
        case 5:
            result = true;
            break;
        default:
            result = false;
    }
    if(result) cout << "Accept" << endl;
    else {
        cout << "Reject" << endl;
    }
}

void state_transition(char c, int & curr_state) {
    // FIXME: Not sure if result should be decided in this function or another
    switch(curr_state) {
        case 1:
            curr_state = state_1(c);
            break;
        case 2:
            curr_state = state_2(c);
            break;
        case 3:
            curr_state = state_3(c);
            break;
        case 4:
            curr_state = state_4(c);
            break;
        case 5:
            curr_state = state_5(c);
            break;
        case 6:
            curr_state = state_6(c);
            break;
        case 7:
            curr_state = state_7(c);
            break;
        case 8:
            curr_state = state_8(c);
            break;
        default:
            // Dead State
            curr_state = 0;
            break;
    }
}

int state_1(char c) {
    string nums = "0123456789";
    if(nums.find(c) != string::npos) {
        return 2;
    }
    if(c == '.') return 8;
    return 0;
}
int state_2(char c) {

}

int state_3(char c) {

}

int state_4(char c) {

}

int state_5(char c) {

}

int state_6(char c) { 
}

int state_7(char c) {

}

int state_8(char c) {

}

