#include <iostream>
#define MAX 5
using namespace std;

class Stack
{

private:
int top;
int stck[MAX];
int data;
public:
Stack(){

top -1;
}
void push()
{

if (top== MAX- 1){

    cout << "Stack Overflow" << endl;
}else
{

int data;
top += 1;
cout << "Enter the data:"<<endl;
cin>>data;
stck[top]=data;
}
}

void pop()
{
if (top==- 1
){
    cout <<"Stack Underflow"<< endl;
}
else
{

cout << stck[top] << endl;
top-=1;
}
}
void display(){

if (top==-1)
{


cout << "Stack is Empty"<< endl;
}
else{
for (int i = 0;i<top;i++){
    {
        cout << stck[top] << endl;
    }
}
}
}
};
int main(){
Stack s;
bool dec = true;
int menu;

while(dec){


cout<<
"Main Menu" << endl
<<"1. Push" << endl
<<"2. Pop" << endl
<<"3. Display" << endl
<<"4. Exit" << endl
<<endl;
cin >> menu;

switch (menu){

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
dec=false;

break;
default:break;
}
}
return 0;
 }

