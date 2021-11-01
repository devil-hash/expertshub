#include <stdio.h>
#include <conio.h>
void main()
{
    int idly=100,dosai=50,tea=50,vadai=200;
    int gidly,gdosai,gtea,gvadai;
    int midly,mdosai,mtea,mvadai;
    int bidly,bdosai,btea,bvadai;
    int ridly,rdosai,rtea,rvadai;
    clrscr();
    printf("gowtham and monisha eated idly\n",gidly,midly );
    scanf("%d%d",&gidly,&midly);
    bidly=idly-gidly;
    bidly=bidly-midly;
    printf("balance idly's %d\n",bidly,bidly);
    printf("------------------------------\n");


    printf("gowtham and monisha eated dosa \n",gdosai,mdosai);
    scanf("%d%d",&gdosai,&mdosai);
    bdosai=dosai-gdosai;
    rdosai=bdosai-mdosai;
    printf("balnace dosai %d\n",bdosai,rdosai);
    printf("------------------------------\n");


    printf("gowtham and monisha drunken tea\n",gtea,mtea);
    scanf("%d%d",&gtea,&mtea);
    btea=tea-gtea;
    rtea=btea-mtea;
    printf("balance tea %d\n",btea,rtea);
    printf("------------------------------\n");

    printf("gowtham and monisha ate vadai%d\n",gtea,mtea);
    scanf("%d%d",&gvadai,&mvadai);
    bvadai=vadai-gvadai;
    rvadai=bvadai-mvadai;
    printf("balance vadai%d\n",bvadai,rvadai);
    printf("------------------------------\n");
    getch();
}













