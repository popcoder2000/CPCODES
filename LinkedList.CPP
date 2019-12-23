#include<bits/stdc++.h>
using namespace std;
class node{
    public:
	int data;
  node *next;
/*	node(int data){
		this->data=data;
		 next=NULL;
}*/
};
void insert_into_head(int data,node *&head){
	if(head==NULL){
    //head= new node(data);
    node *x=new node;
    head=x;
    head->data=data; //Head ke data mei data
    head->next=NULL;
    return;
  }
  node *temp=new node;
  temp->data=data;
  temp->next=head;
  head=temp;
}
void print(node *head){
  while(head!=NULL){
    cout<<head->data<<"-->";
    head=head->next;
  }
  return;
}
int main(){
  node *head=NULL;
  insert_into_head(3,head);
  insert_into_head(4,head);
  insert_into_head(5,head);
  insert_into_head(6,head);
  insert_into_head(7,head);
  insert_into_head(8,head);
  print(head);
  cout<<endl;
  return 0;
}
