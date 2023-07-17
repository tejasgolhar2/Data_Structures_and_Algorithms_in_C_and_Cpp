#include<iostream>

using namespace std;

int main()
{
    int amt;
    int note;
    cout<<"Welcome to the Notes Calculator\nEnter an amout: "<<endl;
    cin>>amt;
    
    cout<<"Choose the value of note required as change:\nRs.1/-\nRs.20/-\nRs.50/-\nRs.100/-";
    cout<<"\nRs. ";
    cin>>note;
    cout<<"The following number of notes are required as change -"<<endl;
    switch(note)
    {
        case 100:
        { 
            if(amt>=100)
            {
                int n1 = amt/100;
                cout<<n1<<" notes of Rs.100\n";
                amt = amt%100;
            }
        }

        case 50:
        {
              if(amt>=50)
            {
                int n2 = amt/50;
                cout<<n2<<" notes of Rs.50\n";
                amt = amt%50;
            }
        }

        case 20:
        {
              if(amt>=20)
            {
                int n3 = amt/20;
                cout<<n3<<" notes of Rs.20\n";
                amt = amt%20;
            }
        }

        case 1:
        {
              if(amt>=1)
            {
                int n4 = amt/1;
                cout<<n4<<" notes of Rs.1\n";
            }
        }
    }
    return 0;
}