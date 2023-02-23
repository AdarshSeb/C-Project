#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
	int aadhar;
      char booth[50];
      struct node *next;    
};
typedef struct node node;
node* head=NULL;
node * temp;
int vote1=0,vote2=0,vote3=0,vote4=0,vote5=0;
int menu();
node* voter_entry();
int voting();
int v_dmin();
int show();
node* poll_user();
int main()
{
	printf("\n\n\n");
      printf("\t            ****** WELCOME TO THE ONLINE VOTING PORTAL ******        \n\n");
      printf("\t           ***************************************************        \n\n\n\n\n");
      int ch;
      for(ch=menu();ch!=5;ch=menu())
      {
      	switch(ch)
      	{
      		case 1:
                        voter_entry();
	                  break;
   		      case 2:
   		      	v_dmin();
   		      	break;
      	      case 3:
      	      	winner();
      	      	break;
     	      	case 4:
     	      		poll_user();
     	      		break;
            }
	}
}
int menu()
{		
	int ch;
	printf("       \n\n\t1. FOR VOTE ENTRY     \n        2. FOR ADMIN PANEL    \n        3. FOR WINNER         \n        4.POLLED USER");
	printf("\n\n\n\t\t\t\t\t\tEnter your need");
	scanf("%d",&ch);
	return ch;
}
node* voter_entry()
{
	system("cls");
	int rp,y,z;
	int aadhar;
	char booth[20];
	printf("\n\n\n\n");
	sleep(1);
	printf("\t IF AADHAR ID MATCHES THEN YOU CAN GIVE YOUR VOTE OTHERWISE NOT\n\n");
	printf("\t\tPlease \n");
	printf("\t\t\tEnter your AADHAR ID number  ");
	scanf("%d",&aadhar);
      node*q;
	for(q=head;q!=NULL;q=q->next)
	{
		if(q->aadhar==aadhar)
		{
                  printf("\n\n\n\n\n\n\t\t\t\t    YOU HAVE ALREDY VOTED \t\t\t\t\t\t\n\n\n\n");
                  printf("\n\n\n\t\t\t\t    ILLEGAL ACCESS BY USER \t\t\t\t\t\n\n\n\n");
                  printf("\n\n\n\t\t\t     THE PORTAL IS GETTING CLOSED \t\t\t\t\t\t\n\n\n");
                  exit(0);
		}
		
	}
	printf("\t\t\tEnter Your BOOTH ID   ");
	gets(booth);
	gets(booth);
	node *t;
	if(head==NULL)
	{
		head=(node*)malloc(sizeof (node));
		head->aadhar=aadhar;
		strcpy(head->booth,booth);
		head->next=NULL;
	}
	else
	{
		t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=(node*)malloc(sizeof(node));
		t->next->aadhar=aadhar;
		strcpy(t->next->booth,booth);
		t->next->next=NULL;
	}
	node*temp;
      temp=head;
	int pr=0;
	while(temp->next!=NULL)
	{
            temp=temp->next;
      }
      if(temp->aadhar==10001||temp->aadhar==10002||temp->aadhar==10003||temp->aadhar==10004||temp->aadhar==10005||temp->aadhar==10006||temp->aadhar==10007||temp->aadhar==10008||temp->aadhar==10009||temp->aadhar==10010)
      {
            printf("\n\n    \t\t\t\t\t\tUSER VERIFIED\t\t\n\n\n\n");
            pr=pr+1;
            
      }
      else
      {
            printf("\n\n\n\n     \t\t\tSORRY,YOU ARE NOT A VALID USER\t\t\t");
            
      }
      system("cls");
      sleep(1);
      if(temp->aadhar==10001)
      {
            printf("\n\n\n\t\t\t\t\tWELCOME USER 1");
      }
      else if(temp->aadhar==10002)
      {
            printf("\n\n\n\n\n\t\t\tWELCOME USER 2");
     	}
      else if(temp->aadhar==10003)
      {
            printf("\n\n\n\n\t\t\t\tWELCOME USER 3");
      }
      else if(temp->aadhar==10004)
      {
            printf("\n\n\n\n\n\t\t\t\tWELCOME USER 4");
      }
      else if(temp->aadhar==10005)
      {
            printf("\n\n\n\n\t\t\t\tWELCOME USER 5");
      }
      else
      {
            printf("\n\n\n\n\n\t\t\t\tYOUR ARE NOT RECGNOIZED\n");
      }
      if(pr>0)
      {
            voting();	
      }
 }
	

int voting()
{
	
	printf("\n\n\n\n");
      printf("\t\t     * * * * * LIST OF CANDIDATES * * * * * \n\n\n");
      printf("\t\t\t NAME     & THEIR RESPECTIVE      SYMBOL\n\n");
      printf("\t\t\t 1.Candidate 1               1.AAAA\n");
      printf("\t\t\t 2.Candidate 2               2.BBBB\n");
      printf("\t\t\t 3.Candidate 3               3.CCCC\n");
      printf("\t\t\t 4.Candidate 4               4.DDDD\n");
      printf("\t\t\t 5.candidate 5               5.EEEE\n\n\n");
      int B;
      printf("\t\t\t Please, \n");
      printf("\t\t\t Cast your vote \n");
      scanf("%d",&B);
      if(B==1)
      {
	      vote1++;
            printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO CANDIDATE 1\n");
      }
      else if(B==2)
     {
            vote2++;
            printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO CANDIDATE 2\n");
      }
      else if(B==3)
      {
            vote3++;
            printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO CANDIDATE 3\n");
      }
      else if(B==4)
      {
            vote4++;
            printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO CANDIDATE 4\n");
      }
      else if(B==5)
      {
            vote5++;
            printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO CANDIDATE 5\n");
      }
      else
      {
           	printf("\n\t\t************* INVALID CHOICE ENTERED**************\t\t\n");
           	printf("\n\t\t\tENTER AGAIN\t\t\t\n");
      }
      sleep(3);
      system("cls");
	
}
int v_dmin()
{
	system("cls");
	int B;
      printf("\n\n\n\n");
      printf("\t\t\t\t\tEnter Your Password To Unlock The Admin Panel\n\n");
      scanf("%d",&B);
      if(B==2022)
      {
          show();
      }
      else
      {
         printf("Wrong Password\n");
      }
}
int show()
{
	system("cls");
	int G;
	printf("\n\n\n\n");
      printf("\t\t\tPresent Vote Count :\n\n");
      printf("\t\t\t  CANDIDATE 1 is on     %d Votes\n",vote1);
      printf("\t\t\t  CANDIDATE 2 is on     %d Votes\n",vote2);
      printf("\t\t\t  CANDIDATE 3 is on     %d Votes\n",vote3);
      printf("\t\t\t  CANDIDATE 4  is on    %d Votes\n",vote4);
      printf("\t\t\t  CANDIDATE 5  is on    %d Votes\n\n\n\n",vote5);
}
int winner()
{
	system("cls");
      system("cls");
      printf("\n\n\n\n");
      if(vote2<vote1 && vote3< vote1 && vote4<vote1 && vote5<vote1)
      {
            printf("\t\t\tThe present Winner is CANDIDATE 1 and she has got %d votes\n\n\n\n",vote1);
      }
      else if(vote1<vote2 && vote3< vote2 && vote4<vote2 && vote5<vote2)
      {
            printf("\t\t\tThe present Winner is CANDIDATE 2 and she has got %d votes\n\n\n\n",vote2);
      }
      else if(vote1<vote3 && vote2< vote3 && vote4<vote3 && vote5<vote3)
      {
            printf("\t\t\tThe present Winner is CANDIDATE 3 and she has got %d votes\n\n\n\n",vote3);
      }
      else if(vote1<vote4 && vote2< vote4 && vote3<vote4 && vote5<vote4)
      {
            printf("\t\t\tThe present Winner is CANDIDATE 4 and he has got %d votes\n\n\n\n",vote4);
      }
      else if(vote1<vote5 && vote2< vote5 && vote3<vote5 && vote4<vote5)
      {
            printf("\t\t\tThe present Winner is CANDIDATE 5 and he has got %d votes\n\n\n\n",vote5);
      }
      else
      {
      	printf("\t\t\tNo winner exists\n\n\n");
      }
}
node* poll_user()
{
	system("cls");
	struct node*s;
	int c=0;
	printf("\n\n        \t\t\t\t POLLLED VOTERS ARE:\n\n\n\n");
	for(s=head;s!=NULL;s=s->next)
	{
		c++;
		printf("\n\n\t\t\t\tVOTER %d :\n \t\t\t\tAADHAR NUMBER: %d\n ",c,s->aadhar);
	}
	
}

