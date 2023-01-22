#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "example.h"
#include "example_helper.h"



bool doesHeal(int currentHealth, int maxHealth){
    if(currentHealth < maxHealth/2){
        return true;
    } else {
        return false;
    }
}


//rand() % (20-1+1) + 1 = rand() % 20 + 1 => 1%20 = 19 => 19+1 = 20
//rand() % (20-1+1) + 1 = rand() % 20 + 1 => 20%29 = 0 => 0+1 = 1
int randIntRange(int min, int max){
    return randInt() % (max - min + 1) + min;
}

