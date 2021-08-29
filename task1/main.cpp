#include <iostream>

using namespace std;

const int n= 10;

struct student{
    string studentName;
    int group;
    int score;
    int id;
};



int main()
{
    student a [n]= {
                            {"Smith Francis", 4, 9, 40746},
                            {"Johnson Hart", 3, 8, 35474},
                            {"Williams Fox", 2, 7, 17214},
                            {"John Whitlock", 1, 1, 26967},
                            {"Brown Laurier ", 7, 3, 11131},
                            {"Jones Gloria", 6, 2, 45811},
                            {"Garcia Yarbrough", 5, 4, 56715},
                            {"Davis Laurier", 9, 6, 50115},
                            {"Rodriguez Hale", 8, 5, 11991},
                            {"Martinez Frederick", 9, 3, 21560}
                        };
    int d;
    cout<<"How would you like to find?"<<endl;
    cout<<"1)Find student by name."<<endl;
    cout<<"2)Find student by group."<<endl;
    cout<<"3)Find student by score."<<endl;
    cout<<"4)Find student by ID."<<endl;
    cin>>d;

    switch(d){
    case 1:{
        cout<<"Enter student name"<<endl;
        string name;
        cin>>name;
        string lastname;
        cin>>lastname;
        name = name + " " + lastname;
        for (int i = 0; i<n;i++)
    {
        //cout<<a[i].studentName<<" "<<a[i].group<<" "<<a[i].score<<" "<<a[i].id<<endl;
        if(name == a[i].studentName)
            cout<<"Student "<<a[i].studentName<<" is in group "<<a[i].group<<", has a score of "<<a[i].score<<" and their id is: "<<a[i].id<<endl;
    }
        break;
    }
    case 2:{
        cout<<"Enter student group"<<endl;
        int group;
        cin>>group;

        for (int i = 0; i<n;i++)
    {
        if(group == a[i].group)
            cout<<"Student "<<a[i].studentName<<" is in group "<<a[i].group<<", has a score of "<<a[i].score<<" and their id is: "<<a[i].id<<endl;
    }
        break;
    }
    case 3:{
        cout<<"Enter student score"<<endl;
        int score;
        cin>>score;
        for (int i = 0; i<n;i++)
    {
        if(score == a[i].score)
            cout<<"Student "<<a[i].studentName<<" is in group "<<a[i].group<<", has a score of "<<a[i].score<<" and their id is: "<<a[i].id<<endl;
    }
        break;
    }
    case 4:{
        cout<<"Enter student id"<<endl;
        int id;
        cin>>id;
        for (int i = 0; i<n;i++)
    {
        if(id == a[i].id)
            cout<<"Student "<<a[i].studentName<<" is in group "<<a[i].group<<", has a score of "<<a[i].score<<" and their id is: "<<a[i].id<<endl;
    }
        break;
    }
    default:
        cout<<"No such choice"<<endl;

    }
    /*
    for (int i = 0; i<n;i++)
    {
        cout<<a[i].studentName<<" "<<a[i].group<<" "<<a[i].score<<" "<<a[i].id<<endl;
    }*/
    return 0;
}
