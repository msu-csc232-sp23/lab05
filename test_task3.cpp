/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task3.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 3 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 3"
           * doctest::description("A suite of tests for Task 3")
           * doctest::skip(SKIP_TESTING_TASK_3))
{
#if !SKIP_TESTING_TASK_3
    SCENARIO("Validating Task 3")
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
            AND_WHEN("I add something to it") {
                auto previousSize = collectionPtr->size();
                auto actuallyAdded = collectionPtr->add("something");
                auto count = collectionPtr->size();
                THEN("I expect it was added") {
                    REQUIRE(actuallyAdded);
                    REQUIRE_EQ(previousSize + 1, count);

                    AND_WHEN("I remove the head node") {
                        previousSize = collectionPtr->size();
                        auto actuallyRemoved = collectionPtr->remove();
                        count = collectionPtr->size();
                        THEN("I expect it was removed") {
                            REQUIRE_EQ(previousSize - 1, count);
                        }
                    }
                }

            }
        }
    }
#endif
}
