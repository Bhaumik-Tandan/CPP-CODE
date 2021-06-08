#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }
        else
        {
            Node *cur;
            if (data <= root->data)
            {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else
            {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    /*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    bool pa(Node *p, int v1, vector<Node *> &v)
    {
        if (!p)
            return false;
        v.push_back(p);
        if (p->data == v1)
            return true;

        if (pa(p->left, v1, v))
            return true;
        else if (pa(p->right, v1, v))
            return true;
        v.pop_back();
        return false;
    }

    Node *lca(Node *root, int v1, int v2)
    {
        vector<Node *> vv1, vv2;
        pa(root, v1, vv1);
        pa(root, v2, vv2);
        vector<Node *>::iterator vp1 = vv1.begin(), vp2 = vv2.begin();
        while (*(vp1) == *(vp2))
        {
            vp1++;
            vp2++;
            if (vp1 == vv1.end() || vp2 == vv2.end())
                break;
        }
        return *(--vp2);
    }

}; //End of Solution

int main()
{

    Solution myTree;
    Node *root = NULL;

    int t;
    int data;

    std::cin >> t;

    while (t-- > 0)
    {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

    int v1, v2;
    std::cin >> v1 >> v2;

    Node *ans = myTree.lca(root, v1, v2);

    std::cout << ans->data;

    return 0;
}
