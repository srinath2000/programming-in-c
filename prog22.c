        #include<stdio.h>
        #include<stdlib.h>
        int f=0;
        struct tree
        { int data;
          struct tree *lchild,*rchild;
        };
        void create(struct tree *ad)
        { int it,ch;
          struct tree *temp;
          //char ch;
          if(ad!=NULL)
          { printf("Left child(1/0): ");
            scanf("%d",&ch);
            if(ch==1)
            { temp=(struct tree *)malloc(sizeof(struct tree));
              printf("Element: ");
              scanf("%d",&it);
              temp->data=it;
              temp->lchild=NULL;
              temp->rchild=NULL;
              ad->lchild=temp;
              create(temp);
            }
            printf("Right child(1/0): ");
            scanf("%d",&ch);
            if(ch==1)
            { temp=(struct tree *)malloc(sizeof(struct tree));
              printf("Element: ");
              scanf("%d",&it);
              temp->data=it;
              temp->rchild=NULL;
              temp->lchild=NULL;
              ad->rchild=temp;
              create(temp);
            }
          }
        }
        struct tree *pos;

        void search(struct tree *t,int s)
        { if(t!=NULL)
          { if(t->data==s)
            { printf("Element found\n");
              pos=t;
              f=1;
              //break;
            }
            else
                search(t->lchild,s);
            search(t->rchild,s);
          }
          //printf("Search not found\n");
        }

        void insert(struct tree *t,int s,int it)
        { int ch;
          struct tree *temp;
          search(t,s);
          if(pos==NULL)
           printf("Element not found\n");
          else
          { printf("To insert left child press 1\n");
            printf("To insert right child press 0\n");
            printf("Choice(1/0): ");
            scanf("%d",&ch);
            if(ch==1)
            { if(pos->lchild==NULL)
              { temp=(struct tree *)malloc(sizeof(struct tree));
                temp->data=it;
                temp->lchild=NULL;
                temp->rchild=NULL;
                pos->lchild=temp;
              }
            }
            else if(ch==0)
            { if(pos->rchild==NULL)
              { temp=(struct tree *)malloc(sizeof(struct tree));
                temp->data=it;
                temp->lchild=NULL;
                temp->rchild=NULL;
                pos->rchild=temp;
              }
            }
            else
             printf("An element is already present. Cannot insert.\n");
          }
        }
        void del(struct tree *t,int s)
        {
          struct tree *temp;
          if(t!=NULL)
          {
            if(t->lchild!=NULL)
            {   if(t->lchild->data==s)
                {
                    temp=t->lchild;
                    if(temp->lchild==NULL && temp->rchild==NULL)
                    {   t->lchild=NULL;
                        free(temp);
                    }
               /* else
                 printf("Deletion not possible\n");*/
              }
            }
            else if(t->rchild!=NULL)
            { if(t->rchild->data==s)
              { printf("GGH");
                temp=t->rchild;
                if(temp->rchild==NULL && temp->lchild==NULL)
                { t->rchild=NULL;
                  free(temp);
                }
               /* else
                 printf("Deletion not possible\n");*/
              }
            }
            del(t->lchild,s);
            del(t->rchild,s);
          }
        }

        void display(struct tree *t)
        { if(t!=NULL)
          { printf("%d  ",t->data);
            display(t->lchild);
            display(t->rchild);
          }
        }
        void main()
        { int ch,it,s;
          char op='y';
          struct tree *root;
          root=(struct tree*)malloc(sizeof(struct tree));
          printf("Element: ");
          scanf("%d",&it);
          root->data=it;
          root->lchild=NULL;
          root->rchild=NULL;
          create(root);
          do{
          printf("\nMENU\n");
          printf("1. Insert node\n");
          printf("2. Delete specified node\n");
          printf("3. Search specified node\n");
          printf("4. Display\n");
          printf("5. Exit\n");
          printf("Choice: ");
          scanf("%d",&ch);
          switch(ch)
          { case 1:
            printf("Search element: ");
            scanf("%d",&s);
            printf("Insert element: ");
            scanf("%d",&it);
            insert(root,s,it);
            break;
            case 2:
            printf("Search element: ");
            scanf("%d",&s);
            del(root,s);
            break;
            case 3:
            printf("Search element: ");
            scanf("%d",&s);
            search(root,s);
            if(f==0)
             printf("Element not found\n");
            break;
            case 4:
            printf("Pre order traversal of tree: \n");
            display(root);
            printf("\n");
            break;
            case 5:
            exit(0);
            break;
            default:
            printf("Invalid");
          }
          }while(op!='n');
        }


