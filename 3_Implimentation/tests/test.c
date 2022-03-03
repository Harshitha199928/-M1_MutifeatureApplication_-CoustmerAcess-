#include "banking.c"
#include "medicine.c"
#include "/home/runner/work/
M1_MutifeatureApplication_App/
M1_MutifeatureApplication_App/3_Implementation/unity/unity.h"

void setUp(){}
void tearDown(){}


void bAnking(void)
{
TEST_ASSERT_EQUAL_INT(3000,str_amo(3000));
TEST_ASSERT_EQUAL_INT(2000,srt_amo(1000));
TEST_ASSERT_EQUAL_INT(1234567890,str_phono(1234567890));
TEST_ASSERT_EQUAL_INT(9874561230,str_phono(987456123));

}
void mEdicine(void)
{

TEST_ASSERT_EQUAL_INT('tablets',str_medi('tablets'));
TEST_ASSERT_EQUAL_INT('tablets',str_medi('tabets'));
TEST_ASSERT_EQUAL_INT('fevertab',str_medi('fevertab'));
TEST_ASSERT_EQUAL_INT('fevertablets',str_medi('fever'));

}

int test_main()
{
  UNITY_BEGIN();

  RUN_TEST(test_bAnking);
  RUN_TEST(test_mEdicine);
 
  return UNITY_END();
}
