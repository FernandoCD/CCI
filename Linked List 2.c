#include <stdio.h>

struct node {
	int val;
	struct node *next;
};

struct node *create(int x);
void printlist (struct node *head);
struct node *dele (struct node *head, int ele);

/*void addbeg(struct node **head, int x);*/
/*void addmid(struct node **head, int x);*/
/*void addend(struct node **head, int x);*/
struct node *addpos(struct node *s, int x, int p);

struct node  *concat(struct node *a, struct node *b);

/*int len(struct node *a);*/

int main() {
	
	struct node *head1, *head2;
	
	head1 = create(6);
	head2 = create(3);
	
/*	addbeg(&head1, 1);*/
/*	addmid(&head1, 9);*/
/*	addend(&head1, 7);*/
	
	
/*	head1 = dele(head1, 0);*/
	
/*	concat(head1, head2);*/
	
	printlist(head1);
	
	return 0;
}

struct node *create(int x){
	struct node *head, *prev, *cur;
	int i;
	
	head = malloc(sizeof(struct node));
	head ->val = 1;
	prev = head;
	for(i = 2; i <= x; i++){
		cur = malloc(sizeof(struct node ));
		cur -> val = i;
		prev -> next = cur;
		prev = cur;
	}
	prev -> next = NULL;
	return head;
}

void printlist (struct node *head){
	struct node *t = head;
	while(t != NULL){
		printf("%d ", t -> val);
		t = t -> next;
	}
}

struct node *dele(struct node *head, int ele){
	struct node *prev, *cur;
	
	prev = head;
	cur = head -> next;
	
	if(head -> val == ele){
		head = head -> next;
		free(prev);
	}
	else{
		while (cur != NULL){
			if (cur -> val == ele){
				prev -> next = cur -> next;
				free(cur);
				break;
			}
			prev = cur;
			cur = cur -> next;
		}
	}
	return head;
}

/*void addbeg(struct node **head, int x){*/
/*	struct node *a;*/
	
/*	a = malloc(sizeof(struct node));*/
/*	a -> val = x;*/
/*	a -> next = *head;*/
	
/*	*head = a;*/
/*}*/


/*void addmid(struct node **head, int x) {*/
/*	struct node *a, *b = *head;*/
/*	int i = 0;*/
	
/*	a = malloc(sizeof(struct node));*/
/*	a -> val  = x;*/
	
/*	while (b != NULL & i < (len(*head)/2)){*/
/*		if (i+1 == (len(*head)/2)){*/
/*			a -> next = b -> next;*/
/*			b -> next = a;*/
/*		}*/
/*		i++;*/
/*		b = b -> next;*/
/*	}*/
/*}*/

/*void addend(struct node** head, int x) {*/
/*	struct node* a, *b = *head;*/
	
/*	a = malloc(sizeof(struct node));*/
/*	a -> val  = x;*/
/*	a -> next = NULL;*/
	
/*	while (b -> next != NULL)*/
/*		b = b -> next;*/
/*	b -> next = a;*/
/*}*/

struct node *addpos(struct node *s, int x, int p){
	struct node *a, *t;
	int i = 0;
	
	a = malloc(sizeof(struct node));
	a -> val = x;
	a -> next = NULL; 
	
	while(t != NULL && i < p){
		if(i+1 == p){
			a -> next = t -> next;
			t -> next = a;
		}
		t = t -> next;
		i++;
	}
	return s;
}

struct node  *concat(struct node *a, struct node *b){
	struct node  *p = a;
	while(p -> next != NULL)
		p = p -> next;
	p -> next = b;
	return a;
}

/*int len(struct node *a){*/
/*	int i = 1;*/
/*	while(a != NULL){*/
/*		i++;*/
/*		a = a -> next;*/
/*	}*/
/*	return i;*/
/*}*/

