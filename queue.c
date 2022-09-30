#include <iostream>
using namespace std;

int top=-1,size;
void push(int arr[]){
    if(top==size-1)
    cout<<"Stack Overflow\n";
    else{
        cout<<"Enter the value\n";
        int val;
        cin>>val;
        arr[++top]=val;
    }
}

void pop(int arr[]){
    if(top==-1)
    cout<<"Underflow\n";
    else{
        cout<<arr[0]<<endl;
        for(int i=0;i<top;i++)
        arr[i]=arr[i+1];
        top-=1;
    }
}

void display(int arr[]){
    for(int i=0;i<=top;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    
}



int main()
{
    cout<<"Enter the size of the array\n";
    int sizes;
    cin>>sizes;
    size=sizes;
    bool loop=true;
    int arr[size];
    while(loop){
        cout<<"1. Insertion\t2. Deletion\t3. Display\t4. Exit\n";
        int ch;
        cin>>ch;
        switch(ch){
            case 1:
            push(arr);
            break;
            case 2:
            pop(arr);
            break;
            case 3:
            display(arr);
            break;
            case 4:
            loop=false;
            break;
            default:
            cout<<"Enter the right choice";
            
        }
    }

    return 0;
}

