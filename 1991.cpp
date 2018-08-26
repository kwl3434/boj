#include<iostream>
using namespace std;
class Tree;
Tree* root=NULL;
Tree* least=NULL;
class Tree{
private:
    Tree* left;
    Tree* right;
    char sym;
public:
    Tree(char sym, Tree* left=NULL,Tree* right=NULL){
        this->left=left;
        this->right=right;
        this->sym=sym;
    }
    void Left(Tree* B){
        this->left=B;
    }
    void Right(Tree* B){
        this->right=B;
    }
    void preorder(Tree* T){
        cout<<T->sym;
        if(T->left!=NULL) T->preorder(T->left);
        if(T->right!=NULL) T->preorder(T->right);
    }
    void inorder(Tree* T){
        if(T->left!=NULL) T->inorder(T->left);
        cout<<T->sym;
        if(T->right!=NULL) T->inorder(T->right);
    }
    void postorder(Tree* T){
        if(T->left!=NULL) T->postorder(T->left);
        if(T->right!=NULL) T->postorder(T->right);
        cout<<T->sym;
    }
    void search(Tree* T,char sm){
        if(T->sym==sm){ least=T;return;}
        if(T->left!=NULL) T->search(T->left,sm);
        if(T->right!=NULL) T->search(T->right,sm);
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    Tree* newnode=NULL;
    int N;
    char a,b,c;
    cin >> N;
    while(N--){
        cin >> a >> b >> c;
        if(root==NULL){
            newnode=new Tree(a);
            root=newnode;
            least=newnode;
            if(b!='.'){ newnode=new Tree(b); least->Left(newnode);}
            if(c!='.'){ newnode=new Tree(c); least->Right(newnode);}
        }else{
            root->search(root,a);
            if(b!='.'){ newnode=new Tree(b);least->Left(newnode);}
            if(c!='.'){ newnode=new Tree(c);least->Right(newnode);}
        }
    }
    root->preorder(root); cout<<'\n';
    root->inorder(root); cout<< '\n';
    root->postorder(root); cout<< '\n';
    return 0;
}