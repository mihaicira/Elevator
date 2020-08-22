#include <iostream>
#include <windows.h>
using namespace std;

int etaj[11],oameni;

void af_et(int block,int check)
{
    char here = 14;
     for(int i=10;i>=0;i--)
        {   cout<<"    ";
            cout<<"ETAJ: "<<etaj[i];
            if(i==block) cout<<"\t"<<here;
            cout<<endl<<endl;
        }
}

void sortt(int v[12])
{
   // for(int i=0;i<oameni;i++)
        //cout<<v[i]<<" ";
            //cout<<endl;

    for(int i=0;i<oameni-1;i++)
        for(int j=i+1;j<oameni;j++)
            if(v[i]>v[j]) swap(v[i],v[j]);


    //for(int i=0;i<oameni;i++)
        //cout<<v[i]<<" ";
           //cout<<endl;
}

void elev_draw(int p)
{
    system("cls");
    cout<<"\tSTATUS: OPENING\n"<<endl;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[ [ [ [ [ | ] ] ] ] ]"<<endl; ///6
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
    af_et(p,0);
    Sleep(250);
    Sleep(2000);

    system("cls");
    cout<<"\tSTATUS: OPENING\n"<<endl;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[ [ [ [ [   ] ] ] ] ]"<<endl; ///5
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
    af_et(p,0);
    Sleep(250);

    system("cls");
    cout<<"\tSTATUS: OPENING\n"<<endl;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[ [ [ [       ] ] ] ]"<<endl; ///4
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
    af_et(p,0);
    Sleep(250);

    system("cls");
    cout<<"\tSTATUS: OPENING\n"<<endl;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[ [ [           ] ] ]"<<endl; ///3
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
    af_et(p,0);
    Sleep(250);

    system("cls");
    cout<<"\tSTATUS: OPENING\n"<<endl;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[ [               ] ]"<<endl; ///2
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
    af_et(p,0);
    Sleep(250);

    system("cls");
    cout<<"\tSTATUS: OPENING\n"<<endl;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[                   ]"<<endl; ///1
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
    af_et(p,0);
    Sleep(250);


    Sleep(2000);



    system("cls");
    cout<<"\tSTATUS: CLOSING\n"<<endl;;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[                   ]"<<endl; ///1
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
    af_et(p,0);
    Sleep(250);

    system("cls");
    cout<<"\tSTATUS: CLOSING\n"<<endl;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[ [               ] ]"<<endl; ///2
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
    af_et(p,0);
    Sleep(250);

    system("cls");
    cout<<"\tSTATUS: CLOSING\n"<<endl;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[ [ [           ] ] ]"<<endl; ///3
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
    af_et(p,0);
    Sleep(250);

    system("cls");
    cout<<"\tSTATUS: CLOSING\n"<<endl;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[ [ [ [       ] ] ] ]"<<endl; ///4
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
    af_et(p,0);
    Sleep(250);

    system("cls");
    cout<<"\tSTATUS: CLOSING\n"<<endl;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[ [ [ [ [   ] ] ] ] ]"<<endl; ///5
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
    af_et(p,0);
    Sleep(250);

    system("cls");
    cout<<"\tSTATUS: CLOSING\n"<<endl;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[ [ [ [ [ | ] ] ] ] ]"<<endl; ///6
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
    af_et(p,0);
    Sleep(250);
    Sleep(2000);
}

void closed()
{
    system("cls");
    cout<<"\tSTATUS: MOVING\n"<<endl;
    cout<<"[[[[[[[[[[ ]]]]]]]]]]"<<endl;
    for(int i=1;i<=8;i++) cout<<"[ [ [ [ [ | ] ] ] ] ]"<<endl; ///6
    cout<<"[[[[[[[[[[ ]]]]]]]]]]\n\n"<<endl;
}

bool yas=true;

int main()
{   system("cls");

    if(yas){
            system("TITLE ELEVATOR");
            for(int i=0;i<=10;i++)
                etaj[i] = i;
            cout<<"Numar de oameni: ";cin>>oameni;
            }

    int laetaj[oameni];

    for(int i=0;i<oameni;i++)
    {
        cout<<"tinta "<<i+1<<": ";
        cin>>laetaj[i];
    }
    sortt(laetaj);

    int p=0,counter=0;
    while(p<laetaj[oameni-1])
    {
        system("cls");

        if(p==laetaj[counter]){
            system("cls");
            elev_draw(p);
            system("cls");

            closed();
            af_et(p,1);
            counter++;
            system("cls");
        }

        p++;
        closed();
        af_et(p,1);
        Sleep(2000);
    }

    while(p!=0)
    {   p--;
        system("cls");
        closed();
        af_et(p,1);
        Sleep(1000);
    }
    system("pause");
    yas = false;
    main();

    return 0;
}


