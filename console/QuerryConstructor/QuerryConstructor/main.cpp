#include <QCoreApplication>
#include <string>
#include <iostream>
using namespace std;

class keywords
{
public:
const string SHOW = "SHOW";
const string CRT = "CREATE";
const string DBS = "DATABASE";
const string DBSS = "DATABASES";
const string TBLS = "TABLES";
const string TBL = "TABLE";
const string USE = "USE";
const string SURC = "SOURCE";
const string DRP = "DROP";
const string _ = " ";
const string KEY = "KEY";
const string PRIM = "PRIMARY";
const string FRGN = "FOREIGN";
const string RFNC = "REFERENCE";
const string DCRB = "DESCRIBE";
const string INS = "INSERT";
const string INTO = "INTO";
const string VALS = "VALUES";
const string UPD = "UPDATE";
const string SET = "SET";
const string WHR = "WHERE";
const string SEL = "SELECT";
const string FROM = "FROM";
const string STR = "*";
const string DNCT = "DISTINCT";
const string GRPB = "GROUP BY";
const string CNT = "COUNT";
const string MAX = "MAX";
const string MIN = "MIN";
const string SUM = "SUM";
const string AVG = "AVG";
const string HVNG = "HAVING";
const string RDRB = "ORDER BY";
const string BTWN = "BETWEEN";
const string LIKE = "LIKE";
const string IN = "IN";
const string JOIN = "JOIN";
const string VIEW = "VIEW";


};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    keywords kw;
    string expression;
    expression = kw.SHOW + kw._ + kw.TBL;
    cout << expression;
    return a.exec();
}
