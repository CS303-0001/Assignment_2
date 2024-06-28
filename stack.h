#ifndef STACK_H
#define STACK_H

#include <vector>
#include <iostream>

namespace std
{

    /**
     * @class Stack
     * @brief A template class for a stack implemented using a vector.
     */
    template <typename T>
    
    /**
     * @brief A class representing a stack data structure.
     * 
     * This class provides basic stack operations such as push, pop, top, empty, size, and average.
     * The stack is implemented using a vector.
     * 
     * @tparam T The type of elements stored in the stack.
     */
    class Stack
    {
    public:
        /**
         * @brief Constructs an empty stack.
         */
        Stack();

        /**
         * @brief Destroys the stack.
         */
        ~Stack();

        /**
         * @brief Pushes an item onto the top of the stack.
         * 
         * @param item The item to be pushed onto the stack.
         */
        void push(const T &item);

        /**
         * @brief Removes the item at the top of the stack.
         */
        void pop();

        /**
         * @brief Returns a reference to the item at the top of the stack.
         * 
         * @return A reference to the item at the top of the stack.
         */
        T &top();

        /**
         * @brief Checks if the stack is empty.
         * 
         * @return True if the stack is empty, false otherwise.
         */
        bool empty() const;

        /**
         * @brief Returns the number of elements in the stack.
         * 
         * @return The number of elements in the stack.
         */
        size_t size() const;

        /**
         * @brief Calculates and returns the average of all elements in the stack.
         * 
         * @return The average of all elements in the stack.
         */
        double average() const;

    private:
        std::vector<T> data; /**< The underlying vector used to store the elements of the stack. */
    };

} // namespace std

#include "stack.cpp"

#endif // STACK_H
