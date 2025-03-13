/*
QUIZ 2 Pemahaman Linked List
File body prosedur
By: Praditama Ajmal Hasan
Absen: 22
13 Februari 2025	
*/

#include<stdio.h>
#include<stdlib.h>
#include"LinkedList.h"

//Prosedur untuk membuat node baru
Node* createNode(int value) {
	
	//	Deklarasi var lokal
	Node* newNode;
	
	newNode = (Node*) malloc(sizeof(Node));
	if(newNode != nil) {
		newNode->data = value;
    	newNode->next = nil;
    	return newNode;
	}
	else {
		printf("Overflow: Alokasi Memori Gagal!!\n");
        return 0;
	}
}

//Prosedur unutk menambahkan node baru di awal linked list
void insertFirst(Node** head, int value) {
	
	//	Deklarasi var lokal
	Node* newNode;
	
	newNode = createNode(value);
	newNode->next = *head;
	*head = newNode;
}

//Prosedur untuk menambahkan node baru di akhir linked list
void insertLast(Node** head, int value) {
	
//	Deklarasi var lokal
	Node* newNode;
	
	newNode = createNode(value);
	if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

//Prosedur untuk menambahkan node baru ditengah tengah linked list berdasarkan posisi
void insertAfter(Node* head, int value, int position) {
	
//	Deklarasi var lokal
	int posisiSekarang;
	Node* temp, newNode;
	
	 if (head == nil) {
        printf("List Kosong!!");
        return;
    }

    temp = head;
    posisiSekarang = 0;
    while (temp != NULL && posisiSekarang < position) {
        temp = temp->next;
        posisiSekarang++;
    }

    if (temp != NULL) {
        newNode = createNode(value); 
        newNode->next = temp->next;
        temp->next = newNode;      
    } else {
        printf("Posisi %d tidak ditemukan\n", position);
    }
}

//Prosedur untuk menghapus elemen pertama dalam linked list
void deleteFirst(Node** head) {
	if(*head == nil) {
		 printf("Underflow: List sudah kosong\n");
        return;
	}
	Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

//Prosedur untuk menghapus node ditengah berdasarkan posisi
void deleteBetween(Node** head, int position) {
	
	//	Deklarasi var lokal
	int posisiSekarang;
	Node* temp;
	
	if (*head == NULL) {
        printf("List Kosong!!\n");
        return;
    }

    if (position == 0) {
        deleteFirst(*head);
        return;
    }

    temp = *head;
    posisiSekarang = 0;
    while (temp != NULL && posisiSekarang < position) {
        temp = temp->next;
        posisiSekarang++;
    }

    if (temp != NULL) {
        prev->next = temp->next; 
        free(temp);  
	}
}

//Prosedur untuk menghapus node terakhir di linked list
void deleteLast(Node** head) {
	if (*head == NULL) {
        printf("Underflow: List is empty\n");
        return;
    }
    if ((*head)->next == nil) {
        free(*head);
        *head = nill;
    } else {
        Node* temp = *head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = nil;
    }
}

//Prosedur untuk menghapus elemen ganjil didalam linked list
void deleteGanjil(Node** head) {
	Node* temp = *head;
    Node* prev = nil;

    while (temp != nil) {
        if (temp->data % 2 != 0) { 
            if (prev == nil) {
                *head = temp->next;
                free(temp);
                temp = *head;
            } else {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
        } else {
            prev = temp;
            temp = temp->next;
        }
    }	
}

void printLinkedList(Node* head) {
	 Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

