#ifdef TEST
#include <stdbool.h>
#include "unity.h"
//in example.h wird die Funktion deklariert
#include "example.h"
#include "example_helper.h"
#include "mock_example_helper.h"

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
    randInt_ExpectAndReturn(10);
    result = doesHeal(currentHealth, maxHealth);
    TEST_ASSERT_TRUE(result);
    randInt_ExpectAndReturn(1);
    result = doesHeal(currentHealth, maxHealth);
    TEST_ASSERT_FALSE(result);

    /* assert */
    //Vergleichen
    
}

void test_randReturns(void)
{
    /* arrange */
    //Hier die Werte eingeben
    int expected = 1;
    int result;

    /* act */
    //Die Funktion wird ausgeführt
    randInt_ExpectAndReturn(expected);
    result = randInt();

    /* assert */
    //Vergleichen
    TEST_ASSERT_EQUAL(expected, result);
    //TEST_ASSERT_TRUE(result);
    //Hier zeigen das das zwar geht, aber unsinnig ist
}

void test_roll_20(){
    int expected = 20;
    int result;
    
    randInt_ExpectAndReturn(39);
    result = randIntRange(1,20);

    TEST_ASSERT_EQUAL(expected, result);
}

void test_roll_01(){
    int expected = 1;
    int result;
    
    randInt_ExpectAndReturn(40);
    result = randIntRange(1,20);

    TEST_ASSERT_EQUAL(expected, result);
}

void test_map10(){
    int expected1 = 10, expected2 = 0, expected3 = 20;
    int result;
    
    result = map(50, 0, 100, 0, 20);
    TEST_ASSERT_EQUAL(expected1, result);
    result = map(0, 0, 100, 0, 20);
    TEST_ASSERT_EQUAL(expected2, result);
    result = map(100, 0, 100, 0, 20);
    TEST_ASSERT_EQUAL(expected3, result);
}

#endif // TEST