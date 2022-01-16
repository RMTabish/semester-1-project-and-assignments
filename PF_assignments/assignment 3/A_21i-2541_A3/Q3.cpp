
#include<iostream>
#include<string>

using namespace std;
int main()
{
//variable declerations 
	string query;
	int campus,qi,qi1,ql,ql1,qk,qk1,qp,qp1,qf,qf1;
	
	//program started
	cout << "Welcome to FAST-NUCES! Press 1 for Islamabad campus. Press 2 for Lahore campus. Press 3 for Karachi campus.Press 4 for Peshawar campus.Press 5 for Faisalabad campus.Press 0 to talk to an operator." << endl;
	cin >> campus;
	switch (campus)
			//case for islamabad campus
	case 1 :
		cout << "Welcome to Islamabad campus." << endl;
		cout << "Press 1 for admission related queries."<<endl;

		cout << "Press 2 for academics related queries."<<endl;
		cout << "Press 3 for accounts and fees related queries."<<endl;
		cout << "Press 4 for information technology related queries."<<endl;
		cout << "Press 5 for sports related queries."<<endl;
		cin >> qi;
		//switch for queries in islamabad campus
		switch (qi)
		{
			//switch starts
		case 1:
			cout << "Press 1 for admission in school of computing"<< endl;
		   cout<<"Press 2 for admission in school of electrical engineering"<<endl;

			cin >> qi1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 2:
			cout<<"Press 1 to apply for a degree/transcript generation"<<endl;
			cout<<"Press 2 to freeze your semester"<<endl;
			cout<<"Press 3 to add/drop courses"<<endl;
			cin >> qi1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 3:
			cout<<"Press 1 for queries related to fee challan generation"<<endl;
			cout<<"Press 2 to apply for financial aid"<<endl;
			cout<<"Press 3 apply for a scholarship"<<endl;
			cin >> qi1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 4:
			cout<<"Press 1 to apply for an email id generation"<<endl;
			cout<<"Press 0 to talk to an IT expert"<<endl;
			cin >> qi1;
			if (qi1 == 1)
			{
				cout << "Please enter your query:" << endl;
				getline(cin, query);
				cout << "your query has been registered. We will get back to you soon" << endl;
			}
			else if (qi1 == 0)
				cout << "please wait" << endl;
			break;
		case 5:
			cout << "Press 1 to get sports venue booked " << endl;
			cout << "Press 0 to representative " << endl;
			cin >> qi1;
			if (qi1 == 1)
			{
				cout << "Please enter your query:" << endl;
				getline(cin, query);
				cout << "your query has been registered. We will get back to you soon" << endl;
			}
			else if (qi1 == 0)
				cout << "please wait" << endl;

			break;
			//query swith ends
		}
		break;
	//case for lahore campus
	case 2:
	
		cout << "Welcome to lahore campus." << endl;
		cout << "Press 1 for admission related queries." << endl;

		cout << "Press 2 for academics related queries." << endl;
		cout << "Press 3 for accounts and fees related queries." << endl;
		cout << "Press 4 for information technology related queries." << endl;
		cout << "Press 5 for sports related queries." << endl;
		cin >> ql;
		switch (ql)
		{
		case 1:
			cout << "Press 1 for admission in school of computing" << endl;
			cout << "Press 2 for admission in school of electrical engineering" << endl;
			cout << "Press 3 for admission in school of management sciences" << endl;
			cout << "Press 4 for admission in school of civil engineering " << endl;
			cout << "Press 5 for admission in school of electrical science and humannitites" << endl;
			cin >> ql1;
			cout << "Please enter your query:" << endl;
			getline(cin,query)
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 2:
			cout << "Press 1 to apply for a degree/transcript generation" << endl;
			cout << "Press 2 to freeze your semester" << endl;
			cout << "Press 3 to add/drop courses" << endl;
			cin >> ql1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 3:
			cout << "Press 1 for queries related to fee challan generation" << endl;
			cout << "Press 2 to apply for financial aid" << endl;
			cout << "Press 3 apply for a scholarship" << endl;
			cin >> ql1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 4:

			cout << "Press 1 to apply for an email id generation" << endl;
			cout << "Press 0 to talk to an IT expert" << endl;
			cin >> ql1;
			if (ql1 == 1)
			{
				cout << "Please enter your query:" << endl;
				getline(cin, query);
				cout << "your query has been registered. We will get back to you soon" << endl;
			}
			else if (ql1 == 0)
				cout << "please wait" << endl;
			break;
		case 5:
			cout << "Press 1 to get sports venue booked " << endl;
			cout << "Press 0 to representative " << endl;
			cin >> ql1;
			if (ql1 == 1)
			{
				cout << "Please enter your query:" << endl;
				getline(cin, query);
				cout << "your query has been registered. We will get back to you soon" << endl;
			}
			else if (ql1 == 0)
				cout << "please wait" << endl;

			break;
			}
		break;
	//case for karachi campus
	case 3:
		
		cout << "Welcome to karachi campus." << endl;
		cout << "Press 1 for admission related queries." << endl;

		cout << "Press 2 for academics related queries." << endl;
		cout << "Press 3 for accounts and fees related queries." << endl;
		cout << "Press 4 for information technology related queries." << endl;
		cout << "Press 5 for sports related queries." << endl;
		cin >> qk;
		switch(qk)
		{
		case 1:
			cout << "Press 1 for admission in school of computing" << endl;
			cout << "Press 2 for admission in school of electrical engineering" << endl;
			cout << "Press 3 for admission in school of management sciences" << endl;
			cin >> qk1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 2:
			cout << "Press 1 to apply for a degree/transcript generation" << endl;
			cout << "Press 2 to freeze your semester" << endl;
			cout << "Press 3 to add/drop courses" << endl;
			cin >> qk1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 3:
			cout << "Press 1 for queries related to fee challan generation" << endl;
			cout << "Press 2 to apply for financial aid" << endl;
			cout << "Press 3 apply for a scholarship" << endl;
			cin >> qk1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 4:

			cout << "Press 1 to apply for an email id generation" << endl;
			cout << "Press 0 to talk to an IT expert" << endl;
			cin >> qk1;
			if (qk1 == 1)
			{
				cout << "Please enter your query:" << endl;
				getline(cin, query);
				cout << "your query has been registered. We will get back to you soon" << endl;
			}
			else if (qk1 == 0)
				cout << "please wait" << endl;
			break;
		case 5:
			cout << "Press 1 to get sports venue booked " << endl;
			cout << "Press 0 to representative " << endl;
			cin >> qk1;
			if (qk1 == 1)
			{
				cout << "Please enter your query:" << endl;
				getline(cin, query);
				cout << "your query has been registered. We will get back to you soon" << endl;
			}
			else if (qk1 == 0)
				cout << "please wait" << endl;

			break;

		}
		break;
		//case for peshawar campus
	case 4:
		cout << "Welcome to peshawar campus." << endl;
		cout << "Press 1 for admission related queries." << endl;

		cout << "Press 2 for academics related queries." << endl;
		cout << "Press 3 for accounts and fees related queries." << endl;
		cout << "Press 4 for information technology related queries." << endl;
		cout << "Press 5 for sports related queries." << endl;
		cin >> qp;
		switch (qp)
		{
		case 1:
			cout << "Press 1 for admission in school of computing" << endl;
			cout << "Press 2 for admission in school of electrical engineering" << endl;
			cout << "Press 3 for admission in school of management sciences" << endl;
			cout << "Press 4 for admission in school of civil engineering " << endl;
			cout << "Press 5 for admission in school of electrical science and humannitites" << endl;
			cin >> qp1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 2:
			cout << "Press 1 to apply for a degree/transcript generation" << endl;
			cout << "Press 2 to freeze your semester" << endl;
			cout << "Press 3 to add/drop courses" << endl;
			cin >> qp1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 3:
			cout << "Press 1 for queries related to fee challan generation" << endl;
			cout << "Press 2 to apply for financial aid" << endl;
			cout << "Press 3 apply for a scholarship" << endl;
			cin >> qp1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 4:

			cout << "Press 1 to apply for an email id generation" << endl;
			cout << "Press 0 to talk to an IT expert" << endl;
			cin >> qp1;
			if (qp1 == 1)
			{
				cout << "Please enter your query:" << endl;
				getline(cin, query);
				cout << "your query has been registered. We will get back to you soon" << endl;
			}
			else if (qp1 == 0)
				cout << "please wait" << endl;
			break;
		case 5:
			cout << "Press 1 to get sports venue booked " << endl;
			cout << "Press 0 to representative " << endl;
			cin >> qp1;
			if (qp1 == 1)
			{
				cout << "Please enter your query:" << endl;
				getline(cin, query);
				cout << "your query has been registered. We will get back to you soon" << endl;
			}
			else if (qp1 == 0)
				cout << "please wait" << endl;

			break;

		}
		break;
	//case for peshawar campus
	case 5:
		cout << "Welcome to peshawar campus." << endl;
		cout << "Press 1 for admission related queries." << endl;

		cout << "Press 2 for academics related queries." << endl;
		cout << "Press 3 for accounts and fees related queries." << endl;
		cout << "Press 4 for information technology related queries." << endl;
		cout << "Press 5 for sports related queries." << endl;

		cin >> qf;
		switch (qf)
		{
		case 1:
			cout << "Press 1 for admission in school of computing" << endl;
			cout << "Press 2 for admission in school of electrical engineering" << endl;
			cout << "Press 3 for admission in school of management sciences" << endl;
			cout << "Press 4 for admission in school of civil engineering " << endl;
			cout << "Press 5 for admission in school of electrical science and humannitites" << endl;
			cin >> qf1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 2:
			cout << "Press 1 to apply for a degree/transcript generation" << endl;
			cout << "Press 2 to freeze your semester" << endl;
			cout << "Press 3 to add/drop courses" << endl;
			cin >> qf1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 3:
			cout << "Press 1 for queries related to fee challan generation" << endl;
			cout << "Press 2 to apply for financial aid" << endl;
			cout << "Press 3 apply for a scholarship" << endl;
			cin >> qf1;
			cout << "Please enter your query:" << endl;
			getline(cin, query);
			cout << "your query has been registered. We will get back to you soon" << endl;
			break;
		case 4:

			cout << "Press 1 to apply for an email id generation" << endl;
			cout << "Press 0 to talk to an IT expert" << endl;
			cin >> qf1;
			if (qf1 == 1)
			{
				cout << "Please enter your query:" << endl;
				getline(cin, query);
				cout << "your query has been registered. We will get back to you soon" << endl;
			}
			else if (qf1 == 0)
				cout << "please wait" << endl;
			break;
		case 5:
			cout << "Press 1 to get sports venue booked " << endl;
			cout << "Press 0 to representative " << endl;
			cin >> qf1;
			if (qf1 == 1)
			{
				cout << "Please enter your query: " ;
				getline(cin,query);
		 	cout << "your query has been registered. We will get back to you soon" << endl;
			}
			else if (qf1 == 0)
				cout << "please wait" << endl;

			break;
		}

		break;
	case  0:
		cout << "please wait to talk to the operator" << endl;

	}
	return 0;
}
