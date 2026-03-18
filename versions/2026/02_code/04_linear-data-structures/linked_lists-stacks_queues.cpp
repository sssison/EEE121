#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* next;
    Node(T value) {
        data = value;
        next = nullptr;
    }
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;
public:
    LinkedList() {
        head = nullptr;
    }

    void insertData(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node<T>* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteData(T value) {
        if (head == nullptr) return;
        if (head->data == value) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node<T>* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }
        if (temp->next != nullptr) {
            Node<T>* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }

    T getData(int index) {
        Node<T>* temp = head;
        int count = 0;
        while (temp != nullptr) {
            if (count == index) {
                return temp->data;
            }
            count++;
            temp = temp->next;
        }
        throw out_of_range("Index out of range");
    }

    int getSize() {
        Node<T>* temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

template <typename T>
class DLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
public:
    DLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void addFront(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void addBack(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    T removeFront() {
        if (head == nullptr) throw out_of_range("List is empty");
        Node<T>* temp = head;
        T value = temp->data;
        head = head->next;
        delete temp;
        return value;
    }

    T removeBack() {
        if (tail == nullptr) throw out_of_range("List is empty");
        if (head == tail) {
            T value = head->data;
            delete head;
            head = tail = nullptr;
            return value;
        }
        Node<T>* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        T value = tail->data;
        delete tail;
        tail = temp;
        tail->next = nullptr;
        return value;
    }

    T front() {
        if (head == nullptr) throw out_of_range("List is empty");
        return head->data;
    }

    T back() {
        if (tail == nullptr) throw out_of_range("List is empty");
        return tail->data;
    }

    int getSize() {
        Node<T>* temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main() {

    cout << "=================================\n" << endl;
    cout << "Testing LinkedList:\n" << endl;
    LinkedList<int> list;
    list.insertData(10);
    list.insertData(20);
    list.insertData(30);

    cout << "Element at index 1: " << list.getData(1) << endl; // Output: 20
    cout << "Size of the list: " << list.getSize() << endl; // Output: 3

    list.deleteData(20);
    cout << "Element at index 1 after deletion: " << list.getData(1) << endl; // Output: 30
    cout << "Size of the list after deletion: " << list.getSize() << endl; // Output: 2

    cout << "=================================\n" << endl;
    cout << "Testing DLinkedList:\n" << endl;

    DLinkedList<string> dlist;
    dlist.addBack("Hello");
    dlist.addBack("World");
    dlist.addFront("Welcome");
    cout << "Front element: " << dlist.front() << endl; // Output: Welcome
    cout << "Back element: " << dlist.back() << endl; // Output:
    cout << "Size of the doubly linked list: " << dlist.getSize() << endl; // Output: 3

    cout << "================================\n" << endl;
    cout << "Testing Stack :\n" << endl;

    // DLinkedList implementation of stack
    DLinkedList<int> stack;
    stack.addFront(1); // Push 1
    stack.addFront(2); // Push 2
    cout << "Top of the stack: " << stack.front() << endl; // Output: 2
    cout << "Popped from stack: " << stack.removeFront() << endl; // Output: 2
    cout << "Top of the stack after pop: " << stack.front() << endl; // Output: 1

    cout << "================================\n" << endl;
    cout << "Testing Queue :\n" << endl;

    // DLinkedList implementation of queue
    DLinkedList<int> queue;
    queue.addBack(1); // Enqueue 1
    queue.addBack(2); // Enqueue 2
    cout << "Front of the queue: " << queue.front() << endl; // Output: 1
    cout << "Dequeued from queue: " << queue.removeFront() << endl; // Output: 1
    cout << "Front of the queue after dequeue: " << queue.front() << endl; // Output: 2

    return 0;
}
