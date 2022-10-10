int sol(vector<vector<int>> p,vector<vector<int>> c)
{
	int ans=0;
	vector<vector<int>> gr(p.size(),vector<int>(p[0].size(),0));
		for(int i=0;i<p.size();i++)
	{
		for(int j=0;j<p[0].size();j++)
		{
			gr[i][j]=(p[i][j]-c[i][j]);
		}
	}
	int ans=mx(gr);
	return ans;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> p(n,vector<int>(m,0));
	vector<vector<int>> c(n,vector<int>(m,0));

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>p[i][j];

		}
	}
for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>c[i][j];

		}
	}
	int a=sol(p,c);
	cout<<a;




	}
