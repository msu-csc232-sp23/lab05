/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    demo.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry-point of the demo target.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#include "csc232.h"

int main( int argc, char* argv[] )
{
    cout << "Hello, demo target!" << endl;

#if !SKIP_TESTING_TASK_1
    Collection<std::string>* collectionPtr = new StubbedCollection{ };
    cout << "Initial size of collection: " << collectionPtr->size() << "\n";
    if (collectionPtr->add("Jim"))
        cout << "Just added \"Jim\" to the collection\n";
    if (collectionPtr->remove( ))
        cout << "Just removed \"Jim\" from the collection\n";

    cout << "At this point, the collection has this many items: ";
    int total{ count( collectionPtr ) };
    cout << total << "\n";
    delete collectionPtr;
#endif // !SKIP_TESTING_TASK_1

#if !SKIP_TESTING_TASK_2
    cout << "Pointing to a brand new ChainCollection now...\n";
    collectionPtr = new ChainCollection<std::string>{ };
    cout << "At this point, the collection has this many items: ";
    cout << collectionPtr->size() << "\n";

    delete collectionPtr;
    collectionPtr = nullptr;
#endif

#if !SKIP_TESTING_TASK_3
    cout << "Pointing to a brand new ChainCollection again...\n";
    collectionPtr = new ChainCollection<std::string>{ };
    cout << "\nAbout to add two strings to the collection...\n";
    cout << "Adding \"Jim\"... ";
    if (collectionPtr->add("Jim"))
        cout << "Done!\n";
    cout << "Adding \"Daehn\"... ";
    if (collectionPtr->add("Daehn"))
        cout << "Done!\n";
    cout << "\nAt this point, the collection has this many items: ";
    cout << collectionPtr->size() << "\n";

    while ( collectionPtr->size() > 0 ) {
        cout << "Removing head node... ";
        if (collectionPtr->remove( ))
            cout << "Done!\n";
    }

    cout << "\nAt this point, the collection has this many items: ";
    cout << collectionPtr->size() << "\n";

    delete collectionPtr;
    collectionPtr = nullptr;
#endif

    return EXIT_SUCCESS;
}
