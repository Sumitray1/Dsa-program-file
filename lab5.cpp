#include<iostream>
#include<conio.h>
#define max 5
using namespace std;

class queue {
	int qu[max], front, rear, data;
public:
	queue()
	{
		front = -1;
		rear =-1;
	}
	void enqueue();
	void dequeue();
	void display();
};

void queue::enqueue() {
	if (rear == - 1) {
        front = 0;
        rear = 0;
        cout << "\n Enter the data"<<endl;
        cin >> data;
        qu[rear]= data;
    }
	else {
        if((rear+1)%max==front){
        cout<<"Queueue overflow"<<endl;

        }
        else{

		rear=(rear+1)%max;
        cout<<"Enter the data in queue" <<endl;
		cin >> data;
		qu[rear] = data;
        }
	}
    
}

void queue::dequeue() {
	if (front==-1) {
		cout << "\n Queue Underflow." << endl;
	}
	else {
		data = qu[front];
        cout << "Data removed is " << data<<endl;
       if(front==rear){
        front = -1;
        rear = -1;
       }
		
    else{
        front = (front + 1) % max;
    }
	}
}

void queue::display(){
    int i = front;
    cout<<"Your entered data are: "<<endl; 
    do
    {
    cout <<qu[i]<<"";
    i = (i + 1) % max;
    } while (i!=(rear+1)%max);
    
}
int main(){
queue q;
bool dec = true;
int menu;

while(dec){


cout<< "Main Menu" << endl
<<"1. Equeue" << endl
<<"2. Dequeue" << endl
<<"3. Display" << endl
<<"4. Exit" << endl
<<endl;
cin >> menu;

switch (menu){

case 1:
q.enqueue();
break;
case 2:
q.dequeue();
break;
case 3:
q.display();    
break;
case 4:
dec=false;

break;
default:
break;
}
}
return 0;
 }