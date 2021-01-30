void coutuseredit(int fid)
{
	system("cls");
	cout<<" id    "<<"     login     "<<" stare "<<" tip "<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<setw(2)<<fid<<" |"<<setw(13)<<CONT[fid].login<<setw(9)<<CONT[fid].stare<<setw(7)<<CONT[fid].tip<<endl;
	cout<<"--------------------------------------\n\n"<<endl;
}


void coutuserfind(int fid)
{
	cout<<setw(2)<<fid<<" |"<<setw(13)<<CONT[fid].login<<setw(9)<<CONT[fid].stare<<setw(7)<<CONT[fid].tip<<endl;
	cout<<"--------------------------------------"<<endl;
}



