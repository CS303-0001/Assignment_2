#include <iostream>
#include "single_linked_list.h"
#include "stack.h"

using namespace std;

void linked_list_menu()
{
    Single_Linked_List<int> list;
    int choice, value, index;

    do
    {
        cout << "\n--- Single Linked List Menu ---\n";
        cout << "1. Push Front\n";
        cout << "2. Push Back\n";
        cout << "3. Pop Front\n";
        cout << "4. Pop Back\n";
        cout << "5. Front\n";
        cout << "6. Back\n";
        cout << "7. Empty\n";
        cout << "8. Insert\n";
        cout << "9. Remove\n";
        cout << "10. Find\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push front: ";
            cin >> value;
            list.push_front(value);
            break;
        case 2:
            cout << "Enter value to push back: ";
            cin >> value;
            list.push_back(value);
            break;
        case 3:
            list.pop_front();
            break;
        case 4:
            list.pop_back();
            break;
        case 5:
            cout << "Front value: " << list.front() << endl;
            break;
        case 6:
            cout << "Back value: " << list.back() << endl;
            break;
        case 7:
            cout << "List is " << (list.empty() ? "empty" : "not empty") << endl;
            break;
        case 8:
            cout << "Enter index and value to insert: ";
            cin >> index >> value;
            list.insert(index, value);
            break;
        case 9:
            cout << "Enter index to remove: ";
            cin >> index;
            if (list.remove(index))
            {
                cout << "Item removed successfully." << endl;
            }
            else
            {
                cout << "Index out of range." << endl;
            }
            break;
        case 10:
            cout << "Enter value to find: ";
            cin >> value;
            index = list.find(value);
            if (index != list.size())
            {
                cout << "Value found at index: " << index << endl;
            }
            else
            {
                cout << "Value not found." << endl;
            }
            break;
        }
    } while (choice != 0);
}

void stack_menu()
{
    Stack<int> stack;
    int choice, value;

    do
    {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Empty\n";
        cout << "5. Size\n";
        cout << "6. Average\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            cout << "Top value: " << stack.top() << endl;
            break;
        case 4:
            cout << "Stack is " << (stack.empty() ? "empty" : "not empty") << endl;
            break;
        case 5:
            cout << "Stack size: " << stack.size() << endl;
            break;
        case 6:
            cout << "Average value: " << stack.average() << endl;
            break;
        }
    } while (choice != 0);
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Single Linked List\n";
        cout << "2. Stack\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            linked_list_menu();
            break;
        case 2:
            stack_menu();
            break;
        }
    } while (choice != 0);

    return 0;
}
