#include<iostream>
using namespace std;

#define max 3




class Queue {

    private:
        int head,tail,choice;
        int quesize;
        int QueArray[10];


    public:

        void Enqueue(){

            cin>>QueArray[front];



        };
        void Dequeue(){

        };
        void peak(){

        };
        void isFull(){

        };
        void isEmpty(){

        };
        void emptyQueue(){

        };
        void DisplayQueue(){

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
                        cout<<"Enter a number to Enque";
                        Enqueue();
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

            Operations();

            
        }
    
    

};




int main(){

    Queue q1(10);
    return 0;



}





