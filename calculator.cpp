#include <iostream>
#include <sstream>
#include <conio.h>
#define  max 200
using namespace std;
string Check_Adad(string a);
string Hazf_Sefr_Posht(string a);
int Tartib_Adad(string a , string b);
string Ghadr_Motlagh(string a);
string sumation(string a , string b);
string subtract (string a , string b);
string multiplicantion (string a , string b);
string division(string a , string b);
string power(string a , string b);
string sqr(string a);
int main()
{
	cout<<"-------------------------------------welcome----------------------------------"<<endl;
	for (;;)
	{
    cout<<"please choose one of these operators:"<<endl;
    cout<<"1.summation"<<endl<<"2.submit"<<endl<<"3.multiplication"<<endl<<"4.division"<<endl<<"5.power"<<endl<<"6.square root";
    cout<<endl;
    
    int o;
    cin>>o;
    if (o>8 || o<=0 )
    {
        cout<<"you didn't enter one of the numbers of the choices,so try again!"<<endl;
    }
    else
    {
    	cout<<"enter an integer number with maximum "<<max<<" digits:"<<endl;
    	string a,b;
    	while(1)
    	{
    		cin>>a;
    		string Res = Check_Adad(a);
    		if(Res == "OK")
    		{		
    			break; 
    		}
    		else
    		{
    			cout<<Res;
    		}
    	}
    	if (o<6)
    	{
    		cout<<"now ; enter the second integet number with "<<max<<" digits:"<<endl; 
    		while(1)
    	{
    		cin>>b;
    		string Res = Check_Adad(b);
    		if(Res == "OK")
    		{		
    			break; 
    		}
    		else
    		{
    			cout<<Res;
    		}
    	}
		}
		
		a = Hazf_Sefr_Posht(a); b = Hazf_Sefr_Posht(b);
		
		string result = "";
		string a1 = Ghadr_Motlagh(a); string b1 = Ghadr_Motlagh(b);
		int flag = Tartib_Adad(a1,b1);
		switch(o)
		{
			case 1 :
				if(flag==0 && ((a[0]=='-' && b[0]!='-') || (a[0]!='-' && b[0]=='-')))
				{
					result = "0";
				}
				else
				{
					if(flag == 1)
					{
						string t = a; a = b;b = t;
						t = a1; a1 = b1; b1 = t;		
					}
					if(a[0] == '-' && b[0] != '-')
					{
						result = "-" + subtract(a1,b1);
					}
					else if(a[0] != '-' && b[0] == '-')
					{
						result = subtract(a1,b1);
					}
					else if(a[0] == '-' && b[0] == '-')
					{
						result = "-" + sumation(a1,b1);
					}
					else if(a[0] != '-' && b[0] != '-')
					{
						result = sumation(a1,b1);
					}
				} 
				break;
			case 2 :
				if(flag == 2)
				{
					if(a[0] == '-' && b[0] != '-')
					{
						result = "-" + sumation(a1,b1);
					}
					else if(a[0] != '-' && b[0] == '-')
					{
						result = sumation(a1,b1);
					}
					else if(a[0] == '-' && b[0] == '-')
					{
						result = "-" + subtract(a1,b1);
					}
					else if(a[0] != '-' && b[0] != '-')
					{
						result = subtract(a1,b1);
					}	
				}
				if(flag == 1)
				{
					if(a[0] == '-' && b[0] != '-')
					{
						result = "-" + sumation(b1,a1);
					}
					else if(a[0] != '-' && b[0] == '-')
					{
						result = sumation(b1,a1);
					}
					else if(a[0] == '-' && b[0] == '-')
					{
						result = subtract(b1,a1);
					}
					else if(a[0] != '-' && b[0] != '-')
					{
						result = "-" + subtract(b1,a1);
					}
				}
				if(flag == 0)
				{
					if(a[0] == '-' && b[0] != '-')
					{
						result = "-" + sumation(a1,b1);
					}
					else if(a[0] != '-' && b[0] == '-')
					{
						result = sumation(a1,b1);
					}
					else if((a[0]=='-' && b[0]=='-') || (a[0]!='-' && b[0]!='-'))
					{
						result = subtract(a1,b1);
					}
				}
				break;
			case 3 :
				if(flag == 1)
				{
					string t = a; a = b;b = t;
					t = a1; a1 = b1; b1 = t;		
				} 
				result = multiplicantion(a1,b1); 
				if((a[0]== '-' && b[0] != '-') || (a[0]!= '-' && b[0] == '-'))
				{					
					if(result != "0")
					{
						result = "-" + result;
					}	
				}
				break;
			case 4 :
				if(b=="0")
				{
					result = "Impossible";
				}
				else
				{
					if(flag == 1)
					{
						result = "0";
					}
					else if(flag == 0)
					{
						if((a[0]== '-' && b[0] != '-') || (a[0]!= '-' && b[0] == '-'))
						{
							result = "-1";
						}
						else
						{
							result = "1";
						}
					}
					else if(flag == 2)
					{
						result = division(a1,b1);
						if((a[0]== '-' && b[0] != '-') || (a[0]!= '-' && b[0] == '-'))
						{					
							result = "-" + result;
						}
					}
				}
				break;
			case 5 :
				if(a=="0" && b=="0")
				{
					result = "Ubsure";
				}
				else if(a=="0" && b!="0")
				{
					result = "0";
				}
				else if(a!="0" && b=="0")
				{
					result = "1";
				}
				else
				{
					result = power(a1,b1);
					if(a[0] == '-' && (b[b.length()-1]=='1' || b[b.length()-1]=='3' || b[b.length()-1]=='5' || b[b.length()-1]=='7' || b[b.length()-1]=='9'))
					{
						result = "-" + result;
					}
				}
				break;
			case 6 :
				if(a[0]=='-')
  				{
    				result="Error";
  				}
  				else if(a=="0")
  				{
    				result="0";  
  				}
  				else
  				{
					result = sqr(a);				
				} 
				break;								
		}
		cout<<"Result : "<<result<<endl;	
	}
}
	getch();				
}
string Check_Adad(string a)
{
	string Result = "OK";
	for (int i=0;i<a.length();i++)
    {
       	if(!isdigit(a[i]))
        {
            if (i==0)
            {
            	if (a[0]!='-')
            	{
            		Result = "please enter digits just!\nenter again!\n";
            	}
            }
            else
            {
            	Result = "please enter digits just!\nenter again!\n";
            }
        }
    }
	return Result;
}
string Hazf_Sefr_Posht(string a)
{
	string aa = "";
	int c = 0;
	string negative = "";
	if(a[0] == '-')
	{
		negative = "-";
	}
	for(int i = 0 ; i<a.length() ; i++)
	{
		if(a[i] != '0' && a[i] != '-')
		{
			aa = aa + a[i];
			c = 1;
		}
		else
		{
			if(c==1)
			{
				aa = aa + a[i];
			}
		}
	}
	if(aa=="")
	{
		return "0";
	}
	else
	{
		return negative + aa;
	}
}
int Tartib_Adad(string a , string b)
{
	int flag = 0;
	if (b.length()>a.length())
    {
        flag=1;
    }
    else if (b.length()<a.length())
    {
        flag=2;
    }
    else
    {
    	for (int i=0 ; i<a.length() ; i++)
        {
            int num1=a[i]-48;
            int num2=b[i]-48;
            if (num1>num2)
            {
                flag=2;
                break;
            }
            else if (num1<num2)
            {
                flag=1;
                break;
            }
        }
    }
    return flag;
}
string Ghadr_Motlagh(string a)
{
	string aa = "";
	if(a[0] == '-')
	{
		for(int i = 1 ; i<a.length() ; i++)
		{
			aa = aa + a[i];
		}
	}
	else
	{
		aa = a;
	}
	return aa;
}
string sumation(string a , string b)
{
	string sum="";
    int a1[max]={0},b1[max]={0},sum1[max]={0};
    int x = a.length()-1; int y = b.length()-1;
    
    for (int i=x;i>=0;i--)
    {
        a1[x-i]=a[i]-48;
    }
    for (int i=y;i>=0;i--)
    {
        b1[y-i]=b[i]-48;
    }
    
    int z = 0;
    for (int i=0;i<=x;i++)
    {
        sum1[i]=b1[i]+a1[i]+z;
        if (sum1[i]>=10)
        {
            sum1[i]=sum1[i]%10;
            z=1;
            if (i==x)
            {
                sum1[i+1]=1;
                x++;
            }
        }
        else
        {
        	z=0;
        }
    }

    for (int i=x;i>=0;i--)
    {
        sum+=(sum1[i]+48);
    }
    return Hazf_Sefr_Posht(sum);
}
string subtract (string a , string b)
{
	string sub="";
    int sub1[max]={0}, a1[max]={0}, b1[max]={0}, menha;
    int x=a.length()-1; int y=b.length()-1;
    
    for (int i=x;i>=0;i--)
    {
        a1[x-i]=a[i]-48;
    }
    for (int i=y;i>=0;i--)
    {
        b1[y-i]=b[i]-48;
    }
    
    int r = 0;
    for (int i=0;i<=x;i++)
    {
        menha=a1[i]-b1[i]-r;
        sub1[i]=menha;
        if (menha<0)
        {
            sub1[i]+=10;
            r=1;
        }
        else
        {
        	 r=0;
        }
    }

    for (int i=x;i>=0;i--)
    {
        sub+=sub1[i]+48;
    }
    return Hazf_Sefr_Posht(sub);
}
string multiplicantion (string a , string b)
{
	string mult="";
    int a1[max]={0}, b1[max]={0}, mult1[max]={0};
    int x=a.length()-1;
    int y=b.length()-1;
    
    for (int i=x;i>=0;i--)
    {
        a1[x-i]=a[i]-48;
    }
    for (int i=b.length()-1;i>=0;--i)
    {
        b1[y-i]=b[i]-48;
    }
    
    if (a=="0" || b=="0")
    {
        mult = "0";
    }
    else
    {
    	for (int i=0;i<=x;i++)
    	{
        	for (int j=0;j<=y;j++)
        	{
            	mult1[i+j]+=(a1[i]*b1[j]);
        	}
    	}
    	
    	int r=0;
    	for (int i=0;i<(x+y);i++)
    	{
        	if (mult1[i]>=10)
        	{
            	mult1[i+1]+=mult1[i]/10;
           		mult1[i]= mult1[i]%10;
            	if (i==x+y-1)
            	{
           			r=1;
            	}
        	}
        	else
        	{
        		r=0;
        	}
    	}
    	
    	for (int i=max-1;i>=0;--i)
    	{
        	stringstream ss;
        	ss<<mult1[i];
        	mult=mult+ss.str();
   		}
    }
    return Hazf_Sefr_Posht(mult);
}
string division(string a , string b)
{
	string divide="",a1="";
    int tool=b.length();
    for (int i=0 ; i<tool ;i++)
    {
        a1+=a[i];
    }
    int flag=Tartib_Adad(a1,b);
    
    if (flag==1)
    {
        a1+=a[tool];
        tool=tool+1;
    }

    string sub1="";
	for(int i=1 ; i<=10 ; i++)
	{
		stringstream sm;
		sm<<i;
		string mult=multiplicantion(b,sm.str());
		flag =Tartib_Adad(a1,mult);
		if(flag==1)
		{
			stringstream ss;
			ss<<i-1;
			divide = divide + ss.str();
			mult = multiplicantion(b,ss.str());
			sub1=subtract(a1,mult);
			break;
		}
	}
	for(;;)
	{	
		if(tool>=a.length())
		{
			break;
		}			
		if(sub1=="0")
		{
			sub1=a[tool];
		}
		else
		{
			sub1=sub1+a[tool];
		}
		tool++;
		for(int i=0 ; i<=10 ; i++)
		{
			stringstream sm;
			sm<<i;
			string mult =multiplicantion(b,sm.str());
			flag = Tartib_Adad(sub1,mult);
			if(flag==1)
			{
				stringstream ss;
				ss<<i-1;
				divide = divide + ss.str();
				mult =multiplicantion(b,ss.str());
				sub1=subtract(sub1,mult);
				break;
			}
		}
	}
    return divide;
}
string power(string a , string b)
{
	string i = "0";
	string power1 = "1";
	for(;;)
	{
		int flag = Tartib_Adad(i,b);
		if(flag != 1)
		{
			break;
		}
		else
		{
			power1 = multiplicantion(power1 , a);
		}
		i = sumation(i,"1");
	}
	return power1;
}
string sqr(string a)
{
  	string sqr1=""; 
    int r=0;
    if(a.length()%2==0)
    {
      r=a.length()/2;
    }
    else
    {
      r=(a.length()+1)/2;
    }
    string a_="1";
    string _a="1";
    for(int i=0 ; i<r-1 ; i++)
    {
      a_=a_+"0";
    }
    for(int i=0 ; i<r ; i++)
    {
      _a=_a+"0";
    }
    for(;;)
    {
      int flag = Tartib_Adad(multiplicantion(a_,a_),a);
      if(flag==2)
      {
        sqr1=subtract(a_,"1");
        break;
      }
      else
      {
        a_=sumation(a_,"1");
      }
   }
  return sqr1;
}
