// #include<iostream>
// using namespace std;


// // void insert(int)

// struct Node {


//     int data;
//     Node* left;
//     Node* right;

// };


// struct Node* root;

// void insertElement(int val,Node* root){

//     if(root == NULL){
//          root = (struct Node*) malloc(sizeof(struct Node));
//          root->data = val ;
//         // return;
//     } 

//     // if (root)

// };


// int main(){





//     try {

    

//     root = (struct Node*) malloc(sizeof(struct Node));

//     root->data=5;
//     root->left->data=5;



//     cout<<root->data<<" "<<root<<endl;
//     cout<<root->left;


//     } catch(int num) {

//           cout << "Access denied - You must be at least 18 years old.\n";


//     }


// }



// #include <iostream>
// // #include<conio.h>
// using namespace std;
// int main()
// {
//     int a=10,b=0,c;
//     c=a/b;
//     return 0;
// }



#include <iostream>
// #include<conio.h>
using namespace std;
int main()
{
    int a=10, b=0, c;
    // try block activates exception handling
    try 
    {
        if(b == 0)
        {
            // throw custom exception
            throw "Division by zero not possible";
            c = a/b;
        }
    }
    catch(char ex) // catches exception
    {
        cout<<ex;
    }
    return 0;
}