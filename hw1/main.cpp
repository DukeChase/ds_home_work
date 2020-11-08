#include <iostream>

using namespace std;


#define  MAXSIZE 100     // 最大长度
#include <iostream>
#include <stdlib.h>
#define  Status int
#define  OK 1
#define OVERFLOW -1

typedef int ElemType;

/* 顺序表 */
typedef  struct
{
 	 ElemType  *elem;      // 指向数据元素的基地址
  	 int  length;                 //线性表的当前长度
 }SqList;


/*初始化顺序表*/
Status InitList_Sq(SqList &L)                   //构造一 个空的顺序表L
{
    L.elem=new ElemType[MAXSIZE];   // 为顺序表分配空间
    if(!L.elem) exit(OVERFLOW);           //存储分配失败
    L.length=0;				        //空表长度为0
    int  x;
    cout<<"输入顺序表各个元素值，-999结束:";
    cin>>x;
    int i=0;
    while(x!=-999)
    {   L.elem[i]=x;
        i++;
        cin>>x;
    }
    L.length=i;
    return OK;
}

void  OutputList_Sq(SqList  &L)  //L指向已经存储了数据的顺序表首地址
{  int i;
   for(i=0;i<L.length;i++)
     cout<<L.elem[i]<<"  ";
   cout<<endl;
}

int  findmin(SqList  &L)  //L指向已经存储了数据的顺序表首地址
{  int i;
   ElemType  x;
   x=L.elem[0];
   for(i=1;i<L.length;i++)
     if(L.elem[i]<x)
       { x=L.elem [i]; }
   return x;
}

int fun(SqList &L){
    int cur = L.elem[0];
    int ind = 0;
    int temp;
    for (int i = 1;i < L.length; i++){
        if (L.elem[i] <= cur){
            // ind = i;
            temp = L.elem[i];
            for (int j=i-1;j >= 0; j--){
                L.elem[j+1] = L.elem[j];
            }
            L.elem[0] = temp;
        }
        /*else if( L.elem[i] == cur)
        {

        }*/
        }
    }

    return 0;
}
/*主函数*/
int main()
{  SqList  L;
   InitList_Sq(L);
   fun(L);
   OutputList_Sq(L);
   //ElemType  m;
   // m=findmin(L);
   // cout<<"m="<<m<<endl;

   cout<<"end"<<endl;

}




