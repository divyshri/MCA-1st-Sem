#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool antenna=0,face=0,eye=0,body=0,hand=0,tail=0,complete=0;
void draw_body(int);
void IsComplete();
int roll_dice()
{
	int num = rand() % 6 + 1;
	return num;
}
int main()
{
	char ch;
	cout<<endl<<endl<<endl<<endl;
	cout<<"*----------------------*"<<endl;
	cout<<"*      Welcome         *"<<endl;
	cout<<"*   The Cootie Game    *"<<endl;
	cout<<"*----------------------*"<<endl;
	cout<<endl<<endl<<endl<<endl;
	do
	{
		int num = roll_dice();
		cout<<"Number obtained after rolling the dice - "<<num<<endl;
		switch(num)
		{
        case 1:
            {
                IsComplete();
                if(complete == false)
                {
                    draw_body(num);
                }
                break;
            }
        case 2:
            {
                IsComplete();
                if(complete == false)
                {
                    draw_body(num);
                }
                break;
            }
        case 3:
            {
                IsComplete();
                if(complete == false)
                {
                    draw_body(num);
                }
                break;
            }
        case 4:
            {
               IsComplete();
                if(complete == false)
                {
                    draw_body(num);
                }
                break;
            }
        case 5:
            {
                IsComplete();
                if(complete == false)
                {
                    draw_body(num);
                }
                break;
            }
        case 6:
            {
                IsComplete();
                if(complete == false)
                {
                    draw_body(num);
                }
                break;
            }
		}

		cout<<endl<<endl<<"Do you want to ROLL DICE again"<<endl;
		cout<<"Enter Y for 'YES' and N for 'NO'"<<endl;
		cin>>ch;
	}while (ch=='Y'||ch=='y');
}
void draw_body(int num)
{
    if(num == 6)
    {
        if(face == false)
        {
            face = true;
            cout<<endl<<"*----Face is Drawn----*"<<endl;
        }
        else
            cout<<endl<<"*----Face is already drawn----*"<<endl;
    }
    else if(num == 5)
    {
        if(body == false)
        {
            body = true;
            cout<<endl<<"*----Body is Drawn----*"<<endl;
        }
        else
            cout<<endl<<"*----Body is already drawn----*"<<endl;
    }
    else if(num == 1)
    {
        if(face == true && antenna == false)
        {
            antenna = true;
            cout<<endl<<"*----Antenna is added----*"<<endl;
        }
        else if(face == false)
        	cout<<endl<<"*----Face must be drawn First before drawing Antenna----*"<<endl;
        else
            cout<<endl<<"*----Antenna is already drawn----*"<<endl;
    }
    else if(num == 3)
    {
        if(face == true && eye == false)
        {
            eye = true;
            cout<<endl<<"*----Eye is added----*"<<endl;
        }
        else if(face == false)
        	cout<<endl<<"*----Face must be drawn First before drawing Eye----*"<<endl;
        else
            cout<<endl<<"*----Eye is already drawn----*"<<endl;
    }
    else if(num == 4)
    {
        if(body == true && hand == false)
        {
            hand = true;
            cout<<endl<<"*----Hand is added----*"<<endl;
        }
        else if(body == false)
        	cout<<endl<<"*----Body must be drawn First before drawing Hand----*"<<endl;
        else
            cout<<endl<<"*----Hand is already drawn----*"<<endl;
    }
    else if(num == 2)
    {
        if(body == true && tail == false)
        {
            tail = true;
            cout<<endl<<"*----Tail is added----*"<<endl;
        }
        else if (body == false)
        	cout<<endl<<"*----Body must be drawn First before drawing Tail----*"<<endl;
        else
            cout<<endl<<"*----Tail is already drawn----*"<<endl;
    }
}
void IsComplete()
{
    if(antenna != false && face != false && eye != false && body != false && hand != false && tail != false)
    {
        cout<<endl<<endl<<endl<<endl;
        cout<<"*------------------------------*"<<endl;
        cout<<"*   The Cootie Is Completed    *"<<endl;
        cout<<"*------------------------------*"<<endl;
        complete = true;
    }
    else
        complete = false;
}
