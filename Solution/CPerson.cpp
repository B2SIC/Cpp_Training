#include <iostream>

using namespace std;

class CPerson{
    private:
        string m_Name;
        int m_Height;
        int m_Weight;
        int m_Score;

    public:
        void PersonSet(string m_Name, int m_Height, int m_Weight, int m_Score){
            this->m_Name = m_Name;
            this->m_Height = m_Height;
            this->m_Weight = m_Weight;
            this->m_Score = m_Score;
        }
        void PersonPrint(){
            cout << "Name: " << m_Name << " " << "Height: " << m_Height << " " << "Weight: " << m_Weight << " " << "Score: " << m_Score << endl;
        }
};

int main(){
    string name;
    int height;
    int weight;
    int score;

    CPerson person_array[3];

    for(int i = 0; i < 3; i++){
        cin >> name >> height >> weight >> score;
        person_array[i].PersonSet(name, height, weight, score);
    }

    cout << "====== Print Data =====" << endl;

    for(int j = 0; j < 3; j++){
        person_array[j].PersonPrint();
    }
}
