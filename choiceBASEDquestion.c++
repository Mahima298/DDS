#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int choice;
    
    cout<<"enter a number a:";
    cin>>a;
    
    cout<<"enter a number b:";
    cin>>b;
    
    while(true){
        cout<<"Menu :"<<endl;
        cout<<"press 1 to Add number :"<<endl;
        cout<<"press 2 to subtract number :"<<endl;
        cout<<"press 3 to multiply number :"<<endl;
        cout<<"press 4 to divide number :"<<endl;
        cout<<"press 5 to exit code :"<<endl;
        
        cin>>choice;
        
        if(choice==1){
            cout<<a+b<<endl;
        } else if(choice==2){
            cout<<a-b<<endl;
        } else if(choice==3){
            cout<<a*b<<endl;
        } else if(choice==4){
            cout<<a/b<<endl;
        } else if (choice==5){
            break;
        }
    }
}



enter a number a:88
enter a number b:86
Menu :
press 1 to Add number :
press 2 to subtract number :
press 3 to multiply number :
press 4 to divide number :
press 5 to exit code :

1
174
Menu :
press 1 to Add number :
press 2 to subtract number :
press 3 to multiply number :
press 4 to divide number :
press 5 to exit code :

2
2
Menu :
press 1 to Add number :
press 2 to subtract number :
press 3 to multiply number :
press 4 to divide number :
press 5 to exit code :

=== Session Ended. Please Run the code again ===
