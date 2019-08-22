#import<iostream>
int a,b,c,d,e,f,n;
int main()
{
     
     std::cin>>a>>b>>c>>d>>e>>f>>n;
     a+=b+c+4,d+=e+f+9;
     std::cout<<(a/5+d/10>n?"NO":"YES");
     
}
