/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task1.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 1 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 1" * doctest::description("A suite of tests for Task 1")
           * doctest::skip(SKIP_TESTING_TASK_1))
{
#if !SKIP_TESTING_TASK_1
    SCENARIO("Validating Task 1")
    {
        GIVEN("a default DNode<std::string>") {
            DNode<std::string> node;

            WHEN("I inspect the data contained in the node") {
                std::string data{ node.getItem( ) };

                THEN("I expect to find an empty string") {
                    std::string expected{ };
                    REQUIRE_EQ(expected, data);
                }
            }

            AND_WHEN("I inspect the node's previous pointer") {
                auto expected{ nullptr };
                auto actual{ node.getPrev( ) };

                THEN("I expect it to be the nullptr") {
                    REQUIRE_EQ(expected, actual);
                }
            }

            AND_WHEN("I inspect the node's next pointer") {
                auto expected{ nullptr };
                auto actual{ node.getNext( ) };

                THEN("I expect it to be the nullptr") {
                    REQUIRE_EQ(expected, actual);
                }
            }
        }

        GIVEN("a DNode with an initial string") {
            std::string expected{ "CSC232" };
            DNode<std::string> node{ expected };

            WHEN( "I inspect the data contained in the node") {
                std::string actual{ node.getItem( ) };

                THEN("I expect to find the initial string") {
                    REQUIRE_EQ(expected, actual);
                }
            }

            AND_WHEN("I inspect the node's previous pointer") {
                auto expected{ nullptr };
                auto actual{ node.getPrev( ) };

                THEN("I expect it to be the nullptr") {
                    REQUIRE_EQ(expected, actual);
                }
            }

            AND_WHEN("I inspect the node's next pointer") {
                auto expected{ nullptr };
                auto actual{ node.getNext( ) };

                THEN("I expect it to be the nullptr") {
                    REQUIRE_EQ(expected, actual);
                }
            }
        }

        GIVEN("a DNode with an initial string and previous pointer") {
            std::string previousData{ "CSC232" };
            std::string currentData{ "Data Structures" };

            auto previousNodePtr = new DNode<std::string>{ previousData };
            auto node = new DNode<std::string>{currentData, previousNodePtr };

            previousNodePtr->setNext(node);

            WHEN("I inspect the data contained in the node") {
                std::string actualData{ node->getItem()};
                THEN("I expect to find the initial string") {
                    REQUIRE_EQ(currentData, actualData);
                }
            }

            AND_WHEN("I inspect the previous pointer") {
                auto actual{node->getPrev()};

                THEN("I expect it to point to the node before it") {
                    REQUIRE_EQ(previousNodePtr, actual);
                }
            }

            AND_WHEN("I inspect the next pointer") {
                auto actual{ node->getNext()};

                THEN("I expect it to point to the nullptr") {
                    REQUIRE_EQ(nullptr, actual);
                }
            }
        }

        GIVEN("a DNode with an initial string, previous pointer, and next pointer") {
            std::string previousData{ "CSC232" };
            std::string currentData{ "Data Structures" };
            std::string nextData{ "MSU" };

            auto previousNodePtr = new DNode<std::string>{ previousData };
            auto nextNodePtr = new DNode<std::string>{ nextData };
            auto node = new DNode<std::string>{currentData, previousNodePtr, nextNodePtr };

            previousNodePtr->setNext(node);
            nextNodePtr->setPrev(node);

            WHEN("I inspect the data contained in the node") {
                std::string actualData{ node->getItem()};

                THEN("I expect to find the initial string") {
                    REQUIRE_EQ(currentData, actualData);
                }
            }

            AND_WHEN("I inspect the previous pointer") {
                auto actual{node->getPrev()};

                THEN("I expect it to point to the node before it") {
                    REQUIRE_EQ(previousNodePtr, actual);
                }
            }

            AND_WHEN("I inspect the next pointer") {
                auto actual{node->getNext()};

                THEN("I expect it to point to the node after it") {
                    REQUIRE_EQ(nextNodePtr, actual);
                }
            }
        }
    }
#endif
}
