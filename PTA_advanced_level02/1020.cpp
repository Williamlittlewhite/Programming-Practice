#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<queue>
//树的前后层序遍历任意一个与中序遍历结合都可以完成对一棵树的确定，首先我们确定根据先序后序确定根节点的位置，
//在中序里面找到根节点对应的节点，这样前面的就是左子树后面的就是右子树，进一步我们确定了前后子树的数目，由此可以
//确定子树的先序和中序顺序，利用递归的思想当后序遍历的序列数目小于等于1时结束递归

//利用BFS对其进行层序遍历，首先根节点入队，然后访问其左右子树根节点出队该节点然后入队其子树节点，往复该情况
//就完成了树的层序遍历！
using namespace std;
int pos[31], in[31];
int N;
struct Node {
	int data;
	Node* lchild;
	Node* rchild;
};

Node* CreateTree(int posleft, int posright, int inleft, int inright)
{
	if (posleft > posright)
		return NULL;
	Node* root = new Node;
	root->data = pos[posright];

	int k;
	for (k = inleft;k <= inright;k++)
	{
		if (in[k] == pos[posright])
			break;
	}
	int numb = k - inleft;
	root->lchild = CreateTree(posleft, posleft + numb - 1, inleft, k-1);
	root->rchild = CreateTree(posleft + numb , posright-1, k + 1, inright);
	return root;

}
int num = 0;
void BFS(Node* root) {
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		Node* now = q.front();
		q.pop();
		printf("%d", now->data);
		num++;
		if (num < N)
			printf(" ");
		if (now->lchild != NULL) q.push(now->lchild);
		if (now->rchild != NULL) q.push(now->rchild);
	}
}

int main()
{

	scanf("%d", &N);
	for (int i = 0;i < N;i++)
		scanf("%d", &pos[i]);
	for (int i = 0;i < N;i++)
		scanf("%d", &in[i]);
	
	Node* root = CreateTree(0, N - 1, 0, N - 1);

	BFS(root);

	return 0;
}
