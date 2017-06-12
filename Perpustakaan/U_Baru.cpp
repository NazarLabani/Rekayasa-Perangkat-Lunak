#include<vcl.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream.h>
struct  {
        char kelas, nama[32];
        int nim,kode,jumlah,tgl,kembali;
        }
mhs[7];
judul ()
{
clrscr();
printf("\n\t\t\t     [[[[DAFTAR BUKU]]]]]\n");
printf("================================================================================");
printf("            ---------------------------------------------------\n");
printf("           | No | Judul Buku         | Kode Buku   |    Tahun |\n");
printf("            ---------------------------------------------------\n");
printf("           | 1  | Buku Ensiklopedia  |     01      |    2014  |\n");
printf("           ---------------------------------------------------\n");
printf("           | 2  | Buku B.Inggris     |     02      |    2007  |\n");
printf("           ---------------------------------------------------\n");
printf("           | 3  | Novel              |     03      |    2009  |\n");
printf("           ---------------------------------------------------\n");
printf("           | 4  | Cerpen             |     04      |    2008  |\n");
printf("           ---------------------------------------------------\n");
printf("           | 5  | Buku Sejarah       |     05      |    2010  |\n");
printf("           ----------------------------------------------------\n");
printf("           | 6  | Amore              |     06      |    2005  |\n");
printf("           ---------------------------------------------------\n");
printf("           | 7  | B.Indonesia        |     07      |    2003  |\n");
printf("           ---------------------------------------------------\n");
printf("           | 8  | 12 Menit           |     08      |    2001  |\n");
printf("           ---------------------------------------------------\n");
printf("           | 9  | Fireflies          |     09      |    2002  |\n");
printf("           ---------------------------------------------------");
}

Pinjam ()
{

        getch();
        }
cari()
{

int data[]={1,2,3,4,5,6,7,8,9};
int i,ketemu,x,kode;
printf("\n                                 PENCARIAN DATA            ");
      printf("\n================================================================================\n");
printf("       Cari Data Dengan Kode buku     : ");scanf("%d",&x);
      if(x==1)
printf("       Nama Buku                      : Buku Ensiklopedia\n");
      else if(x==2)
printf("       Nama Buku                      : Buku B.Inggris\n");
      else if(x==3)
printf("       Nama Buku                      : Novel\n");
      else if(x==4)
printf("       Nama Buku                      : Cerpen\n");
      else if(x==5)
printf("       Nama Buku                      : Buku Sejarah\n");
      else if(x==6)
printf("       Nama Buku                      : Amore\n");
      else if(x==7)
printf("       Nama Buku                      : Bahasa Indonesia\n");
      else if(x==8)
printf("       Nama Buku                      : 12 Menit\n");
      else if(x==9)
printf("       Nama Buku                      : Fireflies\n");
ketemu=0;
for(i=0;i<=9;i++)
{
if (data[i]==x)
{
ketemu=1;
kode=1;
break;
}
}
if(ketemu==1)
{
printf("       ++++++++++++++++++++++++++++++++++++++++++++++++++");
printf("\n       Data tersedia!");
i=i+1;
printf("\n       Data anda cari ada di index    : %d",i);
}
else printf("\t\tDATA TIDAK DI TEMUKAN !!!");
printf("\n\n TEKAN ENTER UNTUK KEMBALI !!!!!!!");
}

main()
{

awal:
int i,maha,j=1,k=1,lagi,kode,nim,tanggal,pilih,kembali,jumlah,buku,pinjam;
char Pil,nama[50];maha=0; buku=9; pinjam=0;
do {
clrscr();
printf("\n\t\t\t   [[[[MENU PERPUSKAAN SEKOLAH]]]]] \t\t\t");
printf("\n================================================================================\n");
printf("\t\t\t      1.List Judul Buku\n\n");
printf("\t\t\t      2.Pinjam Buku\n\n");
printf("\t\t\t      3.Data Peminjaman\n\n");
printf("\t\t\t      4.Pengembalian Buku\n\n" );
printf("\t\t\t      5.Cari Buku   \n\n");
printf("\t\t\t      6.Selesai   \n");
printf("\n================================================================================\n");
printf("Masukan Pilihan Anda: ");scanf("%d",&pilih);
switch(pilih)
     {
case 1:{clrscr();    judul();
        getch();    break;
        }
case 2:{clrscr();
pinjam:clrscr();
printf("\n\t\t\tPEMINJAMAN BUKU DI PERPUSTAKAAN\t\t\t\n\n");
printf("================================================================================\n");
      printf("          Masukan Nama Anda       : ");scanf("%s",&mhs[maha].nama);
      printf("          Masukan NIM             : ");scanf("%d",&mhs[maha].nim);
      printf("          Tanggal Meminjam (1-31) : ");scanf("%d",&mhs[maha].tgl);
         if (mhs[maha].tgl<25)
         { mhs[maha].kembali=mhs[maha].tgl+5; }
         if (mhs[maha].tgl>=25)
           { mhs[maha].kembali=(mhs[maha].tgl+5)-30; }
      printf("          Masukan jumlah Buku     : ");scanf("%d",&mhs[maha].jumlah);

      printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");

      for(i=pinjam;i<(mhs[maha].jumlah+pinjam);i++)
      {
      int kode;
      printf("\n          Masukan Kode Buku       : ");scanf("%d",&kode);
      if(kode==1)
      printf("          Nama Buku               : Buku Ensiklopedia");
      if(kode==2)
      printf("          Nama Buku               : Buku B.Inggris");
      if(kode==3)
      printf("          Nama Buku               : Novel");
      if(kode==4)
      printf("          Nama Buku               : Cerpen");
      if(kode==5)
      printf("          Nama Buku               : Buku Sejarah");
      if(kode==6)
      printf("          Nama Buku               : Amore");
      if(kode==7)
      printf("          Nama Buku               : Bahasa Indonesia");
      if(kode==8)
      printf("          Nama Buku               : 12 Menit");
      if(kode==9)
      printf("          Nama Buku               : Fireflies");
      }
      printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
         printf("Tanggal pengembalian buku anda adalah %d",mhs[maha].kembali);
         printf("\n\nData Berhasil Tersimpan !!!");

         maha=maha+1;
         pinjam=pinjam+buku;
      printf("\n\r\r");system("    pause");
        getch();    break;
        }
case 3:{clrscr();
if(maha==0)
{
printf("\n\tBelum Ada Data Peminjaman !!!");
}
else
{
printf("\n\t\t\tData Pengembalian Buku\t\t\t\n");
printf("================================================================================\n");
gotoxy(5,5);cout<<"Nama";
gotoxy(16,5);cout<<"NIM";
gotoxy(25,5);cout<<"Tanggal Pinjam";
gotoxy(45,5);cout<<"Tanggal kembali";
gotoxy(65,5);cout<<"Banyak Buku"<<endl;
printf("________________________________________________________________________________\n");
int b1=6,b2=6,b3=6,b4=6,b5=6,b6=6,b7=6;

for(int i=0;i<maha;i++)
{
gotoxy(5,b1+=1);cout<<mhs[i].nama;
gotoxy(16,b2+=1);cout<<mhs[i].nim;
gotoxy(25,b3+=1);cout<<mhs[i].tgl;
gotoxy(45,b5+=1);cout<<mhs[i].kembali;
gotoxy(65,b6+=1);cout<<mhs[i].jumlah<<" buku";
cout<<endl;
}
}
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\nTekan Enter Untuk Kembali");      getch();    break;
        }
case 4:{clrscr();
int tgl;
char nama[32];
printf("\n\t\t\tPENGEMBALIAN BUKU PERPUSTAKAAN\t\t\t\n\n");
printf("================================================================================\n");
printf("\t\tMasukan Nama Anda                   : ");scanf("%s",&nama);
tgl:
printf("\n\t\tTanggal Dikembalikan                : ");scanf("%d",&tgl);
        if(tgl<1||tgl>31)
        {
printf("\t\tItu Bukan Tanggal Mohon Ulangi Lagi !!!");
        getch();
        goto tgl;
        }
printf("\t\tJumlah Buku Yang Di Kembalikan      : ");scanf("%d",&mhs[maha].jumlah);

printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
for(i=pinjam;i<(mhs[maha].jumlah+pinjam);i++)
{
int kode;
printf("\n\t\tMasukan Kode Buku                   : ");scanf("%d",&kode);
if(kode==1)
printf("\t\tNama Buku                           : Buku Ensiklopedia");
if(kode==2)
printf("\t\tNama Buku                           : Buku B.Inggris");
if(kode==3)
printf("\t\tNama Buku                           : Novel");
if(kode==4)
printf("\t\tNama Buku                           : Cerpen");
if(kode==5)
printf("\t\tNama Buku                           : Buku Sejarah");
if(kode==6)
printf("\t\tNama Buku                           : Amore");
if(kode==7)
printf("\t\tNama Buku                           : Bahasa Indonesia");
if(kode==8)
printf("\t\tNama Buku                           : 12 Menit");
if(kode==9)
printf("\t\tNama Buku                           : Fireflies");
}
printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
         printf("\n\r\r");system("    pause");
         getch();    break;
         }
case 5:{clrscr();    cari();
        getch();    break;
        }
case 6:{clrscr();
        exit(0);
        getch();break;
        }
defaut:{
        break;
        }
        }
        }
        while(pilih!=6);
        }

