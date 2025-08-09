#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* next;
};

void show(Node* head){

//  Node* temp = new Node(); // Node* temp = (Node*) malloc(sizeof(struct Node));
 Node* current = head;

 while(current !=NULL){
    cout<<current->data<<" ";
    current = current->next;
 }
 cout<<"\n";
}

struct Node* head;

int main(){
    head = NULL;

    //create first new node 
    Node* temp = new Node();
    temp->data = 2;
    temp->next = NULL;
    head = temp;

     //create 2nd  node 
    Node* temp2 = new Node();
    temp2->data = 7;
    temp2->next = NULL;
    head->next = temp2;  // Link first node to second
    
    show(head);

    return 0;
}