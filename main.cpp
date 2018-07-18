#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

main(int argc, char** argv) {
	
	int n,i,a[100],b[100],c[100],Wmin,temp,Xmin,Ymin,W2min,W3min,W4min,W5min,W6min,W7min,W8min,W9min;
	cout<<"請輸入有幾個邊："; 
	cin>>n;
	
	for (i=1;i<=n;i++)
	{
		cout<<"第"<<i<<"個邊："<<endl;
		cin>>a[i]>>b[i]>>c[i];
	}
	
	Wmin=c[1];
	Xmin=a[1];
	Ymin=b[1];
	for(i=1;i<=n-1;i++)
	{
		if(Wmin>c[i+1])
		{
			Wmin=c[i+1];
			Xmin=a[i+1];
			Ymin=b[i+1];
		}
	}
	cout<<"("<<Xmin<<","<<Ymin<<") 權重:"<<Wmin<<endl;
	
	W2min=c[1];
	Xmin=a[1];
	Ymin=b[1];
	for(i=1;i<=n-1;i++)
	{
		if(W2min>c[i+1] && Wmin!=c[i+1])
		{
			W2min=c[i+1];
			Xmin=a[i+1];
			Ymin=b[i+1];
		}
	}
	cout<<"("<<Xmin<<","<<Ymin<<") 權重:"<<W2min<<endl;	
	
	W3min=c[1];
	Xmin=a[1];
	Ymin=b[1];
	for(i=1;i<=n-1;i++)
	{
		if(W3min>c[i+1] && Wmin!=c[i+1] && W2min!=c[i+1] )
		{
			W3min=c[i+1];
			Xmin=a[i+1];
			Ymin=b[i+1];
		}
	}
	cout<<"("<<Xmin<<","<<Ymin<<") 權重:"<<W3min<<endl;	
	
	W4min=c[1];
	Xmin=a[1];
	Ymin=b[1];
	for(i=1;i<=n-1;i++)
	{
		if(W4min>c[i+1] && Wmin!=c[i+1] && W2min!=c[i+1] && W3min!=c[i+1])
		{
			W4min=c[i+1];
			Xmin=a[i+1];
			Ymin=b[i+1];
		}
	}
	cout<<"("<<Xmin<<","<<Ymin<<") 權重:"<<W4min<<endl;	
	
	W5min=c[1];
	Xmin=a[1];
	Ymin=b[1];
	for(i=1;i<=n-1;i++)
	{
		if(W5min>c[i+1] && Wmin!=c[i+1] && W4min!=c[i+1] && W2min!=c[i+1] && W3min!=c[i+1])
		{
			W5min=c[i+1];
			Xmin=a[i+1];
			Ymin=b[i+1];
		}
	}
//	cout<<"("<<Xmin<<","<<Ymin<<") 權重:"<<W5min<<endl;	
	
	W6min=c[1];
	Xmin=a[1];
	Ymin=b[1];
	for(i=1;i<=n-1;i++)
	{
		if(W6min>c[i+1] && Wmin!=c[i+1] && W5min!=c[i+1] && W4min!=c[i+1] && W2min!=c[i+1] && W3min!=c[i+1])
		{
			W6min=c[i+1];
			Xmin=a[i+1];
			Ymin=b[i+1];
		}
	}
	cout<<"("<<Xmin<<","<<Ymin<<") 權重:"<<W6min<<endl;		
	
	W7min=c[1];
	Xmin=a[1];
	Ymin=b[1];
	for(i=1;i<=n-1;i++)
	{
		if(W7min>c[i+1] && Wmin!=c[i+1] && W6min!=c[i+1] && W5min!=c[i+1] && W4min!=c[i+1] && W2min!=c[i+1] && W3min!=c[i+1])
		{
			W7min=c[i+1];
			Xmin=a[i+1];
			Ymin=b[i+1];
		}
	}
//	cout<<"("<<Xmin<<","<<Ymin<<") 權重:"<<W7min<<endl;	
	
	W8min=c[1];
	Xmin=a[1];
	Ymin=b[1];
	for(i=1;i<=n-1;i++)
	{
		if(W8min>c[i+1] && Wmin!=c[i+1] && W7min!=c[i+1] && W6min!=c[i+1] && W5min!=c[i+1] && W4min!=c[i+1] && W2min!=c[i+1] && W3min!=c[i+1])
		{
			W8min=c[i+1];
			Xmin=a[i+1];
			Ymin=b[i+1];
		}
	}
	cout<<"("<<Xmin<<","<<Ymin<<") 權重:"<<W8min<<endl;
			
	W9min=c[1];
	Xmin=a[1];
	Ymin=b[1];
	for(i=1;i<=n-1;i++)
	{
		if(W9min>c[i+1] && Wmin!=c[i+1] && W8min!=c[i+1] && W7min!=c[i+1] && W6min!=c[i+1] && W5min!=c[i+1] && W4min!=c[i+1] && W2min!=c[i+1] && W3min!=c[i+1])
		{
			W9min=c[i+1];
			Xmin=a[i+1];
			Ymin=b[i+1];
		}
	}
//	cout<<"("<<Xmin<<","<<Ymin<<") 權重:"<<W9min<<endl<<endl;	
	 

	
		
	return 0;
}
