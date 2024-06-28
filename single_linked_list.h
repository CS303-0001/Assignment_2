#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include <iostream>
#include <cstddef>

namespace std
{

    /**
     * @class Single_Linked_List
     * @brief A template class for a singly linked list.
     */
    template <typename T>

    /**
     * @class Single_Linked_List
     * @brief A class representing a singly linked list.
     *
     * This class provides functionality to manipulate a singly linked list, including inserting and removing elements, accessing elements at the front and back, checking if the list is empty, finding elements, and getting the size of the list.
     *
     * @tparam T The type of elements stored in the linked list.
     */
    class Single_Linked_List
    {
    public:
        Single_Linked_List(); // Constructor
        ~Single_Linked_List(); // Destructor

        /**
         * Inserts a new element at the beginning of the linked list.
         *
         * @param item The item to be inserted.
         */
        void push_front(const T &item);
        
        /**
         * Adds a new element to the end of the linked list.
         *
         * @param item The item to be added to the linked list.
         */
        void push_back(const T &item);
        
        /**
         * Removes the first element from the linked list.
         * This function removes the first element from the linked list and updates the head pointer accordingly.
         * If the linked list is empty, this function does nothing.
         */
        void pop_front();
        
        /**
         * @brief Removes the last element from the linked list.
         * 
         * This function removes the last element from the linked list.
         * If the list is empty, the function does nothing.
         */
        void pop_back();
        
        /**
         * Returns a reference to the first element in the linked list.
         *
         * @return A reference to the first element in the linked list.
         */
        T &front();
        
        /**
         * Returns a reference to the last element in the linked list.
         *
         * @return A reference to the last element in the linked list.
         */
        T &back();
        
        /**
         * @brief Checks if the linked list is empty.
         * 
         * @return true if the linked list is empty, false otherwise.
         */
        bool empty() const;
        
        /**
         * Inserts an element at the specified index in the linked list.
         *
         * @param index The index at which the element should be inserted.
         * @param item The element to be inserted.
         */
        void insert(size_t index, const T &item);
        
        /**
         * @brief Removes the element at the specified index from the linked list.
         *
         * @param index The index of the element to be removed.
         * @return true if the element was successfully removed, false otherwise.
         */
        bool remove(size_t index);
        
        /**
         * @brief Finds the first occurrence of the specified item in the linked list.
         * 
         * @param item The item to be found.
         * @return The index of the first occurrence of the item in the linked list, or `std::numeric_limits<size_t>::max()` if the item is not found.
         */
        size_t find(const T &item) const;
        
        /**
         * Returns the number of elements in the linked list.
         *
         * @return The number of elements in the linked list.
         */
        size_t size() const; 

    private:
        struct Node
        {
            T data; // The data stored in the node.
            Node *next; // Pointer to the next node in the linked list.
        };

        Node *head; // Pointer to the first node in the linked list.
        Node *tail; // Pointer to the last node in the linked list.
        size_t num_items; // The number of elements in the linked list.

        void clear(); // Helper function to deallocate memory used by the linked list.
    };

} // namespace std

#include "single_linked_list.cpp"

#endif // SINGLE_LINKED_LIST_H
