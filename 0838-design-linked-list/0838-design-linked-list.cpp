class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;

        Node() { next = NULL; }
        Node(int value, Node* n = 0) {
            val = value;
            next = n;
        }
    };
    Node* head;

public:
    MyLinkedList() { head = 0; }

    int get(int index) {
        int count = 0;
        if (head) {
            Node* temp = head;
            while (temp) {
                if (count == index) {
                    return temp->val;
                }
                temp = temp->next;
                count++;
            }
            return -1;
        } 
        return -1;
    }

    void addAtHead(int val) {
        Node* temp = head;
        head = new Node(val, temp);
    }

    void addAtTail(int val) {
        if (head) {
            Node* tail = head;
            while (tail->next) {
                tail = tail->next;
            }
            Node* temp = tail;
            tail = new Node(val, 0);
            temp->next = tail;
        }
        else {
            head = new Node(val,0);
        }
    }

    void addAtIndex(int index, int val) {
        if (index == 0) { addAtHead(val); return; }
        if (!head) return;
        if (head) {
            Node* temp = head;
            int count = 0;
            int size =0;
            for(Node* i = head;i;i = i->next){
                size++;
            }
            if(index > size){return ;}
            while (temp) {
                if (count + 1 == index) {
                    Node* toAdd = new Node(val, temp->next);
                    temp->next = toAdd;
                    break;
                }
                count++;
                temp = temp->next;
            }
            if (count == index && !temp) {
                addAtTail(val);
            }
        }
        
    }

    void deleteAtIndex(int index) {
        if (head) {
            Node* temp = head;
            if(index == 0){
                head = head->next;
                delete temp;
                return;
            }
            int count = 0;
            while (temp) {
                if (count + 1 == index) {
                    Node* toDelete = temp->next;
                    if(temp->next)
                        temp->next = temp->next->next;
                    else
                        temp->next =0;
                    delete toDelete;
                    break;
                }
                count++;
                temp = temp->next;
            }
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */