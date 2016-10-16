#include <stdio.h>

struct node {
	int val;
	struct node *next;
};

struct node *create (int x);
struct node *build (int x);

void printlist (struct node *head);

struct node *dele (struct node *head, int ele);

struct node *addbeg (struct node *head, int x);
struct node *addmid (struct node *head, int x);
struct node *addend (struct node *head, int x);

struct node *addpos (struct node *s, int x, int p);

struct node *concat (struct node *a, struct node *b);

int len (struct node *a);

int main() {
	
	struct node *head, *head2;
	
	head = create(5);
	head2 = create(4);
	
/*	head = addbeg(head, 0);*/
/*	head = addmid(head, 0);*/
/*	head = addend(head, 0);*/	
/*	head = addpos(head, 9, 2);*/
	
/*	head = dele(head, 2);*/
	
/*	head = concat(head, head2);*/
	
	printlist(head);
	
	return 0;
}

struct node *create (int x){
	struct node *head, *prev, *cur;
	int i;
	head = build(1);
	prev = head;
	for(i = 2; i <= x; i++){
		cur = build(i);
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

struct node *dele (struct node *head, int ele){
	struct node *cur, *prev = head;
	cur = head -> next;
	if (head -> val == ele){
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
		if(cur == NULL)
			printf("No se encuentra el número %d \n", ele);
	}
	return head;
}

struct node *addbeg (struct node *head, int x){
	struct node *a;
	a = build(x);	
	a -> next = head;
	head = a;
	return head;
}

struct node *addmid(struct node *head, int x) {
	struct node *a, *b = head;
	int i = 0;
	a = build(x);
	if ((len(head)%2 == 0)) {
		while (b -> next != NULL && i < (len(head)/2)){
			if (i+1 == (len(head)/2)){
				a -> next = b -> next;
				b -> next = a;
			}
			i++;
			b = b -> next;
		}
	}
	else{
		while (b -> next != NULL && i < ((len(head)+1) / 2)){
			if (i+1 == ((len(head)/2) + 1)){
				a -> next = b -> next;
				b -> next = a;
			}
			i++;
			b = b -> next;
		}
	}
	return head;
}

struct node *addend(struct node *head, int x) {
	struct node *a, *b = head;
	a = build(x);
	while (b -> next != NULL)
		b = b -> next;
	b -> next = a;
	return head;
}

struct node *addpos (struct node *s, int x, int p){
	struct node *a, *t = s;
	int i = 0;
	a = build(x);
	if(p == 0){
		s = addbeg(s, x);
	}
	else{
		while (t -> next != NULL && i < p){
			if(i+1 == p){
				a -> next = t -> next;
				t -> next = a;
				break;
			}
			t = t -> next;
			i++;
		}
		t -> next = a;
	}
	return s;
	
}

struct node *concat (struct node *a, struct node *b){
	struct node  *p = a;
	while (p -> next != NULL)
		p = p -> next;
	p -> next = b;
	return a;
}

int len(struct node *a){
	int i = 0;
	while(a != NULL){
		i++;
		a = a -> next;
	}
	return i;
}
