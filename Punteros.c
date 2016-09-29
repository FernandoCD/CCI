#include <stdio.h>

void strcatp(char *s, char *t);

int strend(char *s, char *t);

char *strncpy1 (char *s, char *t, int n);
char *strncat1 (char *s, char *t, int n);
int strncmp1 (char *s, char *t, int n);

int getline (char *s);
int atoi (char *s);
void itoa (int s, char *t); 
void reverse (char *s);
int strindex (char *s,char *t);

int main() {
	char a[] = "Fern";
	char b[] = "ando";
	char c[] = "12";
	char d[] = "d";
	char e[100];
	int f = 48;
	
	/*strcatp(a, b);
	printf("%s", a);*/
	
	/*printf("%d", strend(a, b));*/
	
	/* *strncpy1 (a, b, 3);
	printf("%s", a);*/
	
	/*printf("%d", strncmp1(a, b, 2));*/
	
	/*printf("%d", atoi(c));*/
	
	/*itoa(f,e);
	printf("%s", e);*/
	
	/*printf("%d", strindex(b, d));*/
	
	/*reverse(a);
	printf("%s", a);*/

	return 0;
}

/*void strcatp(char *s, char *t) {
	while(*s != '\0')
		s++;
	while((*s++ = *t++) != '\0')
		;
}*/

/*int strend(char *s, char *t) {
	char *t2 = t;
	while(*s != '\0')
		s++;
	while(*t != '\0')
		t++;
	while(t >= t2) 
		if(*t-- != *s--)     
			return 0;
	return 1;
}*/

/*char *strncpy1 (char *s, char *t, int n) {
	int i = 0;
	while(i++ < n)
		*s++ = *t++;
}*/

/*char *strncat1 (char *s, char *t, int n) {
	while (*s != '\0')
		s++;
	while ((*s++ = *t++) != '\0' && n-- > 1) 
		;
	return s;
}*/

/*int strncmp1 (char *s, char *t, int n) {
	if(*s == *t)
		while (n-- > 1 && *s++ == *t++)
			;
	return *s - *t;
}*/

/*int getline (char *s) {
	int i = 0;
	while (*s != \0)
		s++;
	return i
}*/

/*int atoi (char *s) {
	int n;
	for(n = 0; *s >= '0' && *s <= '9'; s++)
		n = 10 * n + (*s - '0');
		return n;
}*/

/*void itoa (int n, char *s) {
	int sign;
	char *t = s;
	if ((sign = n) < 0)
		n = -n;
	do {
		*s++ = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		*s++ = '-';
	*s = '\0';
	while(s != t)
		s--;
	reverse(s);
}*/

/*void reverse (char *s) {
	char *s1 = s, a;
	while (*s != '\0')
		s++;
	s--;
	while (s > s1) {
		a = *s;
		*s-- = *s1;
		*s1++ = a;
	}
}*/

/*int strindex (char *s,char *t) {
	int i = 0;
	while (*s != '\0'){
		i++;
		if(*s == *t)
		   return i;
		else
			s++;
	}
	return -1;
}*/
