#include <iostream>

using namespace std;


#define  MAXSIZE 100     // ��󳤶�
#include <iostream>
#include <stdlib.h>
#define  Status int
#define  OK 1
#define OVERFLOW -1

typedef int ElemType;

/* ˳��� */
typedef  struct
{
 	 ElemType  *elem;      // ָ������Ԫ�صĻ���ַ
  	 int  length;                 //���Ա�ĵ�ǰ����
 }SqList;


/*��ʼ��˳���*/
Status InitList_Sq(SqList &L)                   //����һ ���յ�˳���L
{
    L.elem=new ElemType[MAXSIZE];   // Ϊ˳������ռ�
    if(!L.elem) exit(OVERFLOW);           //�洢����ʧ��
    L.length=0;				        //�ձ���Ϊ0
    int  x;
    cout<<"����˳������Ԫ��ֵ��-999����:";
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

void  OutputList_Sq(SqList  &L)  //Lָ���Ѿ��洢�����ݵ�˳����׵�ַ
{  int i;
   for(i=0;i<L.length;i++)
     cout<<L.elem[i]<<"  ";
   cout<<endl;
}

int  findmin(SqList  &L)  //Lָ���Ѿ��洢�����ݵ�˳����׵�ַ
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
/*������*/
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




