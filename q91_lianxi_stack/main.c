#include<stdio.h>
#include<string.h>

int left(char c)//判断是否为左括号，是返回1，否返回0.
{
    if(c=='('||c=='{'||c=='[')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int right(char c)//判断是否为右括号，是返回1，否返回0.
{
    if(c==')'||c=='}'||c==']')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int check(char left,char right)//判断是否左右括号匹配，是返回1，否返回0.
{
    if(left=='('&&right==')')
    {
        return 1;
    }

    if(left=='{'&&right=='}')
    {
        return 1;
    }

    if(left=='['&&right==']')
    {
        return 1;
    }

    return 0;
}

int main()//主函数。
{
    int i=0,l;//定义循环变量i和字符串长度l。
    char stack[200];//定义字符数组存放左括号。
    int top=0;//初始化栈，栈为空，栈顶top=0；
    char s[200];//存放字符串。
    gets(s);//输入字符串到s数组中，数组中除了存放了有字符串，末尾还存放了“/0”，以表示是字符串。
    l=strlen(s);//字符串长度。

    for(i=0;i<l;i++)//遍历每个字符串中的字符。
    {
        if(left(s[i])==1)//如果是左括号入栈，同时栈顶向上移动。
        {
            stack[top]=s[i];
            top++;
        }
        else if(right(s[i])==1)//如果是右括号，那么开始在栈中判断是否匹配。
        {
            if(check(stack[top-1],s[i]))//如果匹配，那么栈顶下移，继续执行下一次新的for循环。
            {
                top--;
                continue;
            }
            else//如果不匹配，那么输出no，程序返回0，结束。
            {
                printf("no");
                return 0;
            }
        }
    }
    //如果不是在for循环中结束，那么就需要判断栈是否为空。因为不是在for循环中结束，说明都匹配成功了，但会出现特殊情况比如（（（）），令栈不为空。所以是否括号匹配成功不仅要判断是否右括号都有左括号使其匹配，还需要判断栈是否为空。
    if(top==0)
    {
        printf("yes");
        return 0;
    }
    else
    {
        printf("no");
        return 0;
    }

}
