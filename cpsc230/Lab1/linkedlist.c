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

void free_list (list_t *list) {
	node_t *current = malloc(sizeof(node_t)); 
	
	
	
}




int list_size (list_t *list)
{   
    return list->size;
}

void list_append (list_t *list, int item)
{ 

struct node_t *new_node = malloc(sizeof(node_t));
new_node->data = item;
new_node->next = NULL; 
if(list-> size == 0) {
list->first = new_node; 
list->last = new_node;
list->size +=1; 
}
else{
list->last->next = new_node; 

list->last =  new_node;
list->size+=1; 

}
 


 








}

bool list_insert (list_t *list, int item, int index)
{
   if(index >= list_size(list)) {
   return false;}

	struct node_t *insert = malloc(sizeof(node_t)); 
	insert->data = item; 
	insert->next = NULL; 
	if(index < 0) {
	return false;}
      if(index > (list_size(list) -1)){
      return false; }	



	if(index == 0) { 
   insert->next = list->first;  
  list->first = insert; 
 list->size +=1 ; 
	 return true;
   
   
   
   }
	else  {
       struct node_t *to_be_switched = malloc(sizeof(node_t));  
      to_be_switched->next = NULL;
       to_be_switched = list->first; 
	for(int i = 2; i <=  index; i++) {  
	to_be_switched = to_be_switched->next; 
	
	}
	insert->next = to_be_switched->next; 
	to_be_switched->next = insert; 
       list->size+=1; 
      
      return true; 
       
       
       
       }





	return false;







}

bool list_remove (list_t *list, int index)
{  
     

 	
	node_t *current = malloc(sizeof(node_t)); 
	current->next = NULL;
	current = list->first; 

	if(index >= list_size(list)) {
	return false; } 


	if(index == 0) {
	list->first = list->first->next; 
	list->size -= 1;
	return true; 	
	
	
	
	}

	else if(index ==( list_size(list)-1)) {
	for(int i = 1; i < index; i++) {
	current= current->next; 
	
	}
	current->next = NULL; 
	
	
	
	}




	else{
	for(int i = 1; i < index; i++) {
	current = current->next; 
	
	}
	current->next = current->next->next;
	list->size-=1; 
	return true;
	
	}









}

int list_find (list_t *list, int item)
{ 	
	if(list_size(list) < 1) {
	return -1; }
	struct node_t *current = malloc(sizeof(node_t)); 
	current->next = NULL; 
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
{  	if(index >= list_size(list)) {
	return -1; }
	

	
	if(index == 0) {
	return list->first->data;}	
		struct node_t *holder = malloc(sizeof(node_t)); 
	holder->next = NULL; 
	holder = list->first->next; 
	for(int i= 1; i< index; i++) {
	holder = holder->next;
			
			
			}  
	return holder->data; 
}

