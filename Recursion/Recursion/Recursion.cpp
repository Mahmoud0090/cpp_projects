#include <iostream>
#include <string>
#include <vector>
using namespace std;

///*/recursion with strings*///
string reverse(string input)
{
    if (input.size() == 0)
    {
        return "";
    }
    return reverse(input.substr(1)) + input[0];
}

bool ispalindrom(string input)
{
    if (input.size() == 0 || input.size() == 1)
    {
        return true;
    }
    if (input[0] == input[input.size() - 1])
    {
        return ispalindrom(input.substr(1, input.size() - 2));
    }
    return false;
}

string decToBin(int num)
{
    if (num / 2 == 0)
    {
        return "1";
    }
    return decToBin(num / 2) + std::to_string(num % 2);
}

///*/recursion with numbers*///

int sum(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num + sum(num - 1);
}

//binary search

int findIndex(vector<int> sorted, int leftindex, int rightindex, int num)
{
    if (leftindex > rightindex)
    {
        return -1;
    }

    int mid = (leftindex + rightindex) / 2;

    if (sorted[mid] == num)
    {
        return mid;
    }

    else if (sorted[mid] > num)
    {
        return findIndex(sorted, leftindex, mid - 1, num);
    }

    return findIndex(sorted, mid + 1, rightindex, num);
}

//fibonacci (not optimized)
long int fibb(long int num)
{
    if (num == 1 || num == 0)
    {
        return num;
    }
    else
    return fibb(num - 1) + fibb(num - 2);
}

/****recusrion in binay tree***/
//Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

int height(TreeNode* root)
{
    if (!root) return -1;
    return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(TreeNode* root)
{
    if (!root) return true;

    int diff = (1 + height(root->left)) - (1 + height(root->right));
    if (abs(diff) > 1)
    {
        return false;
    }
    else return isBalanced(root->left) && isBalanced(root->right);
}

TreeNode* insertValue(int data, TreeNode* head)
{
    if (head == NULL)
    {
        TreeNode* head = new TreeNode(data);
        return head;
    }

    if (data > head->val)
    {
        head->right = insertValue(data, head->right);
    }

    else
    {
        head->left = insertValue(data, head->left);
    }
    return head;
}

void printLeaves(TreeNode* root)
{
    if (root == NULL) return;

    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " , ";
        return;
    }

    if (root->left)
    {
        printLeaves(root->left);
    }
    if (root->right)
    {
        printLeaves(root->right);
    }
}

/****recursion linkedlist*****/

struct Node
{
    int val;
    Node* next;

    Node() 
    {
        this->val = 0; 
        this->next = nullptr; 
    }
    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

Node* reverseList(Node* head)
{
    if (head == NULL || head->next == nullptr)
    {
        return head;
    }

    Node* p = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;

    return p;
}

Node* sortedMerge(Node* a, Node* b)
{
    if (a == NULL) return b;
    if (b == NULL) return a;

    if (a->val <= b->val)
    {
        a->next = sortedMerge(a->next, b);
        return a;
    }

    else if (b->val < a->val)
    {
        b->next = sortedMerge(a, b->next);
        return b;
    }
}

int main()
{
    /*vector<int> x = {-1,0,2,4,6,9,10,13,16,29,97,100,555};

    int y = fibb(11);

    cout << y << endl;*/

    TreeNode* n = new TreeNode(20);
    n->left = new TreeNode(8);
    n->left->right = new TreeNode(14);
    n->left->left = new TreeNode(3);
    n->right = new TreeNode(30);
    n->right->left = new TreeNode(25);
    n->right->right = new TreeNode(35);
    n->right->right->right = new TreeNode(40);
    n->right->right->right->right = new TreeNode(50);

    /*Node* n = new Node(5);
    n->next = new Node(7);
    n->next->next = new Node(9);
    n->next->next->next = new Node(10);

    Node* h = new Node(1);
    h->next = new Node(4);
    h->next->next = new Node(17);
    h->next->next->next = new Node(30);*/

    //TreeNode* h = insertValue(6, n);

    //cout << h->val << endl;

    printLeaves(n);

    //Node* head = sortedMerge(n , h);
    
    
}
