#include "stack.h"

namespace std
{

    template <typename T>
    Stack<T>::Stack() {}

    template <typename T>
    Stack<T>::~Stack() {}

    template <typename T>
    void Stack<T>::push(const T &item)
    {
        data.push_back(item);
    }

    template <typename T>
    void Stack<T>::pop()
    {
        if (!data.empty())
        {
            data.pop_back();
        }
    }

    template <typename T>
    T &Stack<T>::top()
    {
        return data.back();
    }

    template <typename T>
    bool Stack<T>::empty() const
    {
        return data.empty();
    }

    template <typename T>
    size_t Stack<T>::size() const
    {
        return data.size();
    }

    template <typename T>
    double Stack<T>::average() const
    {
        if (data.empty())
        {
            return 0.0;
        }
        T sum = 0;
        for (const auto &item : data)
        {
            sum += item;
        }
        return static_cast<double>(sum) / data.size();
    }

} // namespace std
