#include <iostream>
void getProduct(int a[],int n);
const int n=4;
int main()
{
  int a[n];
  for(int i=0;i<n;i++) std::cin>>a[i];
  getProduct(a,n);
  return 0;
}
void getProduct(int a[],int n)
{
  int b[n];
  int i,j;
  for(i=0;i<n;i++) b[i]=1;
  int temp;
  for(i=0;i<n;i++)
  {
    temp=a[i];
    a[i]=1;
    for( j=0;j<n;j++) b[i]*=a[j];
    a[i]=temp;
  }
  for(i=0;i<n;i++) std::cout<<b[i]<<std::endl;
 

}
