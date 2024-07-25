#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int  data;
    struct  node *lchild;
    struct node *rchild;
};

typedef struct  node NODE;
typedef struct node* PNODE;
typedef struct node **PPNODE;

void Insert (PPNODE Root, int No)
{
    PNODE newn =NULL;
    PNODE temp=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->lchild=NULL;
    newn->rchild=NULL;

    if(*Root==NULL)// tree is empty
    {
        *Root=newn;
    }
    else // tree contain at least one node
    {
       temp=*Root;
       
       while(1)// round round loop until someone stop  it (to stop it we should write break)   its uncoditonal loop
       {

        if(temp->data==No) //if elemnt is duplicate
        {
            printf("unable to insert node as element alreadu presnt\n");
            free(newn);
            break;
        }

        else if(No>temp->data)
        {
            if(temp->rchild==NULL)
            {
                temp->rchild=newn;
                break;
            }
            temp=temp->rchild;
        }
        else if(No<temp->data)
        {
            if(temp->lchild==NULL)
            {
                temp->lchild=newn;
                break;
            }
            temp=temp->lchild;
        }
       }
    }
}

void Inorder(PNODE Root)
{
    if(Root!=NULL)
    {
        Inorder(Root->lchild);
        printf("%d\n",Root->data);
        Inorder(Root->rchild);

    }
}

void Preorder(PNODE Root)
{
    if(Root!=NULL)
    {
        
        printf("%d\n",Root->data);
         Preorder(Root->lchild);
        Preorder(Root->rchild);

    }
}

void Postorder(PNODE Root)
{
    if(Root!=NULL)
    {
        
        
         Postorder(Root->lchild);
        Postorder(Root->rchild);
         printf("%d\n",Root->data);

    }
}

bool Search(PNODE Root,int No)
{
    bool flag= false;

    if(Root==NULL)
    {
        printf("tree is empty\n");
        return flag;
    }
    while(Root!=NULL)
    {
        if(No==Root->data)
        {
            flag=true;
            break;
        }
        else if(No>Root->data)
        {
            Root=Root->rchild;
        }
        else if(No<Root->data)
        {
            Root=Root->lchild;
        }
        
    }
    return flag;

}

int main()
{
    PNODE Head=NULL;
    bool bRet=false;

   Insert(&Head,21);
    Insert(&Head,34);
    Insert(&Head,11);
    Insert(&Head,98);    
    Insert(&Head,44);
    Insert(&Head,28);
    Insert(&Head,11);
    Insert(&Head,7);
    Insert(&Head,17);
     Insert(&Head,16);  
    
   
      bRet=Search(Head,14);
      
      if(bRet==true)
      {
        printf("element is presnt\n");

      }
      else{
        printf("element is not present\n");
      }


    return 0;
}