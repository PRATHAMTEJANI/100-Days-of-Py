#include<stdio.h>  //standated ninputoupt
#include<stdlib.h>  //malloc function implementation 


//seld Refrencisal structure for single linked list;
// struct Listnode {
//     int data;
//     struct node *link;
// };

// int main()
// {
//     struct Listnode *head = NULL;
//     head = (struct Listnode *)malloc(sizeof(struct Listnode));

//     head->data = 45;
//     head->link = NULL;

//     printf("%d" , head-> data);
//     printf("%d" , head-> link);
//     return 0;
// }

//inserting node into single linked list

struct node {
    int data;
    
    struct node *link;
};

struct node* add_beg(struct node* head , int d)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
}

int main()
{

    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 55;
    ptr->link = NULL;

    head->link = ptr;

    int data = 3;

    head = add_beg(head,data);
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d " , ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

