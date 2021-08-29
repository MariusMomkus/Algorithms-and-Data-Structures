#include <bits/stdc++.h>
using namespace std;


struct Node
{
    string name;
    int price;
    vector<Node *>child;
};


Node *newNode(string name, int price)
{
    Node *temp = new Node;
    temp->name = name;
    temp->price = price;
    return temp;
}

/
void LevelOrderTraversal(Node * root)
{
    if (root==NULL)
        return;


    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();


        while (n > 0)
        {

            Node * p = q.front();
            q.pop();

            cout<< p->name << " ";
            cout << p->price << " ";


            for (int i=0; i<p->child.size(); i++){
                q.push(p->child[i]);
            }
            n--;
        }

        cout << endl;
    }
}

int main()
{
    /*
    *             10
    *           /    \
    *          2      34
    *     /  /  \  \   |  \ \
    *   77  88   1  7  8  9  9
    */
    Node *root = newNode("PC",10);
    (root->child).push_back(newNode("Motherboard",2));
    (root->child).push_back(newNode(" Peripherals",34));

    (root->child[0]->child).push_back(newNode("RAM",77));
    (root->child[0]->child).push_back(newNode("CPU",88));
    (root->child[0]->child).push_back(newNode("HDD",1));
    (root->child[0]->child).push_back(newNode("SSD",7));

    (root->child[1]->child).push_back(newNode("Mouse",8));
    (root->child[1]->child).push_back(newNode("Monitor",9));
    (root->child[1]->child).push_back(newNode("Keyboard",9));


    cout << "Tree:"<<endl;
    LevelOrderTraversal(root);

    return 0;
}
