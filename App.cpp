#include<bits/stdc++.h>
#ifdef _WIN32
    #define clear system("cls");
    #define DecT center(" ______                 __           ",-1); cout << endl;center("/_  __/___  ___ _ ____ / /  ___  ____",-1); cout << endl;center(" / /  / -_)/ _ `// __// _ \\/ -_)/ __/",-1); cout << endl;center("/_/   \\__/ \\_,_/ \\__//_//_/\\__//_/   ",-1); cout << endl << endl;
    #define DecS center("   _____  __              __              __ ",-1); cout << endl;center("  / ___/ / /_ __  __ ____/ /___   ____   / /_",-1); cout << endl;center("  \\__ \\ / __// / / // __  // _ \\ / __ \\ / __/",-1); cout << endl;center(" ___/ // /_ / /_/ // /_/ //  __// / / // /_  ",-1); cout << endl;center("/____/ \\__/ \\__,_/ \\__,_/ \\___//_/ /_/ \\__/  ",-1); cout << endl << endl;
    #define Decore  center("            _____ _______ _    _ ",-1);cout << endl;center("     /\\    / ____|__   __| |  | |",-1);cout << endl;center("    /  \\  | (___    | |  | |  | |",-1);cout << endl;center("   / /\\ \\  \\___ \\   | |  | |  | |",-1);cout << endl;center("  / ____ \\ ____) |  | |  | |__| |",-1);cout << endl; center(" /_/    \\_|_____/   |_|   \\____/ ",-1);cout << endl << endl;
#else
    #define clear system("clear");
    #define DecT center("╔╦╗┌─┐┌─┐┌─┐┬ ┬┌─┐┬─┐",2+18); cout << endl;center(" ║ ├┤ ├─┤│  ├─┤├┤ ├┬┘",-3+18); cout << endl;center(" ╩ └─┘┴ ┴└─┘┴ ┴└─┘┴└─",-1+18); cout << endl << endl;
    #define DecS center("╔═╗┌┬┐┬ ┬┌┬┐┌─┐┌┐┌┌┬┐",2+18); cout << endl;center("╚═╗ │ │ │ ││├┤ │││ │ ",-4+18); cout << endl;center("╚═╝ ┴ └─┘─┴┘└─┘┘└┘ ┴ ",-1+18); cout << endl << endl << endl;
    #define Decore  center(" █████╗ ███████╗████████╗██╗   ██╗",29);cout << endl; center("██╔══██╗██╔════╝╚══██╔══╝██║   ██║",31);cout << endl;center("███████║███████╗   ██║   ██║   ██║",25);cout << endl;center("██╔══██║╚════██║   ██║   ██║   ██║",25);cout << endl;center("██║  ██║███████║   ██║   ╚██████╔╝",26);cout << endl; center("╚═╝  ╚═╝╚══════╝   ╚═╝    ╚═════╝ ",24);cout << endl << endl;
#endif // OSisWindows
#define Decore_Open cout << setfill('#') << "       " << "       " << "       " << setw(100) << "\t" << "       " << endl << "       " << "       " << "       " << "       " << setw(86) << "\t" << "       " << endl << "       " << "       " << "       " << "       " << "       "<< setw(72) << "\t"<< endl << endl;

using namespace std;

vector<vector<vector<string>>> teachers = {
    {{"Yared", "random1" , "Yared. M", "1 2 3 4 5 6 7 8 9 10", "C++"}},
    {{"Mulugeta", "random2" , "Mulugeta. L", "1 2 3 4 5 6 7 8 9 10", "Ap.Maths"}},
    {{"Solomon", "random3" , "Solomon. D", "1 2 3 4 5 6 7 8 9 10", "Ap.Physics"}},
    {{"Addisu", "random4" , "Addisu. D", "1 2 3 4 5 6 7 8 9 10", "Emer.Tec"}},
    {{"Dessie", "random5" , "Dessie. W", "1 2 3 4 5 6 7 8 9 10", "TD"}},
    {{"Fassil", "random6" , "Fassil. A", "1 2 3 4 5 6 7 8 9 10", "English"}}
};
map<string, vector<vector<vector<string>>>> students;

void main_menu();
void auth();
void login();
void reg();
void tab(vector<vector<string>> h);
void edit(vector<vector<vector<string>>> &p, int d);
void run(char o,vector<vector<string>> l);
void center(string inp,int shift);
void table(vector<vector<vector<string>>> p, int w);
string us,ps;

int main(){
    main_menu();
    return 0;
}

void center(string inp,int shift){
    string space(((145-inp.length())/2)+shift,' ');
    if(shift==0)
        cout << space << inp << endl << endl;
    else
        cout << space << inp;
}

void main_menu(){
    int n;
    Decore_Open
    Decore

    center("ASTU pre-engineering courses result management system",0);
    center("Enter '1' to Login,  Enter '2' to register , To exit enter '0'",0);
    center(" ",-1);
    cin >> n;
    switch (n){
    case 1:
        login();
        break;
    case 2:
        reg();
        break;
    case 0:
        break;
    default:
        clear
        main_menu();
    }
}

void auth(){
    for (auto i = students.begin(); i != students.end(); ++i)
    {
        for (short j = 0; j < (*i).second.size(); j++){
            if((*i).second[j][0][0] == us && (*i).second[j][0][1] == ps)
                run('S',(*i).second[j]);
                break;
    }
    }
    short k = 0;
    for (short i = 0; i < teachers.size(); i++){
        if(teachers[i][0][0] == us && teachers[i][0][1] == ps){
                run('T',teachers[i]);
                k++;
        }
    }
    if (k == 0)
    {
        cout << endl;
        center("Username and password doesn't match....Try again",0);
        cout << endl << "Press <Enter> to continue...";
        cin.get();
        clear
        main_menu();
    }
}

void reg(){
    string name,age,sex,sec,us,ps;
    center("Name     ---->  ",-11);
    cin.ignore();
    getline(cin,name);
    center("Age      ---->  ",-11);
    getline(cin,age);
    center("Sex      ---->  ",-11);
    getline(cin,sex);
    cout << endl;
    center("Enter Section 1 to 10.",0);
    int y ;
    do
    {
        center("Sec      ---->  ",-11);
        getline(cin,sec);
        y = stoi(sec);
    } while (y >= 10 );
    center("Username ---->  ",-11);
    getline(cin, us);
    center("Password ---->  ",-11);
    getline(cin, ps);
    vector<vector<string>> student;
    vector<string> stu = {us , ps, name, age, sex};
    vector<string> results = {"0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0","0"};
    student.push_back(stu);
    student.push_back(results);
    students[sec].push_back(student);
    clear
    main_menu();
}

void run(char o,vector<vector<string>> l){
    if(o == 'T'){
        string T;
        bool check = false;
        vector<int> section;
        stringstream X(l[0][3]);
        short j = 0;
        while (getline(X, T, ' '))
        {
            section.push_back(stoi(T));
            j++;
        }
        
        string choice;
        int k =1;

        clear
        Decore_Open
        cout << endl;
        DecT
        center(l[0][0],0);
        cout << endl << endl;
        center("Choose which Section(Group) to view",0);
        cout << endl;
        for(auto itr = students.begin(); itr != students.end(); ++itr){
            for (short i = 0; i < section.size(); i++)
            {
                if (stoi((*itr).first) == section[i]){
                    string oh = to_string(k) + ", Section " + (*itr).first;
                    center(oh, 0);
                    k++;}
            }
            }
        
        if (k == 1)
        {
            cout << endl;
            center("Students haven't registered yet",0);
            cout << endl;
            cout << endl << "Press <Enter> to continue...";
            cin.get();
            clear
            main_menu();
        }
        
        
        else{
            int y = l[0][4]=="C++" ? 1 : l[0][4]=="Ap.Maths" ? 2 : l[0][4]=="Ap.Physics" ? 3 : l[0][4]=="Emer.Tec" ? 4 : l[0][4]=="TD" ? 5 : 6;
            do{
            center("Sec ---->  ",-7);
            cin >> choice;
            for(auto itr = students.begin(); itr != students.end(); ++itr){
                if((*itr).first == choice)
                    check = true;
            }
            }while (!check);
            table(students[choice],y);
            cout << endl;
            edit(students[choice],y);
            
        }

    }
    
    else{
        clear
        Decore_Open
        cout << endl;
        DecS
        center(l[0][2],0);
        tab(l);
        cout << endl;
        cout << endl << "Press <Enter> to continue...";
        cin.get();
        clear
        main_menu();
    }
}

void table(vector<vector<vector<string>>> p, int w){
    cout << endl;
    cout << setfill('_');
    cout << setw(120) << '_'<< endl;
    cout << setfill(' ');
    cout << "|" << setw(5) << left << "R_no." << "|" << setw(20) << "Name" << "|" << setw(12) << "Age"  << "|" << setw(12) << "Sex" << "|" << setw(10) << "Test-I" << "|" << setw(10) << "Test-II" << "|" << setw(10) << "Test-III" << "|" << setw(10) << "Mid-Exam" << "|" << setw(10) << "Final-Exam" << "|" << setw(10) << "Total" << "|" << endl;
    cout << setfill('-');
    cout << setw(6) << "|" << setw(21) << "|" << setw(13) << "|" << setw(13) << "|" << setw(11) << "|" << setw(11) << "|" << setw(11) << "|" << setw(11) << "|" << setw(11) << "|" << setw(11) << "|" << "|" << endl;
    float sum;
    int y = w==1 ? 0 : w==2 ? 6 : w==3 ? 12 : w==4 ? 18 : w==5 ? 24 : w ==6 ? 30 : 36;
    for(short i = 0; i < p.size(); i++){
        sum = 0;
        for(short j = y; j < y+6; j++)
            sum += stoi(p[i][1][j]);
        cout << setfill(' ');
        cout << "|" << setw(5) << left << i+1 << "|" << setw(20) << p[i][0][2] << "|" << setw(12) << p[i][0][3]  << "|" << setw(12) << p[i][0][4] << "|" << setw(10) << p[i][1][y] << "|" << setw(10) << p[i][1][y+1] << "|" << setw(10) << p[i][1][y+2] << "|" << setw(10) << p[i][1][y+3] << "|" << setw(10) << p[i][1][y+4] << "|" << setw(10) << sum << "|" << endl;
    }
    cout << setfill('-');
    cout << setw(120) << '-'<< endl;
}

void tab(vector<vector<string>> h){
    vector<string> y = {"C++" ,"Ap.Maths", "Ap.Physics", "Emer.Tec", "TD", "English"};
    vector<string> e = {"3","4","3","3","3","3"};
    cout << endl;
    cout << setfill('_');
    cout << setw(134) << "_"<< endl;
    cout << setfill(' ');
    cout << "|" << left << setw(20) << "Subject" << "|" << setw(15) << "Credit Hour"  << "|" << setw(15) << "Test-I" << "|" << setw(15) << "Test-II" << "|" << setw(15) << "Test-III" << "|" << setw(15) << "Mid-Exam" << "|" << setw(15) << "Final-Exam" << "|" << setw(15) << "Total" << "|" << endl;
    cout << setfill('-');
    cout << '|'  << setw(133) << right << '|'<< endl;
    for (short i = 0; i < 30; i+=6)
    {
        float sum =0;
        for(short j = i; j < i+6; j++)
            sum += stoi(h[1][j]);
        cout << setfill(' ');
        cout << "|" << left << setw(20) << y[i/6] << "|" << setw(15) << e[i/6] << "|" << setw(15) << h[1][i] << "|" << setw(15) << h[1][i+1] << "|" << setw(15) << h[1][i+2] << "|" << setw(15) << h[1][i+3] << "|" << setw(15) << h[1][i+4] << "|" << setw(15) << sum << "|" << endl;
    }
    cout << setfill('_');
    cout << '|'  << setw(133) << right << '|'<< endl;
}

void edit(vector<vector<vector<string>>> &p, int d){
    int m;
    bool ch;
    int k = d==1 ? 0 : d==2 ? 6 : d==3 ? 12 : d==4 ? 18 : d==5 ? 24 : d ==6 ? 30 : 36;
    string g,s;
    ch = false;
    center("Enter '1' to Edit,  Enter '2' to get back to Main-menu  , To exit enter '0'",0);
    cout << endl;
    do{
    center("----> ",-5);
    cin >> m;
    if(m!=1 && m!=2 && m!=0)
        ch = true;
    } while (ch);
    
    switch(m){
        case 1:{
            int h;
            float sum = 0;
            cout << endl;
            center("Enter 'R no.' of the student you want to Edit",0);
            cout << endl;
            center("----> ",-5);
            cin >> h;
            h -= 1;
            cout << endl;
            for(short j = 0; j < p.size(); j++)
                sum += stoi(p[h][1][j]);
            cout << setfill('_');
            cout << setw(120) << '_'<< endl;
            cout << setfill(' ');
            cout << "|" << setw(12) << p[h][0][2] << "|" << setw(12) << p[h][0][3]  << "|" << setw(20) << p[h][0][4] << "|" << setw(10) << p[h][1][0] << "|" << setw(10) << p[h][1][1] << "|" << setw(10) << p[h][1][2] << "|" << setw(10) << p[h][1][3] << "|" << setw(10) << p[h][1][4] << "|" << setw(10) << sum << "|" << endl;
            cout << setfill('-');
            cout << setw(120) << '-'<< endl;
            cout << setfill(' ');
            center("Which exam result do you want to edit? ",0);
            center("----->",-5);
            cin >> g;
            if (g == "Final-Exam")
            {
                center("Current Final-Exam Result = ", -2);
                cout << p[h][1][k+4] << endl;
                center("Change current result to = ", -2);
                cin >> s;
                p[h][1][k+4] = s;
                clear
                table(p,d);table(p,d);
                cout << endl;
                edit(p,d);
            }
            else if (g== "Mid-Exam")
            {
                center("Current Mid-Exam Result = ", -2);
                cout << p[h][1][k+3] << endl;
                center("Change current result to = ", -2);
                cin >> s;
                p[h][1][k+3] = s;
                clear
                table(p,d);
                cout << endl;
                edit(p,d);
            }
            else if (g== "Test-III")
            {
                center("Current Test-III Result = ", -2);
                cout << p[h][1][k+2] << endl;
                center("Change current result to = ", -2);
                cin >> s;
                p[h][1][k+2] = s;
                clear
                table(p,d);
                cout << endl;
                edit(p,d);
            }
            else if (g== "Test-II")
            {
                center("Current Test-II Result = ", -2);
                cout << p[h][1][k+1] << endl;
                center("Change current result to = ", -2);
                cin >> s;
                p[h][1][k+1] = s;
                clear
                table(p,d);
                cout << endl;
                edit(p,d);
            }
            else if(g== "Test-I"){
                center("Current Test-I Result = ", -2);
                cout << p[h][1][0] << endl;
                center("Change current result to = ", -2);
                cin >> s;
                p[h][1][k+0] = s;
                clear
                table(p,d);
                cout << endl;
                edit(p,d);
            }
            else{
                center("Please Try again to continue" , 0);
                clear
                table(p,d);
                cout << endl;
                edit(p,d);
            }
            
            break;
        }
        case 2:{
            clear
            main_menu();
            break;
            }
        case 0:{
            system("exit");
            break;}
    }

}

void login(){
    char s[10] = {0};
    center("Username ---->  ",-7);
    cin.ignore();
    getline(cin, us);
    center("Password ---->  ",-7);
    getline(cin, ps);
    auth();
}