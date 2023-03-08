/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Useful libraries and function declarations for CSC232 assignments.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#ifndef MSU_CSC232_SP23_H
#define MSU_CSC232_SP23_H

#define FALSE 0
#define TRUE !FALSE
// Set this macro to the value of FALSE to test Task 1
#define SKIP_TESTING_TASK_1 TRUE
// Set this macro to the value of FALSE to test Task 2
#define SKIP_TESTING_TASK_2 TRUE
// Set this macro to the value of FALSE to test Task 3
#define SKIP_TESTING_TASK_3 TRUE
// Set this macro to the value of FALSE to test Task 4
#define SKIP_TESTING_TASK_4 TRUE
// Set this macro to the value of FALSE to test Task 5
#define SKIP_TESTING_TASK_5 TRUE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <memory>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

#include "Collection.h"
template class Collection<std::string>;

class StubbedCollection : public Collection<std::string> {
private:
    std::vector<std::string> data;
public:
    StubbedCollection() = default;

    /**
     * @copydoc
     */
    size_t size( ) const override {
        return data.size();
    }

    /**
     * @copydoc
     */
    bool add( std::string item ) override {
        return false;
    }

    /**
     * @copydoc
     */
    bool remove( ) override {
        return false;
    }
};

/**
 * @brief Counts the number of items in the given Collection.
 *
 * @param collectionPtr a pointer to a Collection of items of type T
 * @return the number of strings contained in the given Collection
 * @post the given collection remains unchanged
 */
template <typename T>
int count(const Collection<T>* collectionPtr) {
    return static_cast<int>(collectionPtr->size());
}

// Provide shortened names for common objects found in std namespace
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::vector;


/******************** STUDENT WORK BELOW THIS LINE ********************/

#if !SKIP_TESTING_TASK_1
// TODO: Task 1.1 - Declare a class template named DNode that meets the specification of Figure 4.10 (i.e., the block defined by the SKIP_TESTING_TASK_1 macro)

// TODO: Task 1.2 - Define the DNode member functions as below

#endif // SKIP_TESTING_TASK_1

#if !SKIP_TESTING_TASK_2
// TODO: Task 2.1 - Declare a class template named ChainCollection that extends Collection that meets the specification of Figure 4.10 (i.e., the block defined by the SKIP_TESTING_TASK_2 macro)

// TODO: Task 2.2 - Define ChainCollection member functions as stubs

#endif

#endif // MSU_CSC232_SP23_H