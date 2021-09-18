#include<bits/stdc++.h>
using namespace std;

const int maxm=5;
template<class T>
class queuetype{

    int f,r; 
    int q[maxm];
    public :
        queuetype(){
            f=r=-1;
        }
        void addition(T);
        T deletion();
        T isempty();
        T isfull();
        int counts();
        void display();
};

template<class T> void queuetype<T>::addition(T n){
    if(f==-1) {
    f=r=0;
    q[r]=n;
    }
    else {
    ++r;
    q[r]=n;
    }
}

template<class T> T queuetype<T> :: isempty(){
    if(f==-1)
    return 1;
    else
    return -1;
}

template<class T> T queuetype<T>::isfull(){
    if(r==maxm-1)
    return 1;
    else
    return 0;
}

template<class T> T queuetype<T>::deletion(){
    int temp;
    if(f==r){
        temp=q[f];
        f=r=-1;
    }
    else{
        temp=q[f];
        ++f;
    }
    return temp;
}

template<class T> int queuetype<T>::counts(){
    int ct=0;
    if(f==-1)
    return 0;
    else{
        for(int i=f;i<=r;++i){
            ++ct;
        }
        return ct;
    }
}

template<class T> void queuetype<T>::display(){
    if(f==-1){
        cout<<"queue is empty \n";
    }
    else{
        cout<<"contents of the queue are : \n";
        for(int i=f;i<=r;++i){
            cout<<q[i]<<" ";
        }
    }
}


int main(){
    queuetype<int> q1;
   int choice,f,e,d,a,total;
char ch;

do{

cout<<"Main Menu \n 1. Addition \n 2. Deletion \n 3. Check if queue is empty \n 4. Check if queue is full \n 5. Count the elements \n 6. Display the queue \n   ENTER YOUR CHOICE(1-6) \n";
cin>>choice;
switch (choice)
{
case 1:
    f=q1.isfull();
    if(f==1){
        cout<<"Queue is full \n";
    }
    else{
        cout<<"Enter the element you want to add in queue \n";
        cin>>a;
        q1.addition(a);
    }
    break;
case 2 :
e=q1.isempty();
if(e==1){
    cout<<"Queue is empty \n";
}
else{
    d=q1.deletion();
    cout<<d<<" has been deleted \n";
}
break;
case 3:
e=q1.isempty();
if(e==1){
    cout<<" Queue is empty \n";
}
else{
    cout<<"Queue is not empty \n";
}
break;
case 4 :
f=q1.isfull();
if(f==1){
    cout<<"Queue is full \n";
}
else{
    cout<<"Queue is not full \n";
}
break;
 case 5 :
 total=q1.counts();
 cout<<"Total elements in queue : "<<total<<endl;
 break;
case 6 :
q1.display();
 break;
default:
cout<<"Oops ! Invalid Choice :( \n";
    break;
}

cout<<"do u want to continue ?(y/n) \n ";
cin>>ch;
}while(ch=='y' || ch=='Y');

return 0;
}




