#include<iostream>
using namespace std;

class C_Que{
    private:
        int cque[5],front,rear,n;

    public:
        void Enque(int val ){

            if((front==0&&rear==n-1) || (front==rear+1)){
                cout<<"Que Overflow \n";
                return ;
            }

            if(front==-1){
                front=rear=0;
            } else {
                if(rear==n-1){
                    rear=0;
                } else {
                    rear++;
                }
            }

            cque[rear] = val;

        }  


        void Deque(){
            if(front==-1){
                cout<<"Que UnderFlow\n";
                return;
            }
            cout<<"Element Deleted from QUE is "<<cque[front]<<endl;

                 if (front == rear){
                       
                        front = -1;
                        rear = -1;

                 }
                    else if (front == n-1)
                        front = 0;
                    else
                        front++;

        };
        void displaycq()
        {
            int f=front,r=rear;
            if(front==-1)
            {
                cout<<"Queue is empty"<<endl;
                return;
            }
            cout<<"Queue elements are : \n";
            if(f<=r)
            {
                while(f<=r)
                {
                    cout<<cque[f]<<" ";
                    f++;
                }
            }
            else
            {
                while(f<=n-1)
                {
                    cout<<cque[f]<<" ";
                    f++;
                }
                f=0;
                while(f<=r)
                {
                    cout<<cque[f]<<" ";
                    f++;
                }
            }
            cout<<endl;
        }


        C_Que(){
            front = rear = -1,
            n=5;

        }

};

int main(){

    C_Que cq;

    int ch,val;
    cout<<"1) Insert "<<endl;
    cout<<"2) Delete "<<endl;
    cout<<"3) Display "<<endl;
    cout<<"4) Exit "<<endl;
    do
    {
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"Input for insertion : "<<endl;
            cin>>val;
            cq.Enque(val);
            break;

            case 2:
            cq.Deque();
            break;

            case 3:
            cq.displaycq();
            break;

            case 4:
            cout<<"Exit\n";
            break;
            default:cout<<"Incorrect!\n";
        }
    } while (ch!=4);
    return 0;
}

