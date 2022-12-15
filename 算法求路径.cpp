int visited[MAXV]={0};		//全局变量
void PathAll(ALGraph *G,int u,int v,int k,int path[],int d)
//d是到当前为止已走过的路径长度，调用时初值为-1
{	int m,i;
	ArcNode *p;
	visited[u]=1;
	d++;							//路径长度增1
	path[d]=u;						//将当前顶点添加到路径中
	if (u==v && In(path,d,k)==l)	//输出一条路径
	{	printf("  ");
		for (i=0;i<=d;i++)
			printf("%d ",path[i]);
		printf("\n");
	}
	p=G->adjlist[u].firstarc;	//p指向顶点u的第一条弧的弧头节点
	while (p!=NULL)
	{	m=p->adjvex;			//m为u的邻接点
		if (visited[m]==0)		//若该顶点未标记访问,则递归访问之
			PathAll(G,m,v,l,path,d);
		p=p->nextarc;			//找u的下一个邻接点
	}
	visited[u]=0;				//恢复环境：使该顶点可重新使用
}
int In(int path[],int d,int k)	//判断顶点k是否包含在路径中
{	int i;
	for (i=0;i<=d;i++)
		if (path[i]==k)
			return 1;
	return 0;
}

