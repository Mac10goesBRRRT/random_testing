#ifdef TEST
#include <stdbool.h>
#include "unity.h"
//in example.h wird die Funktion deklariert
#include "example.h"
#include "example_helper.h"

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
    result = doesHeal(currentHealth, maxHealth);

    /* assert */
    //Vergleichen
    TEST_ASSERT_TRUE(result);
}

void test_randReturns(void)
{
    /* arrange */
    //Hier die Werte eingeben
    int expected = 1804289383;
    int result;

    /* act */
    //Die Funktion wird ausgeführt
    result = randInt();

    /* assert */
    //Vergleichen
    TEST_ASSERT_EQUAL(expected, result);
    //TEST_ASSERT_TRUE(result);
}

#endif // TEST