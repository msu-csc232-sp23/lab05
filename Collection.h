/**
 * @brief Collection specification.
 */

#ifndef CSC232_COLLECTION_H_
#define CSC232_COLLECTION_H_

/**
 * @brief A model of a collection of items.
 * @tparam T the type of item contained in this Collection.
 * @pre T has the default constructor defined.
 * @pre All items in this Collection are of the same type T.
 */
template <typename T>
class Collection {
public:
    /**
     * @brief Obtain the number of items in this Collection.
     * @return the number of items contained in this Collection.
     * @post this Collection remains unchanged.
     */
    virtual size_t size( ) const = 0;

    /**
     * @brief Add an item to this Collection.
     * @param item the item to add to this Collection.
     * @return true if the given item was successfully added to this collection, false otherwise.
     */
    virtual bool add( T item ) = 0;

    /**
     * @brief Remove an item from this Collection.
     * @param item the item to remove from this Collection.
     * @return true if the given item was successfully removed from this collection, false otherwise.
     */
    virtual bool remove( ) = 0;

    /**
     * @brief Default virtual destructor.
     */
    virtual ~Collection() = default;
};
#endif // CSC232_COLLECTION_H_
