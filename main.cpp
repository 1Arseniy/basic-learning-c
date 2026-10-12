struct Node
{
   int data;
   Node* left;
   Node* right;


   Node(int value) {
    data = value;
    left = nullptr;
    right = nullptr;

   } 

   

};

Node* insert(Node* root, int value) {
    if (root = nullptr) {
        return new Node(value);
    }

    if(value < root->data) {
        root->left = insert(root->left, value);


    } else {
        root->right = insert(root->right, value);
    }

     return root;
}


int main() {
    Node* root = nullptr;
    
    
    root = insert(root, 6);
    root = insert(root, 10);
     
    root = insert(root, 3);
     


    return 0;
}
