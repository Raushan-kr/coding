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
  
    
    else if (root->key < N) { 
        int k = search2(root->right, N); 
        if (k == -1) 
            return root->key; 
        else
            return k; 
    } 
  
   
    else if (root->key > N)  
        return search2(root->left, N);     
} 
/*int search1(struct node* root, int N) 
{ 
    // If leaf node reached and is smaller than N 
    if (root->left == NULL && root->right == NULL  
                                && root->key < N) 
        return -1; 
  
    // If node's value is greater than N and left value 
    // is NULL or smaller then return the node value 
    if ((root->key >= N && root->left == NULL)  
        || (root->key >= N && root->left->key < N)) 
        return root->key; 
  
    // if node value is smaller than N search in the 
    // right subtree 
    if (root->key <= N) 
        return search1(root->right, N); 
  
    // if node value is greater than N search in the 
    // left subtree 
    else
        return search1(root->left, N); 
} 
  
*/
// equal to key. 
int search1(struct node* root, int key) 
{ 
    struct node *curr = root, *ans = NULL; 
  
   
    while (curr) { 
  
        
        // move right. 
        if (curr->key > key) { 
            ans = curr; 
            curr = curr->left; 
        }        
              
          
        
        else if (curr->key == key) { 
            ans = curr; 
            break; 
        } 
              
        else 
            curr = curr->right; 
    } 
      
    if (ans != NULL) 
       return ans->key; 
      
    return -1; 
} 
 
/*int search1(struct node* root, int N) 
{ 
    // Base cases 
    if (root == NULL) 
        return -1; 
    if (root->key == N) 
        return N; 
  
    // If root's value is larger, try in left 
    // subtree 
    else if (root->key > N) { 
        int k = search1(root->left, N); 
        if (k == -1) 
            return root->key; 
        else
            return k; 
    } 
  
    // If root's key is greater, return value 
    // from left subtree. 
    else if (root->key < N) {
    	
		printf("%d checking for search 1",root->key);	
        return search1(root->left, N);     
}
}*/ 

struct node *lca(struct node* root, int n1, int n2) 
{ 
    if (root == NULL) return NULL; 
  
    // If both n1 and n2 are smaller than root, then LCA lies in left 
    if (root->key > n1 && root->key > n2) 
    {
	//	printf("checking lca %d",root);	
        return lca(root->left, n1, n2); 
}
    // If both n1 and n2 are greater than root, then LCA lies in right 
    if (root->key < n1 && root->key < n2) 
        return lca(root->right, n1, n2); 
  
    return root; 
} 

/* Function to find LCA of n1 and n2. The function assumes that both 
   n1 and n2 are present in BST */
	
/*struct node *lca(struct node* root, int n1, int n2) 
{ 
    while (root != NULL) 
    { 
         // If both n1 and n2 are smaller than root, then LCA lies in left 
        if (root->key > n1 && root->key > n2) 
           root = root->left; 
  
        // If both n1 and n2 are greater than root, then LCA lies in right 
        else if (root->key < n1 && root->key < n2) 
           root = root->right; 
  
        else break; 
    } 
    return root; 
} 
*/
void Print2(struct node *root, int k1, int k2)  
{  
    /* base case */
    if ( NULL == root )  
        return;  
      
   
    if ( k1 < root->key )  
        Print2(root->left, k1, k2);  
      
    
    if ( k1 <= root->key && k2 >= root->key )  
        printf("%d \n",root->key); 
      
   
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
	struct node *t = lca(root, l1, l2);
	printf(" lca %d\n",	t->key);
		Print2(root,l1,l2);
	return 0; 
} 

