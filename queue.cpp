#include <bits/stdc++.h>
using namespace std;

struct QNode {
	int data;
	QNode* next;
	
};

QNode *front=NULL;
QNode *rear=NULL;

void enQueue(int x){


		// Create a new LL node
	QNode* temp = new QNode;
	temp->data=x;
	temp->next=NULL;
	// If queue is empty, then
	// new node is front and rear both
	if (rear == NULL) {
		front = rear = temp;
		return;
	}

	// Add the new node at
	// the end of queue and change rear
	rear->next = temp;
	rear = temp;
}

	// Function to remove
	// a key from given queue q
void deQueue()
	{
		// If queue is empty, return NULL.
	if (front == NULL)
		return;

	// Store previous front and
	// move front one node ahead
	QNode* temp = front;
	front = front->next;

	// If front becomes NULL, then
	// change rear also as NULL
	if (front == NULL)
		rear = NULL;

	delete (temp);
}
void Display() {
   QNode *temp = front;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}


// Driven Program
int main()
{

	
	enQueue(10);
	enQueue(20);
	deQueue();
	deQueue();
	enQueue(30);
	enQueue(40);
	enQueue(50);
	deQueue();
	Display();
}
// This code is contributed by rathbhupendra

