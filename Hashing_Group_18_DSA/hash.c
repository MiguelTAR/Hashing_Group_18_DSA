//Group 18 - Data Structures and Algorithms
// Amandeep Kaur and Miguel Tarazona

#include <stdio.h>
#include <stdlib.h>
#include "hash.h"


void hash(int* hashtable, int* input, int M, int R) {

	int i, j;
	
	for (i = 0; i < M; i++) {
		hashtable[i] = -1; // Initialize the hashtable with -1	
	}
	for (i = 0; i < M; i++) {
		int key = input[i];
		int h1 = key % M; // Primary hash function
		int h2 = R - (key % R); // Secondary hash function

	for (j = 0; j < M; j++) {
			int index = (h1 + j * h2) % M; // Double hashing
			// Check if the index is empty
			if (hashtable[index] == -1) {
				hashtable[index] = key;
				break;
			}
		}

	}
}
