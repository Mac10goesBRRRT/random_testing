#include "src/c/example.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void setUp(void)

{

}



void tearDown(void)

{

}





void test_runExampleTest(void)

{





    int result;

    int input = 1;







    result = something(input);







    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

}
