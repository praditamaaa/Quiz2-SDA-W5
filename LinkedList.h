/*
QUIZ 2 Pemahaman Linked List
File Header
By: Praditama Ajmal Hasan
Absen: 22
13 Februari 2025	
*/

//--------------------Deklarasi Struct--------------------------//
#define nil NULL

typedef struct Node {
	int data;
	struct Node *next;
} node;

//--------------------Deklarasi Prosedur--------------------------//
Node* createNode(int);
void insertFirst(Node**, int);
void insertLast(Node**, int);
void insertAfter(Node*, int, int);
void insertBetween(Node*, int, int);
void deleteFirst(Node**);
void deleteBetween(Node**, int);
void deleteLast(Node**);
void deleteGanjil(Node**);
void printLinkedList(Node*);


