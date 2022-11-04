#include <iostream>
using namespace std;


struct TreeNode
{
    int Data;
    TreeNode* Left;
    TreeNode* Right;
};


void InOrderTraverse(TreeNode* Node)
{
    if (Node == NULL)
        return;

    InOrderTraverse(Node->Left);
    cout << Node->Data << "\t";
    InOrderTraverse(Node->Right);
}

void PostOrderTraverse(TreeNode* Node)
{
    if (Node == NULL)
        return;
    InOrderTraverse(Node->Left);
    InOrderTraverse(Node->Right);
    cout << Node->Data << "\t";
}

void PreOrderTraverse(TreeNode* Node)
{
    if (Node == NULL)
        return;

    cout << Node->Data << "\t";
    InOrderTraverse(Node->Left);
    InOrderTraverse(Node->Right);
    
}

int main()
{
    TreeNode* Root = NULL;
    int menu = 0;
   
    while (menu != -1)
    {
        cout << endl;
        cout << "1- Agaca eleman ekle" << endl;
        cout << "2- Agaci yazdir - In Order" << endl;
        cout << "3- Agaci yazdir - Pre Order" << endl;
        cout << "4- Agaci yazdir - Post Order" << endl;
        cout << "5- Cikis" << endl;
        cout << "Seciminiz?";
        cin >> menu;
        switch (menu)
        {
        case 1:
        {
            TreeNode* Node = new TreeNode();
            cout << "Eklenecek degeri giriniz : ";
            cin >> Node->Data;

            if (Root == NULL)
                Root = Node;
            else
            {
                TreeNode* CurrentNode = Root;
                bool isAdded = false;
                while (!isAdded)
                {
                    if (Node->Data > CurrentNode->Data)
                    {
                        if (CurrentNode->Right == NULL)
                        {
                            CurrentNode->Right = Node;
                            isAdded = true;
                        }
                        else
                        {
                            CurrentNode = CurrentNode->Right;
                        }
                           
                    }
                    else
                    {
                        if (CurrentNode->Left == NULL)
                        {
                            CurrentNode->Left = Node;
                            isAdded = true;
                        }
                        else
                        {
                            CurrentNode = CurrentNode->Left;
                            
                        }
                       
                    }
                        
                }
            }

        }
        break;
        case 2:
            cout << "Agac yazdiriliyor In Order" << endl;
            InOrderTraverse(Root);
            break;
        case 3:
            cout << "Agac yazdiriliyor Pre Order" << endl;
            PreOrderTraverse(Root);
            break;
        case 4:
            cout << "Agac yazdiriliyor Post Order" << endl;
            PostOrderTraverse(Root);
            break;
        case 5:
            menu = -1;
            break;
        }
    }
}

