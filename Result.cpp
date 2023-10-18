#include <iostream>
using namespace std;
class asd{
	int n,roll_no,of[10],mm=0;
	string subject[10];
	float marks[10],total=0,avg,percentage[10],per;
	public:
		string name,exam[100];
		int no,ex;
		void a(){
			cout<<"enter the roll no."<<endl;
			cin>>roll_no;
			cout<<"enter the no. of subjects:"<<endl;
			cin>>n;
			for (int i=1;i<=n;i++){
				cout<<"enter the name of the subject"<<i<<" :"<<endl;
				cin>>subject[i];
				cout<<"enter the marks"<<i<<" :"<<endl;
				cin>>marks[i];
				cout<<"enter the max_marks"<<i<<" :"<<endl;
				cin>>of[i];
				percentage[i]=(marks[i]*100)/of[i];
				cout<<"percentage"<<i<<" is"<<percentage[i]<<endl;
				if (percentage[i]>100){
					cout<<"sorry!"<<endl;
				}
				else if (percentage[i]>=90){
					cout<<">v.good"<<endl;
				}
				else if (percentage[i]>=70){
					cout<<">good"<<endl;
				}
				else if (percentage[i]>=50){
					cout<<">avg. marks"<<endl;
				}
				else if(percentage[i]>33){
					cout<<">just passed"<<endl;
				}
				else {
					cout<<">fail"<<endl;
				}
			}
			for (int i=1;i<=n;i++){
				total=total+marks[i];
				mm=mm+of[i];
			}
		}
		void s(){
			cout<<"Ename"<<"\t"<<"roll_no"<<"\t"<<"subject"<<"\t"<<"marks"<<"\t"<<"percentage"<<endl;
			for (int i=1;i<=n;i++){
				cout<<name<<"\t"<<roll_no<<"\t"<<subject[i]<<"\t"<<marks[i]<<"\t"<<percentage[i]<<"%"<<endl;
			}
			cout<<"total:"<<total<<endl;
			avg=total/n;
			cout<<"avg. marks:"<<avg<<endl;
			per=(total*100)/mm;
			cout<<"total percentage:"<<per<<endl;
		}
};
int main(){
	asd qw;
	cout<<"enter the no. of exam:"<<endl;
	cin>>qw.ex;
	for(int i=0;i<qw.ex;i++){
		cout<<"enter the name of the examination:"<<endl;
		cin>>qw.exam[i];
		cout<<qw.exam[i]<<endl;
		cout<<"enter the no. of student:"<<endl;
		cin>>qw.no;
		asd d[qw.no];
		for(int i=0;i<qw.no;i++){
			cout<<"enter the name:"<<endl;
			cin>>d[i].name;
			cout<<d[i].name<<endl;
			d[i].a();
		}
		cout<<"                                                     "<<qw.exam[i]<<endl;
		for(int i=0;i<qw.no;i++){
			d[i].s();
		}
	}
}
