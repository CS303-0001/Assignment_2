#include "single_linked_list.h"

namespace std
{

    template <typename T>
    Single_Linked_List<T>::Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {}

    template <typename T>
    Single_Linked_List<T>::~Single_Linked_List()
    {
        clear();
    }

    template <typename T>
    void Single_Linked_List<T>::push_front(const T &item)
    {
        Node *new_node = new Node{item, head};
        head = new_node;
        if (tail == nullptr)
        {
            tail = head;
        }
        ++num_items;
    }

    template <typename T>
    void Single_Linked_List<T>::push_back(const T &item)
    {
        Node *new_node = new Node{item, nullptr};
        if (tail)
        {
            tail->next = new_node;
        }
        else
        {
            head = new_node;
        }
        tail = new_node;
        ++num_items;
    }

    template <typename T>
    void Single_Linked_List<T>::pop_front()
    {
        if (head)
        {
            Node *old_head = head;
            head = head->next;
            delete old_head;
            --num_items;
            if (num_items == 0)
            {
                tail = nullptr;
            }
        }
    }

    template <typename T>
    void Single_Linked_List<T>::pop_back()
    {
        if (head)
        {
            if (head == tail)
            {
                delete head;
                head = tail = nullptr;
            }
            else
            {
                Node *current = head;
                while (current->next != tail)
                {
                    current = current->next;
                }
                delete tail;
                tail = current;
                tail->next = nullptr;
            }
            --num_items;
        }
    }

    template <typename T>
    T &Single_Linked_List<T>::front()
    {
        return head->data;
    }

    template <typename T>
    T &Single_Linked_List<T>::back()
    {
        return tail->data;
    }

    template <typename T>
    bool Single_Linked_List<T>::empty() const
    {
        return num_items == 0;
    }

    template <typename T>
    void Single_Linked_List<T>::insert(size_t index, const T &item)
    {
        if (index >= num_items)
        {
            push_back(item);
        }
        else if (index == 0)
        {
            push_front(item);
        }
        else
        {
            Node *current = head;
            for (size_t i = 0; i < index - 1; ++i)
            {
                current = current->next;
            }
            Node *new_node = new Node{item, current->next};
            current->next = new_node;
            ++num_items;
        }
    }

    template <typename T>
    bool Single_Linked_List<T>::remove(size_t index)
    {
        if (index >= num_items)
        {
            return false;
        }
        else if (index == 0)
        {
            pop_front();
        }
        else
        {
            Node *current = head;
            for (size_t i = 0; i < index - 1; ++i)
            {
                current = current->next;
            }
            Node *old_node = current->next;
            current->next = old_node->next;
            delete old_node;
            --num_items;
            if (index == num_items)
            {
                tail = current;
            }
        }
        return true;
    }

    template <typename T>
    size_t Single_Linked_List<T>::find(const T &item) const
    {
        Node *current = head;
        size_t index = 0;
        while (current)
        {
            if (current->data == item)
            {
                return index;
            }
            current = current->next;
            ++index;
        }
        return num_items;
    }

    template <typename T>
    size_t Single_Linked_List<T>::size() const
    {
        return num_items;
    }

    template <typename T>
    void Single_Linked_List<T>::clear()
    {
        while (head)
        {
            pop_front();
        }
    }

} // namespace std
