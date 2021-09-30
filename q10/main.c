#include <stdio.h>
#include <malloc.h>

#define N 10

typedef struct Student{

    int data;
    struct Student * next;
} * StudentList, Student;


// 尾插法
StudentList createListR(int a[], int n);

// 输出表
void Display(StudentList studentList);

int fun(StudentList s);

int main() {


    int a[N] = {19,2,3,5,14,5,8,3,6,90};
    StudentList studentList = createListR(a,10);
    int max = fun(studentList);

    printf("\n%d",max);
    return 0;
}

// 尾插法
StudentList createListR(int a[], int n){

    StudentList studentList = (StudentList)malloc(sizeof(Student));

    Student * p = studentList;
    Student * s;
    studentList->next = NULL;

    for (int i = 0; i < n; ++i) {
        s = (Student *)malloc(sizeof(Student));
        s->data = a[i];
        p->next = s;
        p = s;
    }
    p->next = NULL;

    return studentList;
}

int fun(StudentList s){
    StudentList p = s->next;
    int max = 0;
    while (p!=NULL){
        printf("%d ",p->data);
        if(p->data > max){
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

void Display(StudentList L) {
    if (L->next == NULL) {
        printf("链表为空");
        return;
    }

    StudentList P = L->next;
    while (P != NULL) {
        printf("%d ", P->data);
        P = P->next;
    }
}