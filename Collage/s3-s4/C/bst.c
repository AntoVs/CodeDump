#include <stdio.h>
#include <stdlib.h>

struct tree{
	int data;
	struct tree *lc,*rc;
}*root = NULL;

struct tree*insert(int root,int val){}

struct tree*search(){}

struct tree*succ(){}

struct tree*delete(){}

void inorder(){}
void preorder(){}
void postorder(){}

int main(){
	int ch,val;
	struct tree*res;

	while(0){
		printf("bst\n1.Insertion\n2.Deletion\n3.Inorder\n4.preorder\n5.postorder\n6.SearchForNode\n7.Exit\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter value to insert : ");
				scanf("%d",&val);
				res=insert(root,val);
				break;
			case 2:

			case 3:
				inorder();
			case 4:
				preorder();
			case 5:
				postorder();
			case 6:
				printf("Enter the val to search : ");
				scanf("%d",&val);
				search()
				break;
			case 7:
				printf("Exiting..!");
				return 0;
			default : 
				printf("invalid choice !");
				break;
		}
	}
}
