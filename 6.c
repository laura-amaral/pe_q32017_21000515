#include <stdio.h>

#include <stdlib.h>



int cmpfunc (const void *a, const void *b) 

{

	return ( *(int*)a - *(int*)b);

}



float mediana (float v[], int n)

{

	float medi;

	if (n%2 == 0) {

		medi = (v[(n/2)-1] + v[(n/2)])/2;

	} else {

		medi = v[n/2];

	}



	printf("%.2f", medi);

}



int main() 

{

	int n,i;

	scanf("%d", &n);

	float v[n];

	for (i = 0; i<n; i++){

		scanf("%f", &v[i]);

	}	



	qsort(v,n,sizeof(int),cmpfunc);



	mediana(v,n);



	return 0;

}