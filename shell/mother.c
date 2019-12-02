#include <stdio.h>
#include <stdlib.h>

struct node
{
    int vertex;
    struct node* next;
};
int findmother(int);
//structure function for create

struct node* createNode(int v);
//
//graph to calculate visited node and adj node
struct Graph
{
    int numVertices;
    int* visited;
    struct node** adjLists; // we need int** to store a two dimensional array. Similary, we need struct node** to store an array of Linked lists
};
//for creating graph
struct Graph* createGraph(int);
void addEdge(struct Graph*, int, int);
void printGraph(struct Graph*);
void DFS(struct Graph*, int);
//int findmother(int);



int main()
{

    struct Graph* graph = createGraph(7);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 4);
	addEdge(graph, 4, 6);
	addEdge(graph, 6, 5);
    printGraph(graph);

    DFS(graph, 1);
    //findmother(7);
    return 0;
}

void DFS(struct Graph* graph, int vertex) {
        struct node* adjList = graph->adjLists[vertex];
        struct node* temp = adjList;
       
        graph->visited[vertex] = 1;
        printf("Visited %d \n", vertex);
    
        while(temp!=NULL) {
            int connectedVertex = temp->vertex;
        
            if(graph->visited[connectedVertex] == 0) {
                DFS(graph, connectedVertex);
            }
            temp = temp->next;
        }       
}

/*int findmother(int n){
	int visited[n];
	for(int i=0;i<n;i++){
		visited[i]=False;
	}
	for(int i=0;i<n;i++){
		 if (visited[i] == false) 
        { 
            DFS(i, visited); 
            v = i; 
        } 
	}
	for(int i=0;i<n;i++){
		visited[i]=False;
	}
	//fill(visited.begin(), visited.end(), false); 
    DFS(v, visited);  
    for (int i=0; i<V; i++) 
        if (visited[i] == false) 
            return -1; 
  
    return v; 
} 
	
*/	
	

 
 
struct node* createNode(int v)
{
    struct node* newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph(int vertices)
{
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;
 
    graph->adjLists = malloc(vertices * sizeof(struct node*));
    
    graph->visited = malloc(vertices * sizeof(int));
 
    int i;
    for (i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
}
 
void addEdge(struct Graph* graph, int src, int dest)
{
    // Add edge from src to dest
    struct node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;
 
    // Add edge from dest to src
    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}
 
void printGraph(struct Graph* graph)
{
    int v;
    for (v = 0; v < graph->numVertices; v++)
    {
        struct node* temp = graph->adjLists[v];
        printf("\n Adjacency list of vertex %d\n ", v);
        while (temp)
        {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}
