#include<iostream>
#include<vector>
#include "linkedlist.h"
#include<unordered_map>
using namespace std;

typedef struct ptr{
   int count;
   ptr* tail;
   ptr* head;
}ptr;

unordered_map<int ,int > rep_map;
vector<ptr*> countervec;

int link_count(Node* x)
{
   int count=0;
   while(x->next!=NULL)
   {
      count++;
   }
   return count;
}

void set_union(int x,int y)
{
   Node* head1=find(x);
   Node* head2=find(y);
   
}

void makeset(int x)
{
   Node* temp=Node(x);
   ptr* counter;
   counter->head=temp;
   counter->tail=counter->head;
   countervec.push_back(counter);
   rep_map
}

node* find(int x)
{
   for(Node* i:headvec)
   {
      if(i->data==x)
 	return i;
   }
}

int main()
{
   int i;
   Linkedlist link1;
   int arr[]={2,3,4,5};
   int arr2[]={6,7};
   int size=sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<size;i++)
   {
      makeset(arr[i]);
   }
   for(Node* i: headvec)
   {
      cout<< i->data<<" ";
   }
}

