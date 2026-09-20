class Node {
public:
    int val;
    Node* next;
    Node(int value) { 
        val=value;
        next=nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size){
             return -1;
        }
        Node* temp = head;
        for (int i = 0; i < index; i++) {
        temp = temp->next;
        }
        return temp->val;
    }

    void addAtHead(int val) {
        Node* newnode = new Node(val);
        if (head == nullptr) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
        size++;
    }

    void addAtTail(int val) {
        Node* newnode = new Node(val);
        if (head == nullptr) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index > size) {
            return;
        }
        if (index <= 0) { 
            addAtHead(val); 
            return; 
        }
        if (index == size) { 
            addAtTail(val); 
            return; 
        }

        Node* prev = head;
        for (int i = 0; i < index - 1; i++) prev = prev->next;
        Node* newnode = new Node(val);
        newnode->next = prev->next;
        prev->next = newnode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) 
        return;

        Node* todelete;
        if (index == 0) {
            todelete = head;
            head = head->next;
            if (head == nullptr) tail = nullptr;  
        } else {
            Node* prev = head;
            for (int i = 0; i < index - 1; i++) prev = prev->next;
            todelete = prev->next;
            prev->next = todelete->next;
            if (todelete == tail) tail = prev;   
        }
        delete todelete;
        size--;
    }
};