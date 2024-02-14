#include <stdio.h>
#include "../shortcut.h"
#include "unit_tests.h"

int main(int argc, char* argv[])
{
  printf("Two tests are expected to fail\n");
  ADD_TEST(test1);
  ADD_TEST(test2);
  ADD_TEST(test5);
  ADD_TEST(test3);
  ADD_TEST(test4);

  run_tests();
}
