#include <iostream>
#include "functions.h"
#include <string>

struct Student {
    std::string name;
    int studentID;
};

// functions were going up here before

using namespace std;

int main() {
    // all we're going to do in here is orchestrate different functions that we write.

    cout << add(5, 3) << endl;
    cout << subtract(10, 4) << endl;

    Student nick;
    nick.name = "Nick";
    nick.studentID = 987722962;

    Student zoe;
    zoe.name = "Zoe";
    zoe.studentID = 125566891;

    Student allStudents[2] = {nick, zoe};
    int size = 2;

    for(int x = 0; x < size; x++) {
        std::cout << allStudents[x].name << '\n';
        std::cout << allStudents[x].studentID << '\n';
    }

    return 0;
}