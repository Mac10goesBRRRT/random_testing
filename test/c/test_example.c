#ifdef TEST
#include <stdbool.h>
#include "unity.h"
//in example.h wird die Funktion deklariert
#include "example.h"

//Vor- bzw. Nachbereitung
void setUp(void)
{
}

void tearDown(void)
{
}

void test_checkEnemyHeals(void)
{
    /* arrange */
    //Hier die Werte eingeben
    bool result;
    int currentHealth = 10;
    int maxHealth = 100;

    /* act */
    //Die Funktion wird ausgeführt
    result = calculateHeal(currentHealth, maxHealth);

    /* assert */
    //Vergleichen
    TEST_ASSERT_TRUE(result);
}

#endif // TEST