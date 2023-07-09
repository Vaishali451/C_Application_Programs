#include<stdio.h>  // scanf and printf
#include<stdlib.h> // for malloc and free

typedef struct Node
{
    int data;
    struct Node *next;
}NODE ,*PNODE , **PPNODE;

// 1 : Allocate Memory for  new Node
// 2 : Initialise the Node
// 3 : Check Whether Linked List(LL) is Empty or not
// 4 : IF LL is Empty store adress of newnode in First
// 5: Otherwise store the address of newnode inside next pointer of old first node
// 6: Update first pointer with the adress of new node

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); //1

    newn-> data = no;
    newn-> next = NULL;                  // 2

    if(*Head == NULL)                   // 3
    {
        *Head = newn;                  // 4
    }
    else
    {
        newn->next = *Head;           // 5
        *Head = newn;                 // 6
    }
 
}


void InsertLast(PPNODE Head , int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); //1

    PNODE temp = *Head ;   // temporary pointer

    newn-> data = no;
    newn-> next = NULL;                  // 2

    if(*Head == NULL)                   // 3
    {
        *Head = newn;                  // 4
    }
    else
    {
       while(temp -> next != NULL)
       {
        temp = temp-> next;
       }
       temp->next = newn;
    }
 
}

void Display(PNODE Head)
{
    printf("Elements of LinkedList are:\n");

    while(Head != NULL)
    {
        printf("| %d |->",Head ->data);
        Head = Head ->next;
    }

    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head ->next;
    }

    return iCount;
}

int main ()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertLast(&First , 11);
    InsertLast(&First , 21);
    InsertLast(&First , 51);
    InsertLast(&First , 101);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are:%d \n" , iRet);

    InsertFirst(&First,10);
    InsertFirst(&First , 20);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are:%d \n" , iRet);

    return 0;
}


