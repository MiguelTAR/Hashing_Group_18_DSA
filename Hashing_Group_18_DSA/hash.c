//Group 18 - Data Structures and Algorithms
// Amandeep Kaur and Miguel Tarazona

#include <stdio.h>
#include <stdlib.h>
#include "hash.h"

// Function to perform hashing using double hashing technique
void hashInit(int* hashtable, int* input, int M, int R) {

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

/*
The time complexity of the hashInit function is 0(M)is the avarage case because
the average case is much better due to the use of double hashing,
which reduces clustering and improves the distribution of keys in the hash table. Therefore, the average time complexity is O(1).
*/ 