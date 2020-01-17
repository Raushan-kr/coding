#include<bits/stdc++.h>

using namespace std;
int main()
{
	string s1="563956685456512363698545875641233659742447889966655411233399999999",s2="12456655552212365554411122336655545551222236699555477886622123399999",str,str2;
	int n1=s1.length();
	int n2=s2.length();
	cout<<s1<<"\n"<<s2<<"\n"<<n1<<"\n"<<n2;
	int carry=0;
	for(int i=n1-1;i>=0;i--)
	{
 	int sum = ((s1[i]-'0')+(s2[i+(n2-n1)]-'0')+carry); 
	cout<<"\n"<<s1[i]<<" + "<<s2[i+(n2-n1)]<<" sum = "<<sum%10;
	str.push_back(sum%10 + '0'); 
	carry=sum/10;
}
for(int i=n2-n1-1;i>=0;i--)
{
	int sum = ((s2[i]-'0')+carry);
	cout<<"\n"<<s2[i]<<" sum = "<<sum%10;
	str.push_back(sum%10 + '0'); 
	carry=sum/10;
	
}
cout<<"\n"<<str<<"\n";
int n=(str.length());
cout<<"\n"<<n<<"\n";
for (int i = n-1;i>=0;i--)
{
	str2.push_back(str[i] );
	
}
cout<<"\n"<<str2;
	return 0;
}
