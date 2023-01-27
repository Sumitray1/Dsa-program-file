#include<iostream>
#include<conio.h>

using namespace std;

class node {
    public:
        int info;
        node *next;
};
class stack {
        int data;
        public:
            
            node *top;
            node *newnode;
            stack()
            {
                top = NULL;
        }
        void push();
        void pop();
        void display();
};
void stack::push(){
    newnode = new node;
    if(newnode == NULL){
            cout << "MEMORY FULL" <<endl;
    }
    else{
            cout << "enter the data " << endl;
            cin >> data;
            newnode->info = data;
            newnode->next =top;
            top=newnode;
    }

}
void stack::pop(){
      
    if(top == NULL){
            cout << "MEMORY EMPTY" << endl;
}
else{
          
            node *temp;
            temp = top;
            data = temp->info;
            cout<<"pop items:"<< data<<endl;
            top = temp->next;
            free(temp);
            
}
}

void stack::display(){
           
            node *temp;
            temp = top;
            cout << "Data in memory are:" << endl;

            while(temp != NULL){
                cout<<temp->info<< "\n"<<endl;
                temp=temp->next;
            }
}

int main(){
            stack s;
            bool dec = true;
            int menu;

            while (dec)
            {

                cout << "Main Menu" << endl
                << "1. push" << endl
                << "2. pop" << endl
                << "3. Display" << endl
                << "4. Exit" << endl
                << endl;
                cin >> menu;

                switch (menu)
                {

                case 1:
                    s.push();
                    break;
                case 2:
                    s.pop();
                    break;
                case 3:
                    s.display();
                    break;
                case 4:
                    dec = false;

                    break;
                default:
                    break;
                }
}
return 0;
 }