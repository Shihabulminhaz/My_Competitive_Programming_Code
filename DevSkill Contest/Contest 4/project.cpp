#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007




int main()
{

int a;

menu :{
    system("cls");
   cout << "1.Add recoad\n";
   cout << "2.Show recoad\n";
   cout << "3.Exit\n";

}
   cin >> a;
   if(a==2) goto recoad;
   else if(a==3) goto exit;




recoad:{

system("cls");
  cout << "shihab";
  cout << "\n\n Press Enter to go back";
  getch();
  goto menu;
}



exit:
    exit(0);

    return 0;
}

