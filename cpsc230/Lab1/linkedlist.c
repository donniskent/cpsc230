#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include <stdbool.h>
struct list_t
{
    struct node_t *first; //points to first node
    struct node_t *last; // points to last node
    int size; 
};

struct node_t
{
    struct node_t *next; 
    int data;
};

typedef struct node_t node_t;

list_t *create_list ()
{
    list_t *list = malloc (sizeof(list_t));

    list->first = NULL;
    list->last = NULL;
    list->size = 0;

    return list;
}

void free_list (list_t *list)
{
}

int list_size (list_t *list)
{   
    return list->size;
}

void list_append (list_t *list, int item)
{ /* 
     case 1: empty list 
	- item will be the data found in the first node (list->first->data ultimately equals item) 
	- the first node is also the last node, so first and last should point to the same data
	- the next for first and last will be null
	
	
      case 2: Non-empty list
	- the last 
	- the previous last will point to the new last
	-




*/

struct node_t *new_node = malloc(sizeof(node_t));
new_node->data = item;

if(list-> size == 0) {
list->first = new_node; 
list->last = new_node;
list->size +=1; 
}
else{
list->last->next = new_node; 
printf("last node before append is %d\n", list->last->data);
list->last =  new_node;
printf("last node after append is %d\n", list->last->data);
list->size+=1; 

}

printf("First node is %d\n", list->first->data);
printf("list size is %d\n", list_size(list)); 











}

bool list_insert (list_t *list, int item, int index)
{
   if(index >= list_size(list)) {
   return false;}

	struct node_t *insert = malloc(sizeof(node_t)); 
	insert->data = item; 
  
	if(index = 0) {
   // the new index becomes first, points to the old new index 
   insert->next = list->first;  
   
   
   
   
   }
       if(index != 0 && index != list_size(list) -1) {
       struct node_t *to_be_switched = malloc(sizeof(node_t)); 
	struct node_t *to_be_inserted = malloc(sizeof(node_t));
       to_be_switched = list->first; 
       // for loop to get to the index where the node will be inserted 
	for(int i = 0; i < index; i++) {  // need to figure out where we start/ finish
	to_be_switched = to_be_switched->next; // will use the next pointer of (current index -1) to get to current index
	}
	
       
       
       
       
       
       
       }





	return false;







}

bool list_remove (list_t *list, int index)
{  // cases: 
   // 1. index 0 
   // 2. middle index 
   // 3. last index
   

 // case 1: 
 // need to remove first index, its pointer becomes first. Thats it
 //
 // case 2: 
 // one index before the target needs to point to targets next
 // remove target 
 //
 // case 3: 
 // remove the target, the index pointing to target needs to point to null. 
 	if(index >= list_size(list)) {
	return false; } 
	if(index == 0) {
	list->first = list->first->next; 
	list->size -= 1;
	return true; 	
	
	
	
	}











}

int list_find (list_t *list, int item)
{ 	// loop through each of the nodes, if its not ther, move to its pointer 
	if(list_size(list) < 1) {
	return -1; }
	struct node_t *current = malloc(sizeof(node_t)); 
	current = list->first; 
	for(int i = 0; i < list_size(list); i++) { 
	if(current->data == item) {
	return i; 
	}
	current = current->next; 
	
	
	
	
	
	
	
	}	

						
    return -1;
}

int list_get (list_t *list, int index)
{  // make sure index is legal
	if(index >= list_size(list)) {
	return -1; }
	

	// need to get to that node in the chain by using for loop. 
	// If they are looking for index 0, that will be outside the loop; 
	if(index == 0) {
	return list->first->data;}	
	// if the index > 0, we need a placeholder node pointer to hold the data as we work through the list 
	struct node_t *holder = malloc(sizeof(node_t)); 
	holder = list->first->next; 
	for(int i= 1; i< index; i++) {
	holder = holder->next;
			
			
			}  
	//
	//
	//
	//
	//
	//
	printf("holder data is %d\n", holder->data);
	return holder->data; 
}

