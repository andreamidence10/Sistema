#include <iostream>

using namespace std;

int main()
{
    int c1=0,c2=0,c3=0;
    int num;
    int c=0;
    int mayor=0;
    int menor=1235576;
    double sum1;
    double sum2;
    double sum3;
    double promedio1;
    double promedio2;
    double promedio3;

    while (c<5)

    {
        cout <<"Ingresar numero...:";
        cin>>num;
        {if (num>mayor)
        {
            mayor=num;
        }}
        {if (num<menor)
        {
            menor=num;
        }}

        if ((num>=1) and (num<=50))
            {c1++;
            sum1+=num;
            {
                 if (c1>0)
                    promedio1=sum1/c1;
                 else
                    promedio1=0;
            }}


        else if ((num>=51) and (num<=100))
            {c2++;
            sum2+=num;
            {

                if(c2>0)
                    promedio2=sum2/c2;
                else
                    promedio2=0;
            }}

        else
            {c3++;
            sum3+=num;
            {
                if(c3>0)
                    promedio3=sum3/c3;
                else
                    promedio3=0;
            }}

        c++;
    }
   cout<<"Numero mayor "<<mayor<<"\n";
   cout<<"Numero menor "<<menor<<"\n";
   cout<<"Rango 1-50 "<<c1<<"\n";
   cout<<"Rango 51-100 "<<c2<<"\n";
   cout<<"Rango >100 "<<c3<<"\n";
   cout <<"Promedio 1 "<<promedio1<<"\n";
   cout <<"Promedio 2 "<<promedio2<<"\n";
   cout <<"Promedio 3 "<<promedio3<<"\n";
    return 0;
}
