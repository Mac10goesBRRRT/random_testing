#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "example.h"
#include "example_helper.h"



bool doesHeal(int currentHealth, int maxHealth){
    int d20 = randIntRange(1,20);
    if(map(currentHealth, 0, maxHealth, 0, 20) < 10 && d20 > 10){
        return true;
    } else {
        return false;
    }
}

int map(int x, int in_min, int in_max, int out_min, int out_max){
    //vgl Arduino map() https://www.arduino.cc/reference/en/language/functions/math/map/
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

//rand() % (20-1+1) + 1 = rand() % 20 + 1 => 1%20 = 19 => 19+1 = 20
//rand() % (20-1+1) + 1 = rand() % 20 + 1 => 20%29 = 0 => 0+1 = 1
int randIntRange(int min, int max){
    return randInt() % (max - min + 1) + min;
}

