// Linked List program with corrections
//1/19/2021

#include <iostream>
using namespace std;

struct dog_node
{
	int number_of_dogs; // number of dogs in this node
	dog_node* next_node; // pointer for next node

};

dog_node* linked_list = NULL; //global variable 

void insert_node(int data) //inserts node at beginning of chain
{
	dog_node* temp_node = new dog_node;
	temp_node->number_of_dogs = data;
	temp_node->next_node = linked_list; //not including this will give you a massive memory leak
	linked_list = temp_node;
}

int delete_node()
{
	dog_node* save_ptr = linked_list;
	int number = save_ptr->number_of_dogs;
	delete save_ptr;
	return number;
}

void print_list()
{
	dog_node* temp_node = linked_list; // Visits first node, creates variable temp_node, type of variable is pointer to dog_node*, starting value initialized to linked_list
	while (temp_node != NULL)
	{
		// Code to process the current node (temp_node)
		cout << temp_node-> number_of_dogs << endl;
		temp_node = temp_node->next_node; // Move to the next node
	}
}

int main()
{
	int datapoint;
	cout << "Please enter your data point(s) you would like inserted into the dog linked list. Type \"DONE\" when you are finished.\n";
	while (cin >> datapoint) 
	{
		insert_node(datapoint);
	}
	print_list();
	while (linked_list != NULL)
	{
		delete_node();
	}
	print_list();
}
