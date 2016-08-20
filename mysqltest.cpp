#include<iostream>
#include<string>
#include<mysql.h>
#include<sstream>
using namespace std;

int main()
{
	MYSQL *connection,mysqlc;
	MYSQL_RES res;
	MYSQL_ROW mrow;
	std::stringstream ss;

	mysql_init(&mysqlc);
	connection=mysql_real_connect(&mysqlc,"localhost","sanku","testngram","ngram",0,0,0);
	if(connection == NULL)
	{
		cout << "Problem with connection:" << mysql_error(&mysqlc)<<endl;
	}

	else
	{
			ss<< "Test";

	}



	return 0;
}
