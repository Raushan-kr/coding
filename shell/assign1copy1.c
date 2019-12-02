// C program to demonstrate insert operation in binary search tree 
#include<stdio.h> 
#include<stdlib.h> 

struct node 
{ 
	int key; 
	struct node *left, *right; 
}; 

// A utility function to create a new BST node 
struct node *newNode(int item) 
{ 
	struct node *temp = (struct node *)malloc(sizeof(struct node)); 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

// A utility function to do inorder traversal of BST 
void inorder(struct node *root) 
{ 
	if (root != NULL) 
	{ 
		inorder(root->left); 
		printf("%d \n", root->key); 
		inorder(root->right); 
	} 
}
void preorder(struct node *root) 
{ 
	if (root != NULL) 
	{ 
		printf("%d \n", root->key); 
		preorder(root->left); 
		
		preorder(root->right); 
	} 
} 
 

/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key) 
{ 
	/* If the tree is empty, return a new node */
	if (node == NULL) return newNode(key); 

	/* Otherwise, recur down the tree */
	if (key < node->key) 
		node->left = insert(node->left, key); 
	else if (key > node->key) 
		node->right = insert(node->right, key); 

	/* return the (unchanged) node pointer */
	return node; 
} 

/*searching largest smaller */
int search2(struct node* root, int N) 
{ 
    // Base cases 
    if (root == NULL) 
        return -1; 
    if (root->key == N) 
        return N; 
  
    // If root's value is smaller, try in rght 
    // subtree 
    else if (root->key < N) { 
        int k = search2(root->right, N); 
        if (k == -1) 
            return root->key; 
        else
            return k; 
    } 
  
    // If root's key is greater, return value 
    // from left subtree. 
    else if (root->key > N)  
        return search2(root->left, N);     
} 
int search1(struct node* root, int N) 
{ 
    // Base cases 
    if (root == NULL) 
        return -1; 
    if (root->key == N) 
        return N; 
  
    // If root's value is smaller, try in rght 
    // subtree 
    else if (root->key > N) { 
        int k = search1(root->right, N); 
        if (k == -1) 
            return root->key; 
        else
            return k; 
    } 
  
    // If root's key is greater, return value 
    // from left subtree. 
    else if (root->key < N)  
        return search1(root->left, N);     
} 

struct node *lca(struct node* root, int n1, int n2) 
{ 
    if (root == NULL) return NULL; 
  
    // If both n1 and n2 are smaller than root, then LCA lies in left 
    if (root->key > n1 && root->key > n2) 
        return lca(root->left, n1, n2); 
  
    // If both n1 and n2 are greater than root, then LCA lies in right 
    if (root->key < n1 && root->key < n2) 
        return lca(root->right, n1, n2); 
  
    return root; 
} 

void Print2(struct node *root, int k1, int k2)  
{  
    /* base case */
    if ( NULL == root )  
        return;  
      
    /* Since the desired o/p is sorted,  
        recurse for left subtree first  
        If root->data is greater than k1,  
        then only we can get o/p keys  
        in left subtree */
    if ( k1 < root->key )  
        Print2(root->left, k1, k2);  
      
    /* if root's data lies in range,  
    then prints root's data */
    if ( k1 <= root->key && k2 >= root->key )  
        printf("%d",root->key); 
      
    /* If root->data is smaller than k2, 
        then only we can get o/p keys  
        in right subtree */
    if ( k2 > root->key )  
        Print2(root->right, k1, k2);  
}  
  


























// Driver Program to test above functions 
int main() 
{ 
	
	int n,noe;
	struct node *root = NULL;
	printf("enter no. of element ");
	scanf("%d",&noe);
	printf("enter the root node");
	scanf("%d",&n);
	
	root = insert(root, n); 
	printf("enter the node");
	int i=0;
	while(i <noe-1)
	{
			scanf("%d",&n);
			insert(root, n);
			i++; 
	 } 
	

	// print inoder traversal of the BST 
	printf("inorder traversal");
	inorder(root); 
	printf("preorder traversal");
	preorder(root);
	printf("enter the node for search1");
	scanf("%d",&n);
	int l1,l2;
	l1=search1(root,n);
	printf("value of search1 %d",l1);
	printf("enter the node for search2");
	scanf("%d",&n);
	l2=search2(root,n);
	printf("value in search2 %d",l2);
	printf(" lca %d",	lca(root,l1,l2));
	Print2(root,l1,l2);
	return 0; 
} 

