/* reverse a string using stack 
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int MAX=100;
struct node{
	char data;
	node *ptr;
};

node *top=NULL;

bool isEmpty(){
	if (top==NULL)
	return true;
	else
	return false;	
}


void peek(){
	if(isEmpty())
	cout<<"empty"<<endl;
	else
	cout<<top->data;
}

void push(char a){
	node *temp=new node;
	temp->data=a;
	temp->ptr=top;
	top=temp;
}

char pop(){
	if (top==NULL)
	cout<<"empty"<<endl;
	else{
		node *temp=top;
		top=top->ptr;
		return temp->data;
		delete temp;
	}
}

void display(){
	if(isEmpty())
	cout<<"empty"<<endl;
	else{
	node *temp=top;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->ptr;
	}
}
}

int main(){
    char str[MAX];
    cout<<"Input a string: ";
    cin>>str;
    
    for(int i=0;i<strlen(str);i++)
        push(str[i]);
        
    for(int i=0;i<strlen(str);i++)
        str[i]=pop();

    cout<<"Reversed String is:\n"<<str;
    
    return 0;
}
 
*/

//infix to postfix conversion

/* C++ implementation to convert
infix expression to postfix*/
/*
#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int prec(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

// The main function to convert infix expression
// to postfix expression
void infixToPostfix(string s)
{

	stack<char> st; // For stack operations, we are using
					// C++ built in stack
	string result;

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];

		// If the scanned character is
		// an operand, add it to output string.
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
			result += c;

		// If the scanned character is an
		// ‘(‘, push it to the stack.
		else if (c == '(')
			st.push('(');

		// If the scanned character is an ‘)’, pop and to output string from the stack
		// until an ‘(‘ is encountered.
		else if (c == ')') {
			while (st.top() != '(') {
				result += st.top();
				st.pop();
			}
			st.pop();
		}

		// If an operator is scanned
		else {
			while (!st.empty()
				&& prec(s[i]) <= prec(st.top())) {
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
	}

	// Pop all the remaining elements from the stack
	while (!st.empty()) {
		result += st.top();
		st.pop();
	}

	cout << result << endl;
}


int main()
{
	string exp = "a+b*(c^d-e)^(f+g*h)-i";

	// Function call
	infixToPostfix(exp);
	return 0;
}
*/

//postfix expression evaluation
/*
#include<bits/stdc++.h>
using namespace std;

// Function to evaluate the postfix expression
int evaluatePostfixExpression(string expression) {
    // Defining an stack of integer type.
    stack<int> st;

    // Traversing in the expression from left 
    // to right. 
    for (int i = 0; i < expression.length(); i++){
        char c = expression[i];

        // If 'c' is a digit (operand)
        if (c >= '0' && c <= '9'){
            // Convert 'c' in integer and
            // push it into the stack.
            int temp = (int)(c - '0');
            st.push(temp);
        }
        // Otherwise it is an operator.
        else{
            // Pop element from the stack.
            int op1 = st.top();
            st.pop();
            // Pop another element from the stack. 
            int op2 = st.top();
            st.pop();

            // Use the switch case to deal with
            // the operand accordingly.
            switch(c){
                case '+':
                    st.push(op2 + op1);
                    break;
                case '-':
                    st.push(op2 - op1);
                    break;
                case '*':
                    st.push(op2 * op1);
                    break;    
                case '/':
                    st.push(op2 / op1);
                    break;
            }
        }
    }
    
    // Return the element at the top 
    // of the stack.
    return st.top();
}

// Main function
int main() {

    // Postfix expression.
    string expression = "23*45+*";

    // Calling function to find the result
    // of the postfix expression.
    cout <<evaluatePostfixExpression(expression) << endl;
}
*/


