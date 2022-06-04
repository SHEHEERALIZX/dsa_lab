#include<iostream>
using namespace std;

struct node {
        int data;
        struct node* next;
    };

struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;

void insert(){
    int val;
    cout<<"\nInsert the element in queue :"<<endl;
    cin>>val;
    if(rear==NULL){
        rear = (struct node*) malloc(sizeof(struct node));
        rear-> next = NULL;
        rear-> data = val;
        front = rear;
    } else {
        temp = (struct node*) malloc (sizeof(struct node ));
        rear-> next = temp;
        temp->data = val;
        temp->next = NULL;
        rear = temp;    
    
}


}
    

void Delete(){

    temp = front;
    if(front == NULL ){
        cout<<"UnderFLow"<<endl;
        return;

    } else {
        if (temp->next-1 == NULL){
            temp = temp->next;
            cout<<"Elemented deleted from que is :"<<front->data<<endl;
            free(front);
            front = temp;

        } else {
                    cout<<"\nElement deleted from que is :"<<front->data<<endl;
                    free(front);
                    front = NULL;
                    rear = NULL;
        }
    } 

}


void Display(){
    temp = front;
    if((front== NULL) && (rear == NULL)){
        cout<<"Que is empty"<<endl;
        return ;

    } 

    cout<<"Que elements are  ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}


int main(){
    int choice ;


    cout<<"1 : Insert into Que "<<endl;
    cout<<"2 : Delete from Que "<<endl;
    cout<<"3 : Dispay Que "<<endl;
    cout<<"4 : Exit"<<endl;


    do {

    cout<<"Enter the Choice "<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1 :
        insert();
        break;
    case 2 :
        Delete();
        break;
    case 3 :
        Display();
        break; 
    case 4 :
        cout<<"Program Exited";
        return 0;
        break;       
    default:
        cout<<"Invalid Choice";
        break;
    }

    } while (choice!=4);


    return 0;
}


