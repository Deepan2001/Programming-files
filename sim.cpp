//std::getline(std::cin,str);
/*int main()
{
    char str[100];
    cin.get(str,100);
    cout<<str;
}*/
/*//struct car
//{
//int num;
//std::string brand;
//};

//car c1;
//c1.num=1;
//c1.brand = "bmw";
//car c2 = {2,"Audi"};
//std::cout<<c1.num<<"\t"<<c1.brand<<"\n";
//std::cout<<c2.num;
//return 0;

int age;
std::cout<<"Enter the age";g
std::cin>>age;
if (age>=18)
    std::cout<<"He is eligible";
else
    std::cout<<"He/She is not eligible";

        int i=10;
    do{
        std::cout<<i;
        i=i-15;
    }while(i<0);

        int i;
for(i=0;i<=10;i++)
    std::cout<<i;
    std::cout<<"\n";
i=0;
while(i<=10)
{
    std::cout<<i;
    i++;
}int n,i,count=0;
cin>>n;

    count++;



}


}
cout<<rando;


cout<<strlen[s1];

int rev=0,a=230123,last=0;
for(a!=0;a=a/10;a--)
{
    last=a%10;
    rev=rev*10+last;
}
cout<<rev;



    int out;
for(out=1;out<=5;out++)
{

    for(int inn=1;inn<=out;inn++)
        cout<<inn;

        cout<<"\n";

}
 cout<<"  ";

 int a[2],i,total=0;
for (i=0;i<2;i++)
{
    cout<<"Enter the"<<i<<"number";
    cin>>a[i];
    total=total+a[i];
}
cout<<"The sum is "<<total;
switch(total>=1)
{
case 1:
    if(total%2==0)
    cout<<"\n"<<"This number is an even number";
    else
    cout<<"\n"<<"This is a odd number";
    break;

    int n;
cin>>n;
goto start;
for(int i=0;i<=n;i++)
{
    if(i==2)
    {
        break;
    }
     cout<<i;
}
start:
    cout<<"The end";


    int add();
int main()
{

add();
return 0;
}
int add()
{
     int a,b;
    cin>>a;
    cin>>b;
    return (a+b);
}

void add(int a,int b)
{
    cout<<a+b<<"\n";
}
void add(int a,int b, int c)
{
    cout<<"\n"<<a+b+c;
}
void add(int a,int b,int c,int d)
{
    cout<<"\n"<<a+b+c+d;
}
void var(int a)
{
    if(a<0)
        a=-a;
    cout<<"\n"<<a;
}
int main()
{
    add(3,2);
    add(3,2,4);
    add(3,2,5,1);
    var(-5);
}

void add(int=2,float=4);
int main()
{
    add(4,2.3);
}
void add(int a, float b)
{
    cout<<a+b;
}

void test();
int main()
{
    int a=2;
    test();
    int b=3;
}
void test()
{
   int b;
   b=6;
   cout<<auto int a;
}

    for(int n: {1,2,3})
    {
        cout<<n<<" ";
    }
    return 0;

        int num[4];
    double avg=0,sum=0,count=0;
    for(int i=0;i<4;i++)
    {
        cin>>num[i];
        sum=sum+num[i];
        count++;
    }
    cout<<count;
    avg=sum/count;
    cout<<sum<<"\n";
    cout<<avg;

int arr[2][2],arr1[2][2],arr2[2][2];
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        cin>>arr[i][j];
    }
}
for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr1[i][j];
        }
    }
for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                arr2[i][j]=arr[i][k]*arr1[k][j];
            }
        }
    }
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        cout<<"arr["<<i<<"]["<<j<<"] = "<<arr2[i][j]<<"\n";
    }
}

void display(int marks[2][2]);
int main()
{
int marks[2][2];
display(marks);
}
void display(int marks[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>marks[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
          cout<<<<marks[i][j]<<"\n";
        }
    }
}

int main()
{
    char str[100];
    cin.get(str,100);
    cout<<str;
}

struct car
{
    char brand[100];
    long int num;
    double rate;
};
car display(car);
void get(car);
int main()
{
    car c1;
    c1=display(c1);
    get(c1);
    return 0;
}
car display(car c1)
{
    cout<<"Enter the brand";
    cin.get(c1.brand,100);
    cout<<"Enter the number";
    cin>>c1.num;
    cout<<"Enter the rate";
    cin>>c1.rate;
    return c1;
}
void get(car c1)
{
    cout<<"Brand is "<<c1.brand;
    cout<<"Number is "<<c1.num;
    cout<<"Rate  is "<<c1.rate;
}

int factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,result=0;
    cout<<"enter the number";
    cin>>n;
    result=factorial(n);
    cout<<"Factorial of the number is"<<result;
return 0;

inheritance
int a=5,b=3;
class calculator
{
public:
    int getadd()
    {
        return a+b;
    }
    int getsub()
    {
        return a-b;
    }
};
class multi :public calculator
{
public:
    int getdiv()
    {
        return a/b;
    }
};
int main()
{
multi res;
res.getadd();
res.getadd();
res.getdiv();
cout<<res.getadd()<<"\n";
cout<<res.getsub()<<"\n";
cout<<res.getdiv()<<"\n";
return 0;
}

template
template <typename T>
void swap( T n1, T n2)
{
    T temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
int main()
{
    int i1=2,i2=3;
    float f1=2.9,f2=3.2;
    char c1='a',c2='d';
    swap(i1,i2);
    swap(f1,f2);
    swap(c1,c2);
    cout<<i1<<i2;
    cout<<f1<<f2;
    cout<<c1<<c2;

return 0;
}

prime number
int main()
{
    int n,i;
    bool isprime= true;
    cin>>n;
      for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime)
        cout<<"It is a prime number";
    else
        cout<<"It is a not prime number";
}
int main()
{
    int low,high,i;
    bool isprime=true;
    cin>>low>>high;
    while(low<high)
        isprime=true;
        if(low==0||low==1)
        {
            isprime=false;
        }
        else
        {
         for(i=2;i<=low/2;i++)
        {
            if(low%i==0)
            {
                isprime=false;
                break;
            }

        }
        if(isprime)
            cout<<low;
        low++;
        }
}
bool checkprime(int n)
{
   int i;
    bool isprime=true;

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime=false;
            break;
        }

    }
    return isprime;
}
int main()
{
    int n;
    cin>>n;
    if(checkprime(n))
        cout<<"It is a prime number";
    else
        cout<<"It is not a prime number";
}
without using third variable
int main()
{
    int temp,a,b;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
}
fibonacci
int main()
{
    int a=0,b=1,c,i,n;
    cin>>n;
    cout<<a<<b;
    for(i=2;i<n;i++)
    {
        c=a+b;
        cout<<c;
        a=b;
        b=c;
    }
}
void fiba(int n)
{
    static int a=0,b=1,c;
    if(n>0)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<"\n";
        fiba(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<"0"<<"\n"<<"1"<<"\n";
    fiba(n-2);
}
hcf or gcd
int main()
{
    int n1,n2,hcf=0;
    cin>>n1>>n2;
    if(n2>n1)
    {
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    for(int i=1;i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    cout<<hcf;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1-=n2;
        }
        else
        {
            n2-=n1;
        }
    }
    cout<<n1;
}
lcm
int main()
{
    int a,b,lcm;
    cin>>a>>b;
    if(a>b)
        lcm=a;
    else
        lcm=b;
    while(1)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            cout<<lcm;
            break;
        }
       lcm++;
    }
}
reverse
int main()
{
    int n,rev=0,dig;
    cin>>n;
    while(n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    cout<<rev;
}
palindrome
int main()
{
    int n,temp,dig,rev=0;
    cin>>n;
    temp=n;
    while(n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    if(temp==rev)
        cout<<"This is palin";
    else
        cout<<"This is not palin";
}
amstrong
int main()
{
    int n,dig,res=0,temp;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        dig=temp%10;
        res=res+dig*dig*dig;
        temp=temp/10;
    }
    if(res==n)
    {
        cout<<"this is a amstrong number";
    }
    else
    {
        cout<<"This is not a amstrong number";
    }
}

reverse a sentence
int main()
{
    int i,j,temp;
    char str[100];
    cin.get(str,100);
    j=strlen(str)-1;
    for(i=0;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<str;
}
largest element in an array
int main()
{
    int array[5],i;
    for(i=0;i<5;i++)
    {
        cin>>array[i];
    }
    for(i=1;i<5;i++)
    {
        if(array[0]>array[i])
        {
            array[0]=array[i];
        }
    }
    cout<<array[0];
}
frequency of a char in a string
int main()
{
    char str[100],check;
    int i,count=0;
    cin.get(str,100);
    cin>>check;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==check)
        {
            ++count;
        }
    }
    cout<<count;
}
*/

#include<iostream>
#include<string.h>
using namespace std;
struct details
{
    char name[100];
    int m1;
    int m2;
    int m3;
    float sum=0,avg=0;

};
int main()
{
    details d;
    cin>>d.name;
    d.sum=d.m1+d.m2+d.m3;
    d.avg=d.sum/3;
    cout<<"The student name"<<d.name;
    cin>>d.m1;
    cout<<"The first mark"<<d.m1;
    cin>>d.m2;
    cout<<"The second mark"<<d.m2;
    cin>>d.m3;
    cout<<"The third mark"<<d.m3;

    cout<<"The total marks is "<<d.sum;

    cout<<"The average marks is"<<d.avg;

}





