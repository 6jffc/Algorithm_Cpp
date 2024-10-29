#include <iostream>
#include <fstream>
using namespace std;


//Node*root;
struct node 
{
    int data;
    struct node*left,*right;
};//Node;
//Node*root;

//Hàm duyệt cây duyệt trước
void duyettruoc(node*root)
{
    if(root!=NULL)
   {
    cout<<root->data<<"";
    duyettruoc(root->left);
    duyettruoc(root->right);
   } 
}

void duyetgiua(node*root)
{
if(root!=NULL)
{
    duyetgiua(root->left);
    cout<<root->data<<"";
    duyetgiua(root->right);
}
}


void duyetsau(node*root)
{
    if(root!=NULL)
    {
        duyetsau(root->left);
        duyetsau(root->right);
        cout<<root->data<<"";
    }
}
//hàm tạo nút
node*create_node(int x)
{
    node*temp;
    temp=new node;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}


//Tìm vị trí để thêm nút có data là x vào cây
node*timvitri(int x, node* root)
{
    node*f;
    node*p;
    if(root==NULL) return NULL;
    else
    {
        p = root;
        f = p ;
        while (p=NULL)
        {
            f=p;
            if(x<p->data) p=p->left;
            else p=p->right;
        }
    return f;
    }
}



//Hàm thêm nút cây
void themnut(int x, Node*&root)
{
    node*temp,f;
    temp= create_node(x);
    if(root=NULL)
       root=temp;
    else
    {
        f = timvitri(x,root);
        if(x<f->data)
          f->left=temp;
        else 
          f->right = temp;
    }
}

int main()
{
node*root;
fstream f_in;
ofstream f_out("output.txt");
int a[100],i,n=0;
f_in.close();
cout<<"\nMang vua dov duoc la: \n";
for(int i=0;i<n;i++)
{
    cout<<a[i]<<"";
}
root = NULL;
cout<<"\n day duyet truoc la: \n";
for(i=0, i<n,i++)
themnut(a[i],root);
duyettruoc(root);
cout<<"\n day duyet giua la: \n";
duyetgiua(root);
cout<<"\n day duyet sau la: \n";
duyetsau(root);
f_out.close();
return 0;
}


