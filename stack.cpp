#include<iostream>
using namespace std;

#define max 3
int Stack[max],top=-1;

void push();
void pop();
void display();
void isEmpty();
void peek();
void emptyStack();

int main(){



    int choice;

    do {

    cout<<"Enter your Choice : ";
    cin>>choice;

    // temp = choice;

    switch(choice){
        case 1 :
            push();
            break;

        case 2 :
            pop();
            break;

        case 3 :
            display();
            break;

        case 4 :
            isEmpty();

            break;

        case 5 :
            peek();
            break;

        case 6 :
            emptyStack();
            break;    

        default:
            if (choice == 0 ){
                cout<<"Thanks for using Stack\n";
                return 0 ;
            }else{
            cout<<"Invalid Expression Try again\n";   

            }
        }
    } while(0<1);


    return 0 ;

}





void push(){
    top++;
    cout<<"Enter the Element : ";
    cin>>Stack[top];
    cout<<Stack[top]<<" ";
    cout<<top<<endl;

}
void pop(){

    if(top!=-1){
            cout<<Stack[top]<<" is removed from the Stack.";
    top--;

    }else {
        // emptyStack();
        cout<<"Stack Empty\nYou Cant Pop out anything\n";
    }



}
void display(){

    int i;

    if(top!=-1){
            cout<<"Values inside the Stack \n";
            for (i = top;i >=0;i--){
                cout<<Stack[i]<<endl;
            }

    }else{
        cout<<"Stack is Empty\n";
        }     
    

}

void isEmpty(){

    if(top==-1){
        cout<<"Stack is Empty\n";

    }else {
        cout<<"Stack is not Empty\n";
    }

}
void peek(){

    if(top!=-1){
    cout<<Stack[top]<<" is the peak value.";
    }
    else {
        isEmpty();
    }



}

void emptyStack(){
    top = -1;
    cout<<"Stack Empty Operation Completed\n";
}