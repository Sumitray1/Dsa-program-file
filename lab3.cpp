#include<iostream>
#include<conio.h>
#define max 5
using namespace std;

class queue {
	int qu[max], front, rear, data;
public:
	queue()
	{
		front = 0;
		rear = -1;
	}
	void enqueue();
	void dequeue();
	void display();
};

void queue::enqueue() {
	if (rear == max - 1) {
		cout << "\nOverflow.";
	}
	else {
		cout << "\nEnter the element : " << endl;
		cin >> data;
		rear++;
		qu[rear] = data;
	}
    
}

void queue::dequeue() {
	if (rear < 0) {
		cout << "\nUnderflow." << endl;
	}
	else {
		data = qu[front];
		for (int i = 0; i < rear; i++ )
		{
			qu[i] = qu[i + 1];
		}
		rear--;
	}
}

void queue::display() {
	if (rear == -1) {
		cout << "\nQueue empty." << endl;
	}
	else {
        cout << "entered data" << endl;
		for (int i = 0; i <= rear; i++)
		{

            cout << qu[i]<<endl;
        }
	}
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
default:break;
}
}
return 0;
 }