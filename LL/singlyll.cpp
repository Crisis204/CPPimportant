#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // Constructor
    Node(int d)
    {
        this->data = data;
        this->next = NULL;
    }
    // To inset in head
    void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
// TO print 
    void print(Node* &head ){
        Node*head=temp;
        while (temp!=NULL)
        {
            cout<<temp<<endl;
            temp=temp->next;

        }cout<<endl;

        
    }

    };
    

int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    Node*head=node1;
    
insertAtHead (head,12);
print (head);


}
