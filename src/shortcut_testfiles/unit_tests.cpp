#include "unit_tests.h"

TEST(test1)
{
  int x = 5;
  ASSERT_EQUALS(5, x);
}

TEST(test2)
{
  char name[8] = "Peter";
  ASSERT_EQUALS("Peter", name);
}

TEST(test5)
{
  char name[] = "Franz";
  ASSERT_EQUALS("Peter", name);
}

TEST(test3)
{
  ASSERT_EQUALS(5, 3);
}

TEST(test4)
{
  ASSERT_FALSE(3 == 3, "3 is not equal to 3 in a parallel universe");
}
