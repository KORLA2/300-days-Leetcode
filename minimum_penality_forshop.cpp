class Solution {
public:
    int bestClosingTime(string customers) {

vector<int>yes(customers.size()+1,0),no(customers.size()+1,0);

for(int i=customers.size()-1;i>=0;i--)
yes[i]=yes[i+1]+(customers[i]=='Y');


for(int i=1;i<=customers.size();++i)
no[i]=no[i-1]+(customers[i-1]=='N');
int index=0,ans=INT_MAX;
for(int i=0;i<=customers.size();++i)
if(yes[i]+no[i]<ans){ans=yes[i]+no[i];index=i;}

return index;
    }
};
