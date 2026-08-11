#include <stdio.h>
#include "hash.h"

//Data structure and Algorithms - Group 18
// Amandeep Kaur and Miguel Tarazona

//Write a main.c file which calls the hashInit function using the following input parameters :
//input = { 1234, 5678, 9012, 3456, 7890, 2345, 6789, 0123, 4567, 
// 8901, 1235, 5679, 9013, 3457, 7891, 2346, 6790, 0124, 4568, 
// 8902, 1236 }

//M = 21
//R = 5
//Once the hash table has been filled, print the contents of the hash table from 0 to M - 1


int main() {

	//Input, M and R values are taken from the problem statement
	int input[] = {1234,5678,9012,3456,7890,2345,6789,0123,4567,8901,1235,
	5679,9013,3457,7891,2346,6790,0124,4568,8902,1236};

	
	int M = 21;
	int R=5;

	//variable declarations
	int hashtable[21];
	int i;

	//calling the hashInit function to fill the hash table
	hashInit(hashtable, input, M, R);

	//printing the contents of the hash table
	printf("Hash Table:\n");
	printf("Index\tValue\n");

	for (i = 0; i < M; i++) {
		printf("%d\t%d\n", i, hashtable[i]);
	}

	return 0;

    


}