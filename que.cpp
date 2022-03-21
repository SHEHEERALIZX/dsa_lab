#include<iostream>
using namespace std;

#define max 3




class Queue {

    private:
        int front,rear,choice;
        int quesize;
        int QueArray[10];


    public:

        int Enqueue(int item){

            if (isEmpty()){

                front = rear = 0;
                
                QueArray[rear] = QueArray[front] = item;

            } else {
                rear++;
                QueArray[rear] = item;
            }




        };
        void Dequeue(){

            if(isEmpty()){
                cout<<"Que is EMPTY\n";
            } else {

                cout<<QueArray[front]<<" is Dequed\n";

                front++;

            }

         

        };
        void peak(){

            if(isEmpty()){
                cout<<"Que is EMPTY\n";
            } else {
                cout<<QueArray[front]<<" is the Peak value\n";


            }

            

        };
        void isFull(){

        };
        bool isEmpty(){

            if(front == -1 && rear == -1 ){
                return true;
            }
            else {
                return false;
            }

        };
        void emptyQueue(){
            cout<<"Queue is Wiped out\n";
            front = rear = -1;

        };
        void DisplayQueue(){

        
            for(int i = front;i<=rear;i++){
                cout<<QueArray[i]<<endl;
            }

        };

        int Operations(){

                int item;
                    
                do {

                cout<<" 1 for Enqueue\n 2 for Dequeue\n 3 for Check Queue is full\n 4 for Check for Queue isEmpty\n";
                cout<<" 5 for Display the Peak Value\n 6 for Empty the Queue\n 7 for Display Queue\n 0 for quit Queue\n";
                cout<<"Enter your Choice : ";
            
                cin>>choice;


                switch(choice){
                    case 1 :
                        cout<<"Enter a number to Enque : ";
                        cin>>item;
                        Enqueue(item);
                        break;

                    case 2 :
                        Dequeue();
                        break;

                    case 3 :
                        isFull();

                        break;

                    case 4 :
                        isEmpty();
                        break;

                    case 5 :
                        peak();
                        break;

                    case 6 :
                        emptyQueue();
                        break;    

                    case 7 :
                        DisplayQueue();
                        break; 

                           

                    default:
                        if (choice == 0 ){
                            cout<<"Thanks for using Queue\n";
                            return 0 ;
                        }else{
                        cout<<"Invalid Expression Try again\n";   

                        }
                    }
                } while(0<1);

            }

        


        Queue(int size){

            quesize = size;

            front = rear = -1;

            Operations();

            
        }
    
    

};




int main(){

    Queue q1(10);
    return 0;



}





