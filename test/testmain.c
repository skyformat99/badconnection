
#include "suites.h"
#include <check.h>

int main(int argc, char **argv) {

  SRunner *runner;
  int number_fails;

  runner = srunner_create(suite_board());
  srunner_add_suite(runner, suite_neighbor());
  srunner_add_suite(runner, suite_neighbor_board());
  srunner_add_suite(runner, suite_iterator());
  srunner_add_suite(runner, suite_life_rules());
  srunner_add_suite(runner, suite_generation());
  srunner_add_suite(runner, suite_integration());

  if (argc > 1 && strcmp(argv[1], "--nofork") == 0) {
    srunner_set_fork_status(runner, CK_NOFORK);
  }

  srunner_run_all(runner, CK_NORMAL);
  number_fails = srunner_ntests_failed(runner);
  srunner_free(runner);

  return number_fails;
}