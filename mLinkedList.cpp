/*
QUIZ 2 Pemahaman Linked List
File main
By: Praditama Ajmal Hasan
Absen: 22
13 Februari 2025	
*/

#include<stdio.h>
#include<stdlib.h>
#include "LinkedList.h"

int main() {
	
	Node* head = NULL;
	
	// 1. Insert 7 sebagai elemen pertama
    insertFirst(&head, 7);
    printLinkedList(head); 

    // 2. Insert 11 sebagai elemen terakhir
    insertLast(&head, 11);
    printLinkedList(head); 

    // 3. Insert 9 di antara 7 dan 11
    insertAfter(head, 9, 2); 
    printLinkedList(head); 

    // 4. Insert 5 di awal list
    insertFirst(&head, 5);
    printLinkedList(head); 

    // 5. Insert 13 di akhir list
    insertLast(&head, 13);
    printLinkedList(head); 
	
	return 0;
}
