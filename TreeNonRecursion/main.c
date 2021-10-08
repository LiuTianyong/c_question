#include <stdio.h>
#include <stdlib.h>

#define N 20

//二叉树结点的结构体表示形式
typedef struct BiTNode {
    char data;
    struct BiTNode *lchild;
    struct BiTNode *rchild;
} BiTNode, *BiTree;


// 前序
void PreOrder(BiTree T);
// 中序
void InOrder(BiTree T);
// 后续
void PostOrder(BiTree T);
// 构建二叉树
void CreateBiTree(BiTree *T);

int Treeheight(BiTree T);
/*
 * ABDG##H###CE#I##F##
 */
int main() {
    printf("请以顺序输入二叉树(#表示该结点的子结点为空):\n");
    BiTree T;
    CreateBiTree(&T);
    printf("前序遍历非递归实现：\n");
    PreOrder(T);
    printf("\n");
    printf("中序遍历非递归实现：\n");
    InOrder(T);
    printf("\n");
    printf("后序遍历非递归实现：\n");
    PostOrder(T);
    printf("\n树的深度 ：%d ", Treeheight(T));
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
        return 0;      //如果树为空则返回0
    }
    int front=-1,rear = -1;
    int last=0,level = 0;
    BiTree Q[1000];    //设置队列Q，元素类型为二叉树结点指针
    Q[++rear] = T;  //根结点入队
    BiTree p;
    while(front < rear){  //队不空则循环
        p=Q[++front];
        if(p->lchild){
            Q[++rear] = p->lchild;
        }
        if(p->rchild){
            Q[++rear] = p->rchild;
        }
        if(front == last){
            level++;
            last = rear ; //这一步就是算法的核心
        }
    }
    return level;
}

/**
 * 前序遍历的非递归实现
 * @param bt
 *  思想：利用栈来实现；根结点进栈，之后栈非空，弹出，接着根节点的右结点进栈，
 *  之后，左节点进栈；接着，弹出栈顶元素（输出）,
 *  此结点的右结点进栈，之后左节点进栈，弹出栈顶元素（输出）...一直这样下去，
 *  直到栈为空。
 */
void PreOrder(BiTree T) {
    BiTNode **s;
    BiTNode *p;
    int top = -1;
    //创建栈；
    s = (BiTNode **) malloc((N + 1) * sizeof(BiTNode *));
    //初始化栈；
    s[++top] = T;
    //非递归前序遍历；
    while (top != -1) {
        p = s[top--];
        printf("%c ", p->data);    //栈的特点，先进后出；
        if (p->rchild)
            s[++top] = p->rchild;
        if (p->lchild)
            s[++top] = p->lchild;
    }
    free(s);
}


/**
 * 中序遍历，非递归实现
 * @param bt
 * 思想：利用栈。从根节点开始循环，只要有左子节点则进栈，直到左子节点为空。
 * 接着弹出栈顶输出，判断该结点是否有右子节点，
 * 若有则进栈，若没有继续弹栈。有右子节点的情况，判断该节点是否有左子节点，
 * 有则进栈，直到左子节点为空；若该右子节点没有
 * 左子节点，则弹栈；判断弹出的节点，是否有右子节点，若有则进栈，没有继续弹栈；
 * 接着又要判断刚进栈的这个节点，是否有左子节点，
 * 有则进栈，没有则继续弹栈。重复下去....
 * 栈空，是判定条件。
 */
void InOrder(BiTree T) {
    BiTNode **s;
    BiTNode *p, *q;
    int top = -1;
    //创建栈；
    s = (BiTNode **) malloc((N + 1) * sizeof(BiTNode *));
    //非递归中序遍历；
    if (T) {
        while (T)   //一直遍历左子树直到该结点的左孩子空为止；
        {
            s[++top] = T;   //将所有左孩子存入栈中；
            T = T->lchild;     //指向下一个左子树；
        }
        while (top != -1)  //栈空时结束循环；
        {
            p = s[top--];//刚开始将最p指向左下角的左孩子，并且移向该结点的父结点；
            printf("%c ", p->data);  //输出左下角的结点；
            while (p->rchild)  //遍历移动后结点有没有右结点；
            {
                s[++top] = p->rchild;   //将这个结点的右子树入栈；
                q = p->rchild;          //这个右子树结点赋给q；
                while (q->lchild)      //判断结点q有没有左子树；
                {
                    s[++top] = q->lchild;  //有左子树，将与这个结点相连的所有左子树都入栈；
                    q = q->lchild;
                }
                break;   //结束当前循环，回到第二个while循环继续刚才的步骤；
            }
        }
    }
}

/**
 * 后序遍历，非递归实现
 * @param bt
 * 算法思想:利用栈来实现。从根结点开始,只要左子节点非空,则进栈,直到左子节点
 * 为空为止。取出栈顶元素(只是取,并非弹栈),判断:
 * 1:取出的栈顶元素是否有右子节点,或者右子节点是否被访问过,若满足条件(无右子
 * 节点,或者右子节点被访问过),则输出该结点，同时弹栈,并且记录下该访问的节点。
 * 2:取出的栈顶元素，若有右子节点，且未被访问过，则指针继续移动到右子节点，
 * 重复一开始是否又左子节点的判断。
 */
void PostOrder(BiTree T) {
    BiTNode **s;
    BiTNode *p;
    int top = -1;
    //创建栈；
    s = (BiTNode **) malloc((N + 1) * sizeof(BiTNode *));
    //非递归后序遍历；
    do {
        while (T)     //一直遍历左子树直到该左子树的左孩子空为止；
        {
            s[++top] = T;     //将所有左孩子存入栈中；
            T = T->lchild;   //指向下一个左子树；
        }
        p = NULL;
        while (top != -1) {
            T = s[top];
            if (T->rchild == p)  //p:表示为null，或者右子节点被访问过了;
            {
                printf("%c ", T->data);   //输出结点数据域；
                top--;           //输出以后，top--；
                p = T;  //p记录下刚刚访问的节点;
            } else {
                T = T->rchild;   //访问右子树结点；
                break;
            }
        }
    } while (top != -1);
}
