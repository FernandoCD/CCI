#include <stdio.h>
#include <ctype.h>

main()
{
	int s[3];
	s[0] = '1';
	s[1] = '5';
	s[2] = '2';
	
	qsort(s,0,2)
}


/*int binsearch(int x, int v[], int n)
{
	int low, high, mid;
	
	low = 0;
	high = n-1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
		   high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}

/*int atoi(char s[])
{
	int i, n, sign;
	
	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (n = 0; isdigit(s[i]); i++)
		n = 10 * n +(s[i] - '0');
	return sign * n;
}

/*double atof(char s[])
{
	double val, power;
	int i, sign;
	
	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++){
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	return sign * val / power;
}


void  qsort(int v[], int left, int right)
{
	int i ,last;
	void swap(int v[], int i, int j);
	
	if (left >= right)
		return;
	swap(v, left, (left + right)/2);
	last = left;
	for (i = left + 1; i <= right; i++)
		 if (v[i] < v[left])
			 swap(v, ++last, i);
	swap(v, left, last);
	qsort(v,left,last-1);
	qsort(v, last+1, right);
}

void swap(int v[],int i, int j)
{
	int temp;
	
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}



