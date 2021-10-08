#include <stdio.h>
#include <stdlib.h>

#define N 20

//���������Ľṹ���ʾ��ʽ
typedef struct BiTNode {
    char data;
    struct BiTNode *lchild;
    struct BiTNode *rchild;
} BiTNode, *BiTree;


// ǰ��
void PreOrder(BiTree T);
// ����
void InOrder(BiTree T);
// ����
void PostOrder(BiTree T);
// ����������
void CreateBiTree(BiTree *T);

int Treeheight(BiTree T);
/*
 * ABDG##H###CE#I##F##
 */
int main() {
    printf("����˳�����������(#��ʾ�ý����ӽ��Ϊ��):\n");
    BiTree T;
    CreateBiTree(&T);
    printf("ǰ������ǵݹ�ʵ�֣�\n");
    PreOrder(T);
    printf("\n");
    printf("��������ǵݹ�ʵ�֣�\n");
    InOrder(T);
    printf("\n");
    printf("��������ǵݹ�ʵ�֣�\n");
    PostOrder(T);
    printf("\n������� ��%d ", Treeheight(T));
    return 0;
}

void CreateBiTree(BiTree *T) {
    char ch;
    scanf("%c", &ch);
    if (ch == '#')
        *T = NULL;
    else {
        *T = (BiTree) malloc(sizeof(BiTNode));
        if (!*T)
            exit(-1);
        (*T)->data = ch;
        CreateBiTree(&(*T)->lchild);
        CreateBiTree(&(*T)->rchild);
    }
}


int Treeheight(BiTree T){
    if(!T){
        return 0;      //�����Ϊ���򷵻�0
    }
    int front=-1,rear = -1;
    int last=0,level = 0;
    BiTree Q[1000];    //���ö���Q��Ԫ������Ϊ���������ָ��
    Q[++rear] = T;  //��������
    BiTree p;
    while(front < rear){  //�Ӳ�����ѭ��
        p=Q[++front];
        if(p->lchild){
            Q[++rear] = p->lchild;
        }
        if(p->rchild){
            Q[++rear] = p->rchild;
        }
        if(front == last){
            level++;
            last = rear ; //��һ�������㷨�ĺ���
        }
    }
    return level;
}

/**
 * ǰ������ķǵݹ�ʵ��
 * @param bt
 *  ˼�룺����ջ��ʵ�֣�������ջ��֮��ջ�ǿգ����������Ÿ��ڵ���ҽ���ջ��
 *  ֮����ڵ��ջ�����ţ�����ջ��Ԫ�أ������,
 *  �˽����ҽ���ջ��֮����ڵ��ջ������ջ��Ԫ�أ������...һֱ������ȥ��
 *  ֱ��ջΪ�ա�
 */
void PreOrder(BiTree T) {
    BiTNode **s;
    BiTNode *p;
    int top = -1;
    //����ջ��
    s = (BiTNode **) malloc((N + 1) * sizeof(BiTNode *));
    //��ʼ��ջ��
    s[++top] = T;
    //�ǵݹ�ǰ�������
    while (top != -1) {
        p = s[top--];
        printf("%c ", p->data);    //ջ���ص㣬�Ƚ������
        if (p->rchild)
            s[++top] = p->rchild;
        if (p->lchild)
            s[++top] = p->lchild;
    }
    free(s);
}


/**
 * ����������ǵݹ�ʵ��
 * @param bt
 * ˼�룺����ջ���Ӹ��ڵ㿪ʼѭ����ֻҪ�����ӽڵ����ջ��ֱ�����ӽڵ�Ϊ�ա�
 * ���ŵ���ջ��������жϸý���Ƿ������ӽڵ㣬
 * �������ջ����û�м�����ջ�������ӽڵ��������жϸýڵ��Ƿ������ӽڵ㣬
 * �����ջ��ֱ�����ӽڵ�Ϊ�գ��������ӽڵ�û��
 * ���ӽڵ㣬��ջ���жϵ����Ľڵ㣬�Ƿ������ӽڵ㣬�������ջ��û�м�����ջ��
 * ������Ҫ�жϸս�ջ������ڵ㣬�Ƿ������ӽڵ㣬
 * �����ջ��û���������ջ���ظ���ȥ....
 * ջ�գ����ж�������
 */
void InOrder(BiTree T) {
    BiTNode **s;
    BiTNode *p, *q;
    int top = -1;
    //����ջ��
    s = (BiTNode **) malloc((N + 1) * sizeof(BiTNode *));
    //�ǵݹ����������
    if (T) {
        while (T)   //һֱ����������ֱ���ý������ӿ�Ϊֹ��
        {
            s[++top] = T;   //���������Ӵ���ջ�У�
            T = T->lchild;     //ָ����һ����������
        }
        while (top != -1)  //ջ��ʱ����ѭ����
        {
            p = s[top--];//�տ�ʼ����pָ�����½ǵ����ӣ���������ý��ĸ���㣻
            printf("%c ", p->data);  //������½ǵĽ�㣻
            while (p->rchild)  //�����ƶ�������û���ҽ�㣻
            {
                s[++top] = p->rchild;   //�����������������ջ��
                q = p->rchild;          //�����������㸳��q��
                while (q->lchild)      //�жϽ��q��û����������
                {
                    s[++top] = q->lchild;  //����������������������������������������ջ��
                    q = q->lchild;
                }
                break;   //������ǰѭ�����ص��ڶ���whileѭ�������ղŵĲ��裻
            }
        }
    }
}

/**
 * ����������ǵݹ�ʵ��
 * @param bt
 * �㷨˼��:����ջ��ʵ�֡��Ӹ���㿪ʼ,ֻҪ���ӽڵ�ǿ�,���ջ,ֱ�����ӽڵ�
 * Ϊ��Ϊֹ��ȡ��ջ��Ԫ��(ֻ��ȡ,���ǵ�ջ),�ж�:
 * 1:ȡ����ջ��Ԫ���Ƿ������ӽڵ�,�������ӽڵ��Ƿ񱻷��ʹ�,����������(������
 * �ڵ�,�������ӽڵ㱻���ʹ�),������ý�㣬ͬʱ��ջ,���Ҽ�¼�¸÷��ʵĽڵ㡣
 * 2:ȡ����ջ��Ԫ�أ��������ӽڵ㣬��δ�����ʹ�����ָ������ƶ������ӽڵ㣬
 * �ظ�һ��ʼ�Ƿ������ӽڵ���жϡ�
 */
void PostOrder(BiTree T) {
    BiTNode **s;
    BiTNode *p;
    int top = -1;
    //����ջ��
    s = (BiTNode **) malloc((N + 1) * sizeof(BiTNode *));
    //�ǵݹ���������
    do {
        while (T)     //һֱ����������ֱ���������������ӿ�Ϊֹ��
        {
            s[++top] = T;     //���������Ӵ���ջ�У�
            T = T->lchild;   //ָ����һ����������
        }
        p = NULL;
        while (top != -1) {
            T = s[top];
            if (T->rchild == p)  //p:��ʾΪnull���������ӽڵ㱻���ʹ���;
            {
                printf("%c ", T->data);   //������������
                top--;           //����Ժ�top--��
                p = T;  //p��¼�¸ոշ��ʵĽڵ�;
            } else {
                T = T->rchild;   //������������㣻
                break;
            }
        }
    } while (top != -1);
}
