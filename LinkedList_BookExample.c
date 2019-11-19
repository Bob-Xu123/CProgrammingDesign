#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stud_node
{
   int num;
   char name[20];
   int score;
   struct stud_node * next;
} stud_node;

stud_node * Creat_Stu_Doc (); // 新建链表的函数原型声明
void Print_Stu_Doc (stud_node * head); // 遍历链表的函数原型声明
stud_node * DeleteDoc (stud_node * head, int num); // 删除链表结点的函数原型声明

// 主函数 *****************************************************************************
int main(void) 
{
    stud_node * head;
    head = Creat_Stu_Doc();
    Print_Stu_Doc(head);
    head = DeleteDoc(head, 101);
    Print_Stu_Doc(head);
    return 0;
}
// ************************************************************************************

//函数之新建链表
stud_node * Creat_Stu_Doc(void)
{
    int num, score;
    char name[20];
    int size = sizeof(stud_node);
    stud_node *head, *tail, *p;
    head = tail = NULL;
    printf("Input num name score:\n");
    scanf("%d %s %d", &num, name, &score);
    while(num!=0) {
        printf("countinue inputing next(0 0 0 for terminate):\n");
        p = (stud_node *)malloc(size);
        p->num = num;
        strcpy(p->name,name); 
        p->score = score;
        p->next = NULL;
        if (head == NULL)
            head = p;
        else 
            tail->next = p;
        tail = p;
        scanf("%d %s %d", &num, name, &score);
    }
    return head;
}

//函数之遍历链表
void Print_Stu_Doc (stud_node * head)
{
    if ( head==NULL ){
        printf("\nNo Records\n");
        return;
    }
    printf("\nThe Student's Records Are:\n");
    printf("Num\tName\tScore\n");
    while ( head!=NULL ) {
        printf("%d\t%s\t%d\n", head->num,head->name,head->score);
        head = head->next;
    }
}

// 函数之链表的删除操作，这个函数写的和书上的有点不一样
stud_node * DeleteDoc (stud_node * head, int num)
{
    stud_node *ptr1, *ptr2;
    if (head == NULL) return head;
    if (num == head->num){
        ptr2 = head;
        head = head->next;
        free(ptr2);
    }
    else {
        ptr1 = head;
        ptr2 = head->next;
        while (ptr2 != NULL && ptr2->num != num){  // 利用了短路的效应，如果 && 前的语句为假，则后面的根本不会被执行，所以不会报错
            ptr1 = ptr2;
            ptr2 = ptr2->next;
        }
        if (ptr2 == NULL) {
            printf("\nNot Found the Num to Delete :(\n");
            return head;
        }
        ptr1->next = ptr2->next;
        free(ptr2);
    }
    return head;
}
