#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "example.h"



bool doesHeal(int currentHealth, int maxHealth){
    if(currentHealth < maxHealth/2){
        return true;
    } else {
        return false;
    }
}
