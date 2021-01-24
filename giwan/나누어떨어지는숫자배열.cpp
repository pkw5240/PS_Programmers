#include <string>
#include <vector>

using namespace std;

struct Node {

	Node(int _data) {
		data = _data;
		pLeft = NULL;
		pRight = NULL;
	}

	int data;
	struct Node *pLeft;
	struct Node *pRight;
};

Node* insertNode(Node *pNode, int data) {
	if (pNode == NULL) {
		pNode = new Node(data);
		return pNode;
	}
	//기준보다  삽입할 데이터가 크거나같으면
	if (pNode->data <= data) {
		pNode->pRight = insertNode(pNode->pRight, data);
	}
	else if (pNode->data > data) {
		pNode->pLeft = insertNode(pNode->pLeft, data);
	}
	return pNode;
}

void printPreorder(Node *pRoot, vector<int> &answer) {
	if (pRoot == NULL) return;
	printPreorder(pRoot->pLeft, answer);
	answer.push_back(pRoot->data);
	printPreorder(pRoot->pRight, answer);
}

vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;
	Node *root = NULL;

    //그냥 정렬하는거랑 비교해보니 속도차이도 거의없는데 이진탐색트리 연습겸 만들었습니다.
	for (auto & i : arr) {
		if (i % divisor == 0) root = insertNode(root, i);
	}
	printPreorder(root, answer);
	if (root == NULL) answer.push_back(-1);
	return answer;
}