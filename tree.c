#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int val;
    struct Node *left ,*right;

}Node;
Node *root =NULL;
Node *create (Node *parent,int x){
    if (parent == NULL){
        Node *n=(Node *)malloc(sizeof(Node));
        n->val=x;
        n->left=n->right=NULL;
        parent =n;

    }
    else if(x<parent->val){
        parent->left=create(parent->left,x);
    }
    else{
        parent->right=create(parent->right,x);

    }
    return parent;
}
void inorder(Node *node){
    if(node!=NULL){
        inorder(node->left);
        printf("%d\t",node->val);
inorder(node->right);
    }
   
}
 int search(struct Node* root, int key)
{
    while (root != NULL)
    {
        if (key == root->val)
        {
           
            
            return 1;
        }
        else if (key < root->val)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return 0;

     
}
int main(){
    root=create(root,5);
    create(root,3);
    create(root,2);
    create(root,4);
    create(root,7);
    inorder(root);
     if(search(root,4)){
        printf("found\n");
}else{
    printf("Not found");
}
return 0;
}
