/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task2.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 2 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 2"
           * doctest::description("A suite of tests for Task 2")
           * doctest::skip(SKIP_TESTING_TASK_2))
{
#if !SKIP_TESTING_TASK_2
    SCENARIO("Validating Task 2")
    {
        GIVEN("A pointer to a stubbed out ChainCollection") {
            Collection<std::string> *collectionPtr = new ChainCollection<std::string>{};
            size_t expected{0};
            WHEN("I inspect its initial size") {
                size_t actual{collectionPtr->size()};

                THEN("I expect it to be 0") {
                    REQUIRE_EQ(expected, actual);
                }
            }
        }
    }
#endif
}
