#include <stdio.h>

struct node {
	int val;
	struct node *next;
};

struct node *create(int x);
struct node *build (int x);
void printlist (struct node *head);
struct node *dele (struct node *head, int ele);

struct node *addbeg(struct node *head, int x);
struct node *addpos(struct node *s, int x, int p);

void concat(struct node **a, struct node **b);

int main() {
	
	struct node *head, *head2;
	
	head = create(6);
	head2 = create(3);

	head = addbeg(head, 2);
	head = addpos(head,5, 2);
	
	head2 = addbeg(head2, 5);
	head2 = addpos(head2, 3, 3);
	
	/*head = dele(head, 1);*/
	
	/*concat(&head, &head2);*/
	
	printlist(head);
	
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

struct node *build (int x){
	struct node *s;
	s = malloc(sizeof(struct node));
	s -> val = x;
	s -> next = NULL;
	return s;
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

struct node *addbeg(struct node *head, int x){
	struct node *a;
	a = build(x);	
	a -> next = head;
	head = a;
	return head;
}

struct node *addpos(struct node *s, int x, int p){
	struct node *a, *t = s;
	int i = 0;
	a = build(x);
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

void concat(struct node **a, struct node **b){
	struct node *s = *a;
	while(s -> next != NULL){
		s = s -> next;
	}
	s -> next = *b;
}

