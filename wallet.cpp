#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
#include<istream>
#include<vector>
#include<windows.h>
#include<iomanip>
using namespace std;
struct emp
{    //this is global varieable to store user data
    
    string name,password,email,address;
    int number,age;
    int totalv=100;
    int recreceive;
    int transac;
    int send=0;
    
};
  
//this total varieable is bridge between main func and struct global varieable
int total=0;
//this emp is making 100 rooms in memory
 emp g[100];
void regis()//this func is for registration
{   system("cls");
    int name1=0;
    cout<<"\t\t\t wel-come to registration page"<<endl;
    cout<<"\t\t\t *****************************"<<endl;
    cout<<"\t\t\t Press 1 key to enter: ";
    cin>>name1;
     
    //we need only this for loop to store new user data on global varieable
    for(int i=total; i<total+name1; i++)
    {   
        cout<<"\t\t\t you press 1 key to registor "<<i+1<<endl;
        cout<<"\t\t\t Please enter new id: ";
        cin>>g[i].name;
        cout<<"\t\t\t Please enter password: ";
        cin>>g[i].password;
        cout<<"\t\t\t Please enter valid e-mail: ";
        cin>>g[i].email;
        cout<<"\t\t\t Please enter your address: ";
        cin>>g[i].address;
        cout<<"\t\t\t Please enter your age: ";
        cin>>g[i].age;
        cout<<"\t\t\t Please enter your mobile number: ";
        cin>>g[i].number;
        break;
    }//end of for loop
        system("cls");
         cout<<"\t\t\t Please wait your id is creating";
         //this loop is for dramatic scene while creating id.
        for(int i=0; i<5; i++)
        {
            cout<<"*";
            Sleep(500);
        }
       cout<<"\n\t\t\t your id has been created successfully thank you "<<endl;
       Sleep(3000);
       //this loop is important at the end of void fucn
        total=total+name1;   
};//this is end of void regis curly bracket
void forgot()
{
    system("cls");
    //this if condition is very important to fetch global varieable data
    if(total!=0)
    {
        string namek;
        int mail;
        // this for loop also important to fetch global varieable
        for(int i=0; i<total; i++)
        {
             cout<<"\t\t\t wel-come to forgot password page "<<endl;
             cout<<"\t\t\t ******************************** "<<endl;
             cout<<"\t\t\t Forgot your id and password ?"<<endl;
             cout<<"\t\t\t don't worry we are here to help you "<<endl;
             Sleep(4000);
             system("cls");
             cout<<"\t\t\t Please enter your valid e-mail id : ";
             cin>>namek;
             cout<<"\t\t\t Please enter your valid mobile number : ";
             cin>>mail;
             if(g[i].email== namek && g[i].number== mail)
             {
                cout<<"\t\t\t your login id is : "<<g[i].name<<endl;
                cout<<"\t\t\t your password is : "<<g[i].password<<endl;
                Sleep(5000);
                system("cls");
                cout<<"\t\t\t Thank you for using our services "<<endl;
                cout<<"\t\t\t If you have any quary? feel free to ask "<<endl;
                cout<<"\t\t\t Have a good day "<<g[i].name<<endl;
                Sleep(4000);
             }else
             {
                cout<<"\t\t\t Please provide valid email and mobile number "<<endl;
                cout<<"\t\t\t Thank you "<<endl;
                Sleep(4000);
             }

            //this if statement also important to fetch global varieable data
            if(i==total -1)
            {
                cout<<"\t\t\t sorry "<<endl;
            }else
            {
                cout<<"\t\t\t sorry too "<<endl;
            }
        }
    }
};//this is void forgot end curly bracket
void login()
{          system("cls");
    //this if statement is to prevent global varieable error
    if(total!=0){
    string namep;
    string pass;
    //this for loop is very important to fetch global varieable data aswell
    for(int i=0; i<total; i++){
    cout<<"\t\t\t wel-come to login page "<<endl;
    cout<<"\t\t\t ********************** "<<endl;
    cout<<"\t\t\t Please enter your user id: ";
    cin>>namep;
    cout<<"\t\t\t Please enter your password: ";
    cin>>pass;
    if(namep==g[i].name && pass==g[i].password)
    {   
        system("cls");
        cout<<"\t\t\t Please wait while Loading your Profile ";
         for(int i=0;i<5; i++)
          {
            cout<<"*";
            Sleep(500);
          }  
        system("cls");
        cout<<"\t\t\t login success thank you for joining our T-PAY "<<endl;
        cout<<"\t\t\t "<<g[i].name<<endl;
        Sleep(3000);
        break;
        
    }  if(i==total-1)
       {     system("cls");
        cout<<"\t\t\t Incorect id and password Please try again "<<endl;
           Sleep(2000);
           break;
       }
     else{
        cout<<"\t\t\t Incorect id and password Please try again "<<endl;
        Sleep(2000);
    }
       } 
    } else
       {
         cout<<"\t\t\t Please registor your detail to join our T-PAY thank you"<<endl;
         Sleep(3000);
       }     
    };//this is end of void login curly bracket
void locker()//this void locker is to see main balance
    {
        system("cls");
        if(total!=0)
        {
            int lock =0;
            for(int i=0; i<total; i++)
            {
                cout<<"\t\t\t This is your main bank account--enter your mobile number : ";
                cin>>lock;
                if(g[i].number==lock)
                {    system("cls");
                    cout<<"\t\t\t Please wait while Loading your main balance ";
                    for(int i=0; i<5; i++)
                    {
                        cout<<"*";
                        Sleep(500);
                    }
                     system("cls");
                    cout<<"\t\t\t your t-pay ammount is :"<<g[i].totalv<<endl;
                    Sleep(3000);
                }else
                {
                    cout<<"\t\t\t wrong entry please enter valid mobile number "<<endl;
                    Sleep(3000);
                }
                
                if(i==total -1){
                cout<<"\t\t\t sorry "<<endl;

            }
            else
            {
                cout<<"\t\t\t sorry "<<endl;
            }
        }
        }
    };// this is end of void locker curly bracket
void give()
    {
        system("cls");
        if(total!=0)
        {
            int send1=0;
            int man;
            for(int i=0; i<total; i++)
            {   
                cout<<"\t\t\t Your about to send money "<<endl;
                cout<<"\t\t\t Please enter amount to send ";
                cin>>send1;
                cout<<"\t\t\t Please re-enter amount to send ";
                cin>>man;
                
                if(g[i].totalv-=send1)
                {   system("cls");
                    cout<<"\t\t\t please wait while losing your money ";
                    for(int i=0; i<5; i++){
                        cout<<"*";
                        Sleep(500);}
                       
                       
                       send1 -=g[i].totalv;
                       man+=g[i].transac ;
                    
                }
                
                else{
                    cout<<"\t\t\t ohhh "<<endl;
                }
                if(i==total -1){
                cout<<"\t\t\t sorry "<<endl;
            }else
            {
                cout<<"\t\t\t sorry "<<endl;
            } 
            system("cls");
            cout<<"\t\t\t Thank you for using t-pay "<<endl;
            cout<<"\t\t\t your actual balance is : "<<g[i].totalv<<endl;
                     Sleep(3000);
                    
        }
    }else{
        cout<<"\t\t\t ummm"<<endl;
    }
    };// this is end of receive void curly bracket
void receive()
    {    
        system("cls");
        if(total!=0)
        {   
            int cash=0;
            for(int i=0; i<total; i++)
            {
                cout<<"\t\t\t Your are about to receive money 'yeahh' "<<endl;
                cout<<"\t\t\t Please enter amount : ";
                cin>>cash;
                cout<<"\t\t\t Please re-enter amount : ";
                cin>>g[i].recreceive;
                if(g[i].totalv+=cash)
               {
                 system("cls");
                cout<<"\t\t\t Please wait while receiving money ";
                for(int i=0; i<5; i++)
                {
                    cout<<"*";
                    Sleep(500);
                    cash+=g[i].totalv;
                    g[i].recreceive+1;
                    g[i].transac  +1;

                    
                }
               }
                else
                {
                    cout<<"\t\t\t Please enter valid mobile number and amount "<<endl;
                }
                if(total==-1)
                {
                    cout<<"\t\t\t Error ";
                }
                else
                {
                    cout<<"\t\t\t Error"<<endl;
                }
                system("cls");
                cout<<"\t\t\t Amount has been receive succesfully "<<endl;
                cout<<"\t\t\t your new balance is : "<<g[i].totalv<<endl;
                cout<<"\t\t\t Thank you for using t-pay "<<endl;
                Sleep(4000);
                
            }
        }
    };//this is end of receive curly bracket
void info(){
           system("cls");
           int in=0;
           if(total!=0)
           {
            for(int i=0; i<total; i++)
            {
                cout<<"\t\t\t Please enter your valid mobile nunber to see info : ";
                cin>>in;
                if(in==g[i].number)
                {    system("cls");
                    cout<<"\t\t\t Please wait while fetching your information ";   
                    for(int i=0; i<5; i++){
                        cout<<"*";
                        Sleep(500);
                }    system("cls");
                    cout<<"\t\t\t this is your information : "<<g[i].name<<endl;
                    cout<<"\t\t\t username : "<<g[i].name<<endl;
                    cout<<"\t\t\t Address : "<<g[i].address<<endl;
                    cout<<"\t\t\t E-mail : "<<g[i].email<<endl;
                    cout<<"\t\t\t Mobile : "<<g[i].number<<endl;
                    cout<<"\t\t\t Your age : "<<g[i].age<<endl;
                    Sleep(6000);
                }else
                {    system("cls");
                   cout<<"\t\t\t Please provide valid mobile number "<<endl;
                   cout<<"\t\t\t OR you can visit Our Office Thank you"<<endl; 
                   Sleep(3000);
                }
                
                 if(i==total-1)
                {
                    cout<<"sorry";
                }else
                {
                    cout<<"sorry";
                }
                system("cls");
               cout<<"\t\t\t Thank You for using T-Pay :"<<g[i].name<<endl;
               Sleep(3000);
            }
                
           }
};    //end of info curly bracket
void trans()
        {
            system("cls");
           int tran=0;
           if(total!=0)
           {
            for(int i=0; i<total; i++)
            {
                cout<<"\t\t\t Please Enter your valid mobile number to see transaction ";
                cin>>tran;
                if(tran==g[i].number){
                    system("cls");
                cout<<"\t\t\t Please wait while Loading your transaction";
                 for(int i=0; i<5; i++)
                 {
                    cout<<"*";
                    Sleep(500);
                 }   
                  system("cls"); 
                  cout<<"\t\t\t Transaction History "<<endl;
                  cout<<"\t\t\t -------------------- "<<endl;
                  cout<<endl;
                cout<<"\t\t\t Your Transaction is : "<<g[i].transac;
                Sleep(4000);
                
            }else 
                 {
                    cout<<"\t\t\t Please provide valid number "<<endl;
                    Sleep(3000);
                 }
                  if(i==total-1)
                {
                    cout<<"sorry";
                }else
                {
                    cout<<"sorry";
                }
                system("cls");
               cout<<"\t\t\t Thank You for using T-Pay :"<<g[i].name<<endl;
               Sleep(3000);
           }  
        }
        }// this is end of transanction end curly bracket

int main()
{   
     int user=0;      //varieable will always on top of do while loop
    do{
    system("cls");
    v:
    cout<<"\t\t Hello and wel-come to **T-PAY** Please registor or login to access "<<endl;
    cout<<"\t\t ******************************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<" \t\t\t Please press 1 for registration "<<endl;
    cout<<" \t\t\t Please press 2 for login "<<endl;
    cout<<" \t\t\t Please press 3 for forgot password "<<endl;
    cout<<"\t\t\t Please press 4 for balance inquiry "<<endl;
    cout<<"\t\t\t Please press 5 for send money "<<endl;
    cout<<"\t\t\t Please press 6 to receive money "<<endl;
    cout<<"\t\t\t Please press 7 to see your information "<<endl;
    cout<<"\t\t\t Please press 8 to see your transactions "<<endl;
    cout<<" \t\t\t Please press 9 exit "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t Enter your choice : ";
    cin>>user;
    
        
          switch(user) 
          {
            case 1 :
            regis();
            break;
            case 2:
            login();
            break;
            case 3:
            forgot();
            break;
            case 4:
            locker();
            break;
            case 5:
            give();
            break;
            case 6:
            receive();
            break;
            case 7 :
            info();
            break;
            case 8 :
            trans();
            break;
            default:
            system("cls");
            cout<<setw(15)<<left<<"\t\t\t Thank you for Using Tamang Pay "<<endl;
            cout<<"\t\t\t Have A Good Time User's "<<endl;
            Sleep(2000);
            break;
                 
          }

    
    
    } while(user!=9);  //anitializing not equal to 9 in the while bracket to exit the 
                      // programme by pressing 9 key
return 0;
}// end of the main curly bracket


