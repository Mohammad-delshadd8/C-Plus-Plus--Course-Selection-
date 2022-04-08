#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
class vorod
{
	protected:
		string first_name;
		string last_name;
		long kode_meli;
		string password;
        string pass;
	public:
	    int chck;
        vorod(){
	cout<<"\t-----------------------";
	cout<<"\n\t\tKhosh Amadid \n";
	cout<<"\t-----------------------"<<endl;
	cout<<"\t-----------------------"<<endl;
	cout<<"1)Vorood"<<endl;
    cout<<"2)Sabt nam"<<endl;
	int n; cin>>n;
			if (n==2)
			{
system("cls");
	ofstream studentt ("students.txt",ios::app);

			cout<<"Naam:"<<endl;
			cin>>first_name;
			cout<<"Naam Khanevadegi:"<<endl;
			cin>>last_name;
			cout<<"Kode Meli:"<<endl;
			cin>>kode_meli;
			cout<<"Password:"<<endl;
			cin>>password;
        studentt<<kode_meli<<password<<endl;
			}
			else if (n==1)

			{
                system("cls");

        string srch,u;
		cout<<"Username + password"<<endl;
		cin>>u;
		//cout<<"Password:"<<endl;
		//cin>>p;
	ifstream studentt("students.txt");
		studentt>>srch;
        if(srch==u)
		{
                chck=1;
                       }
                       else
                        {
                        chck=0;
                        cout<<"Username Ya Password Eshtebah Ast."<<endl;
                       }

            }
    }
};
class university : public vorod {
    public:
        int i; //tedad kol doros
        int numVahed;
        int numkol=0;
         int nummvVahed;
        int lesson;
        int ndars[20];
        char finish;
            university(){
                ndars[0]=0;
                cout << "Tedad kol doros entekhabi ra vared konid"<<endl;
                cin >> i;

                    for(int j=1; j<=i; j++){
                        cout << "aya mikhahid entekhab vahed konid?" << "   " << " y or n " <<endl;
                        cin >> finish;
                            if (finish=='n'){
                                string doroos;
                                //ifstream
                            };
                                 if(finish=='y'){
                                        system("cls");
                                    cout<<"\t-----------------------"<<endl;
                                    cout<<"\t-----------------------"<<endl;
                                    ndars[1]=ndars[0]+1;
                                    numVahed=3;
                                    cout<<"shomare dars:   "<<endl;
                                     cout<<"nam dars:   Riyazi"<<ndars[1]<<endl;
                                     cout<<"ostad :   AAA"<<endl;
                                     cout<<"zaman :   Shanbe"<<endl;
                                     cout<<"Vahed:   "<<numVahed<<endl;
                                     cout<<"\t-----------------------"<<endl;
                                     ndars[2]=ndars[1]+1;
                                    numVahed=3;
                                     cout<<"shomare dars:   "<<ndars[2]<<endl;
                                      cout<<"nam dars:   Zaban"<<endl;
                                      cout<<"ostad :   BBB"<<endl;
                                      cout<<"zaman :   1Shanbe"<<endl;
                                      cout<<"Vahed:   "<<numVahed <<endl;
                                      cout<<"\t-----------------------"<<endl;
                                      ndars[3]=ndars[2]+1;
                                     numVahed=4;
                                      cout<<"shomare dars:   "<<ndars[3]<<endl;
                                      cout<<"shomare dars:   BarnameSazi"<<endl;
                                      cout<<"ostad :   CCC"<<endl;
                                      cout<<"zaman :   2Shanbe"<<endl;
                                      cout<<"Vahed:   "<<numVahed<<endl;
                                      cout<<"\t-----------------------"<<endl;
                                      ndars[4]=ndars[3]+1;
                                      numVahed=2;
                                       cout<<"shomare dars:   "<<ndars[4]<<endl;
                                        cout<<"nam dars:   Madar"<<endl;
                                        cout<<"ostad :   DDD"<<endl;
                                        cout<<"zaman :   3Shanbe"<<endl;
                                        cout<<"Vahed:   "<<numVahed<<endl;
                                        cout<<"\t-----------------------"<<endl;
                                        ndars[5]=ndars[4]+1;
                                        numVahed=3;
                                       cout<<"shomare dars:   "<<ndars[5]<<endl;
                                        cout<<"nam dars:   Graphic"<<endl;
                                        cout<<"ostad :   GGG"<<endl;
                                        cout<<"zaman :   4Shanbe"<<endl;
                                        cout<<"Vahed:   "<<numVahed<<endl;
                                        cout<<"\t-----------------------"<<endl;
                                        ndars[6]=ndars[5]+1;
                                        numVahed=3;
                                       cout<<"shomare dars:   "<<ndars[6]<<endl;
                                        cout<<"nam dars:   Physics"<<endl;
                                        cout<<"ostad :   LLL"<<endl;
                                        cout<<"zaman :   1Shanbe"<<endl;
                                        cout<<"Vahed:   "<<numVahed<<endl;
                                        cout<<"\t-----------------------"<<endl;
                                        ndars[7]=ndars[6]+1;
                                        numVahed=4;
                                       cout<<"shomare dars:   "<<ndars[7]<<endl;
                                        cout<<"nam dars:   Azmayeshgah"<<endl;
                                        cout<<"ostad :   MMM"<<endl;
                                        cout<<"zaman :   Shanbe"<<endl;
                                        cout<<"Vahed:   "<<numVahed<<endl;
                                        cout<<"\t-----------------------"<<endl;
                                        ndars[8]=ndars[7]+1;
                                        numVahed=2;
                                       cout<<"shomare dars:   "<<ndars[8]<<endl;
                                        cout<<"nam dars:   Mabani"<<endl;
                                        cout<<"ostad :   SSS"<<endl;
                                        cout<<"zaman :   5Shanbe"<<endl;
                                        cout<<"Vahed:   "<<numVahed<<endl;
                                        cout<<"\t-----------------------"<<endl;
                                        cout<<"\t-----------------------"<<endl;
                                    cout << "ShomareDars  " << j <<"  ra vared konid"<<"\t 0 baraye khoroj"<<endl;
                                    cout<<"adad beyn  1   ta   "<< ndars[8]<<"   bashad"<<endl;
                                    cin >> lesson;
                                     ofstream listtVahed ("evahed.txt",ios::app);
                                    switch(lesson){
                                case 0:
                                    break;

                                case 1:

                                         listtVahed<<"nam dars:   Riyazi"<<endl;
                                        listtVahed<<"ostad :   AAA"<<endl;
                                        listtVahed<<"zaman :   Shanbe"<<endl;
                                        listtVahed<<"\t-----------------------"<<endl;
                                        system("cls");
                                         cout<<"\t-----------------------"<<endl;
                                        cout <<"[sabt movafagh.]";
                                        cout<<"\t-----------------------"<<endl;
                                        break;
                                case 2:

                                      cout<<"nam dars:   Zaban"<<endl;
                                      listtVahed<<"ostad :   BBB"<<endl;
                                      listtVahed<<"zaman :   1Shanbe"<<endl;
                                      listtVahed<<"\t-----------------------"<<endl;
                                      system("cls");
                                       cout<<"\t-----------------------"<<endl;
                                        cout <<"[sabt movafagh.]";
                                        cout<<"\t-----------------------"<<endl;
                                      break;
                                       case 3:

                                      listtVahed<<"nam dars:   BarnameSazi"<<endl;
                                      listtVahed<<"ostad :   ccc"<<endl;
                                      listtVahed<<"zaman :   2Shanbe"<<endl;
                                      listtVahed<<"\t-----------------------"<<endl;
                                      system("cls");
                                       cout<<"\t-----------------------"<<endl;
                                        cout <<"[sabt movafagh.]";
                                        cout<<"\t-----------------------"<<endl;
                                      break;
                                       case 4:
                                      listtVahed<<"nam dars:   madar"<<endl;
                                     listtVahed<<"ostad :   DDD"<<endl;
                                      listtVahed<<"zaman :   3Shanbe"<<endl;
                                     listtVahed<<"\t-----------------------"<<endl;
                                      system("cls");
                                      cout<<"\t-----------------------"<<endl;
                                        cout <<"[sabt movafagh.]";
                                        cout<<"\t-----------------------"<<endl;
                                      break;
                                       case 5:
                                      listtVahed<<"nam dars:   Graphic"<<endl;
                                      listtVahed<<"ostad :   GGG"<<endl;
                                      listtVahed<<"zaman :   4Shanbe"<<endl;
                                      listtVahed<<"\t-----------------------"<<endl;
                                      system("cls");
                                      cout<<"\t-----------------------"<<endl;
                                        cout <<"[sabt movafagh.]";
                                        cout<<"\t-----------------------"<<endl;
                                      break;
                                       case 6:
                                      listtVahed<<"nam dars:   Phyzics"<<endl;
                                      listtVahed<<"ostad :   LLL"<<endl;
                                      listtVahed<<"zaman :   5Shanbe"<<endl;
                                      listtVahed<<"\t-----------------------"<<endl;
                                      system("cls");
                                      cout<<"\t-----------------------"<<endl;
                                        cout <<"[sabt movafagh.]";
                                        cout<<"\t-----------------------"<<endl;
                                      break;
                                     case 7:

                                      listtVahed<<"nam dars:   azmayeshgah"<<endl;
                                      listtVahed<<"ostad :   MMM"<<endl;
                                      listtVahed<<"zaman :   Shanbe"<<endl;
                                      listtVahed<<"\t-----------------------"<<endl;
                                      system("cls");
                                      cout<<"\t-----------------------"<<endl;
                                        cout <<"[sabt movafagh.]";
                                        cout<<"\t-----------------------"<<endl;
                                      break;
                                       case 8:

                                      listtVahed<<"nam dars:   Mabani"<<endl;
                                      listtVahed<<"ostad :   SSS"<<endl;
                                      listtVahed<<"zaman :   5Shanbe"<<endl;
                                      listtVahed<<"\t-----------------------"<<endl;
                                      system("cls");
                                      cout<<"\t-----------------------"<<endl;
                                        cout <<"[sabt movafagh.]";
                                        cout<<"\t-----------------------"<<endl;
                                      break;
                                    /*numkol=numkol+numVahed[j];
                                    cout <<"[sabt movafagh.] \t"<< "tedad kol vahed entekhabi ta inja :    "<< numkol << "\n" << endl;
                                    if(numkol>21) {
                                        cout << "\n -------------------------------------"<< endl;
                                        cout << " [Entekhab vahed motabar nist.] \t" <<"tedad kol vahed entekhabi bayad kamtar az 20 bashad"<< endl;
                                        cout << "\n -------------------------------------"<< endl;
                                        break;
                                    }*/
                                }
                  }      }
        }
};
main()
{
    int chck;
   vorod m;
    if(chck=1){
        system("cls");
    cout<<"\t-----------------------";
	cout<<"\n\t\tvorod movafagh \n";
	cout<<"\t-----------------------"<<endl;
	cout<<"\t-----------------------"<<endl;
        university x;
    }
    return 0;
			}

