#include <stdio.h>

struct node {
	int val;
	struct node *next;
};

struct node *create(int x);
struct node *build(int x);

void del(struct node **head, int ele);

void printlist(struct node *head);


void addbeg(struct node **head, int x);
void addmid(struct node **head, int x);
void addend(struct node **head, int x);
void addpos(struct node **s, int x, int p);

void concat(struct node **a, struct node **b);

int len(struct node *a);

int main() {
	
	struct node *head1, *head2;
	
	head1 = create(6);
	head2 = create(3);
	
/*	addbeg(&head1, 9);*/
/*	addmid(&head1, 9);*/
/*	addend(&head1, 9);*/
/*	addpos(&head1, 0, 3);*/
	
/*	del(&head1, 2);*/

/*	concat(&head1, &head2);*/
	
	printlist(head1);
	
	return 0;
}

struct node *create(int x){
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

struct node *build(int x){
	struct node *s;
	s = malloc(sizeof(struct node));
	s -> val = x;
	s -> next = NULL;
	return s;
}

void del(struct node **head, int ele){
	struct node *cur, *prev = *head;
	cur = prev -> next;
	if(prev -> val == ele){
		*head = prev -> next;
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
}

void printlist(struct node *head){
	struct node *t = head;
	while(t != NULL){
		printf("%d ", t -> val);
		t = t -> next;
	}
}

void addbeg(struct node **head, int x){
	struct node *a;
	a = build(x);
	a -> next = *head;
	*head = a;
}

void addmid(struct node **head, int x) {
	struct node *a, *b = *head;
	int i = 0, j = len(*head)/2;
	a = build(x);
	while (b != NULL && i < j){
		if (i+1 == j)){				
			a -> next = b -> next;
			b -> next = a;
		}
		i++;
		b = b -> next;
	}
}

void addend(struct node **head, int x) {
	struct node *a, *b = *head;
	a = build(x);
	while (b -> next != NULL)
		b = b -> next;
	b -> next = a;
}

void addpos(struct node **s, int x, int p){
	struct node *a, *t = *s;
	int i = 0;
	a = build(x);
	if(p == 0){
		addbeg(s, x);
	}
	else{
		while(t -> next != NULL){
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
}

void concat(struct node **a, struct node **b){
	struct node *s = *a;
	while(s -> next != NULL)
		s = s -> next;
	s -> next = *b;
}

int len(struct node *a){
	int i = 0;
	while(a != NULL){
		i++;
		a = a -> next;
	}
	return i;
}
