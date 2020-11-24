    #include <iostream>
    #include <vector>
    #include <string>
    #include <iomanip>
    #include <random>
    #include <algorithm>

#include <<cstdlib>>

    using namespace std;

    struct Person {
        string name;
        string last_name;
        string club;
    };


    int main() {
        vector<Person> persons;
        vector<Person> startlist;


        cout << "Vänligen mata in förnamn, efternamn samt klubb:" << endl;

        int i = 0;

       do{
           Person person;
           cin >> person.name;
           cin >> person.last_name;
           getline(cin, person.club);
           persons.push_back(person);

       } while (cin);

       persons.pop_back();

    //   cout << "Storlek"  << persons.size() <<endl;

       while (i <= persons.size()) {
         cout << endl;

           int length = persons.size();

         cout << length - i << endl;

         random_device rnd;
         uniform_int_distribution<int> random{0, length - 2};

         //cout << random(rnd) <<endl;

         int place = random(rnd);

       // startlist.push_back(persons[place]);

         // persons.erase(persons.begin() +place);


           cout << persons[place].name  << " " << persons[place].last_name << persons[place].club << endl;


         i++;

       }
        random_device rnd;
      shuffle (persons.begin(), persons.end(), rnd);
        //cout << persons[5].name;
        i=0;
        while (i <= persons.size()) {
            cout << persons[i].name  << " " << persons[i].last_name << persons[i].club << endl;


            i++;
        }
        return 0;
    }
