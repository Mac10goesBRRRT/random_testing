#ifdef TEST
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

//Hier läuft der Test
void test_runExampleTest(void)
{
    /* arrange */
    //Hier die Werte eingeben
    int result;
    int input = 1;

    /* act */
    //Die Funktion wird ausgeführt
    result = something(input);

    /* assert */
    //Vergleichen
    TEST_ASSERT_EQUAL_INT(1, result);
}

#endif // TEST