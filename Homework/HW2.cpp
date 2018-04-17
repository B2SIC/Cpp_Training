/*****************************************
 * Name: 김영훈
 * StudentID: 20171597
 * ProgramID: Hw2
 * Description: Singly Linked List 를 구현하고 이를 이용해 주어진 문제를 해결한다.
 * Algorithm:
 * Node 구조체를 선언하여 data 형식에 맞게 NAME, ID, MAJOR, GRADE를 받아올 수 있도록 변수를 만들어둔다.
 * 이를 이용해서 List 클래스에서는 append, display, sort_by_name, print_by_grade, print_by_major 함수를 구현한다.
 * append 함수의 경우 파라미터로 들어온 값들에 대해 temp 노드를 생성하여 입력 값들을 받아와서 처리하는데,
 * 이 때 만약 head가 0, 즉 리스트 안에 데이터가 없으면 temp는 첫번 째 데이터가 되므로 head가 temp를 가리키도록 한다.
 * 반면에, 데이터가 이미 존재하고 있을 경우, 맨 뒤에 데이터를 삽입하기 위해서 포인터 변수를 사용해서 리스트의 끝을 가리키도록 next 값이 0이 될 때까지
 * 포인터를 한 칸씩 이동시키고, 끝에 도달했을 때 해당 위치의 포인터 변수의 next를 temp에 연결시킨다.
 * display 함수는 현재 리스트안에 존재하는 데이터들의 목록을 출력해주는 함수이다.
 * 따라서 head 포인터는 건들면 데이터 링크가 깨져버리기 때문에 포인터 변수를 하나 선언해서 head를 가리키도록 한 다음
 * 한 칸씩 이동하면서 해당 포인터가 가리키는 데이터 값들(NAME, ID, MAJOR, GRADE)을 형식에 맞게 출력한다.
 * sort_by_name 함수는 문제 1에 따라 작성된 함수로, 이름을 기준으로 알파벳 오름차순 정렬을 해주는 함수이다.
 * 이에 대한 처리를 용이하게 하기 위해서 이름에 대한 데이터 타입을 char형으로 저장하도록 했다.
 * 따라서 각 이름에 대한 아스키 코드 값으로 이름을 기준으로한 알파벳 오름차순 정렬을 할 수 있다.
 * for문을 이용해서 리스트 내부를 순환하는데, 이름으로 들어올 수 있는 알파벳 아스키 코드 값은 A = 65 ~ Z = 90 이다.
 * 따라서 최대값은 90이므로 iName이라는 변수에 이보다 큰 91을 저장하고 포인터 변수와 for문을 이용해 리스트를 순환할 때마다
 * 각 데이터의 이름에 대한 아스키 코드 값을 비교해서 가장 작은 순서부터 새로운 정렬 리스트에 append 함수를 이용해 추가한다.
 * 단, 기존 리스트의 보존을 위해 데이터를 삭제하면서 정렬하지 않고 배열을 하나 생성해서 for문으로 리스트를 순환하는데
 * append 대상이 되는 가장 작은 아스키 코드 값을 이 배열에 넣고 조건문을 통해 배열 안에 해당 아스키 코드 값을 넣어서 이미 append 된 데이터를 제외시킨다.
 * print_by_grade 함수는 GRADE가 A인 학생만 출력해주는 함수이다.
 * print_by_major 함수도 위 함수와 유사한 동작을 하는 함수이며, 기본 알고리즘은 같다.
 * 우선 포인터 변수를 하나 선언하고 head를 가리키도록 한 다음, 포인터가 0이 될 때까지(끝까지) 링크를 따라 이동하면서 각 데이터의 grade 값이 A이면 출력해준다.
 * print_by_major 함수의 경우에는 대상이 되는 리스트에서 major 값이 CS 인 데이터만 출력한다.
 * data1과 data2를 합치는 알고리즘은 초기에 data1을 입력으로 받을 때 병합 리스트(all_sll) 하나를 선언해서 그 값들을 모두 저장한다음
 * data2 파일을 새로 열 때, 해당 파일에 존재하는 데이터들을 병합 리스트에 append 해주는 방식이다.
 * Variables:
 * append() : 리스트 끝에 데이터를 삽입한다.
 * display() : 리스트의 데이터들을 출력한다.
 * sort_by_name(List & sortll) : 리스트를 이름을 기준으로 오름차순 정렬 한다.
 * print_by_grade() : GRADE가 A 인 학생들만 출력한다.
 * print_by_major() : MAJOR가 CS 인 학생들만 출력한다.
 * find(first, last, val) : 배열에서 값을 비교하여 원하는 값을 찾아준다.
 * ****************************************
*/

#include <iostream>
#include <fstream> // data 파일을 읽어오기 위해서 포함.
#include <string> // string 데이터 타입을 다루기 위해 포함.
#include <algorithm> // find 함수 사용을 위해 포함.

using namespace std;

// 구조체를 사용하여 입력으로 들어올 데이터들을 저장하기 위해 사용한다.
struct Node{
    char name;
    int id;
    string major;
    string grade;
    Node *next;
};

class List{
    private:
        Node *head;
    public:
        List() {head = 0;}

        void append(char, int, string, string);
        void display();
        void sort_by_name(List& sortll);
        void print_by_grade();
        void print_by_major();
};

/*********************************************
 * function: append
 * description: append 함수의 사용목적은 리스트에 값을 추가 하기 위함이다.
 * variables:
 * name: 입력으로 들어오는 NAME을 담아 둘 변수이다.
 * id : 입력으로 들어오는 ID를 담아 둘 변수이다.
 * string : 입력으로 들어오는 MAJOR를 담아 둘 변수이다.
 * grade : 입력으로 들어오는 GRADE를 담아 둘 변수이다.
 * 여기서 사용된 변수들은 리스트에 값을 추가하기 위해서 사용된다.
 * temp : 입력으로 들어온 변수들을 구조체 노드에 담아두기 위해서 사용된다.
 * ptr : 리스트의 끝으로 이동하기 위해서 사용된다.
 * *******************************************
*/
void List::append(char name, int id, string major, string grade)
{
    Node *temp = new Node;
    temp->name = name;
    temp->id = id;
    temp->major = major;
    temp->grade = grade;

    if(head == 0)
        head = temp;
    else{
        Node *ptr = head;
        while(ptr->next != 0)
            ptr = ptr->next;
        ptr->next = temp;
    }
}

/*****************************************************************
 * function: display
 * description: 리스트에 존재하는 데이터들을 출력하기 위한 함수이다.
 * variables:
 * ptr : 초기에 head로 지정하고 리스트의 끝까지 이동하며 데이터 정보를 출력하기 위해서 사용된다.
 * ***************************************************************
*/
void List::display()
{
    Node *ptr;

    ptr = head;
    while(ptr)
    {
        cout << ptr->name << " " << ptr->id << " " << ptr->major << " " << ptr->grade << " ";
        ptr = ptr->next;
        cout << endl;
    }
}

/***************************************************************************************
 * function: sort_by_name
 * description: 리스트를 알파벳 이름 순으로 오름차순 정렬하는 함수
 * variables:
 * ptr : 초기에 head로 지정하고 리스트의 끝까지 이동하며 값을 비교하기 위해 사용된다.
 * used_arr[8] : 아스키 코드에 대한 중복 검사를 방지하기 위해 이미 처리된 아스키 코드 값을 저장하는데 사용된다.
 * iName : 이름에 대한 문자를 아스키 코드로 비교하기 위해서 사용된다.
 * sort_id, sort_major, sort_grade : 알파벳 순서로 정렬된 각 데이터들을 차례로 담는데 사용된다.
 * *************************************************************************************
*/
void List::sort_by_name(List& sortll)
{
    Node *ptr;
    int used_arr[8] = {0, };

    for(int i = 0; i < 8; i++)
    {
        ptr = head;
        int iName = 91;
        int sort_id = ptr->id;
        string sort_major = ptr->major;
        string sort_grade = ptr->grade;

        for(int k = 0; k < 8; k++)
        {
            /***************************************************************************************
             * function: find(first, last, val)
             * description: 배열에서 원하는 값이 있는지 여부를 확인하기 위해 사용하는 함수이다.
             * find 함수는 배열에서 원하는 값을 찾아주는데, 해당 값이 나오는 주소를 반환하며, 찾는 값이 없을 경우 배열의 마지막 주소를 반환한다.
             * 배열에서 값의 존재 여부를 찾는 함수를 for문을 이용하여 직접 구현할 수도 있지만, 본 과제의 핵심과 거리가 멀기 때문에 라이브러리를 사용했다.
             * *************************************************************************************
            */
            if(iName > int(ptr->name) && find(used_arr, used_arr + 8, int(ptr->name)) == used_arr + 8)
            {
                iName = ptr->name;
                sort_id = ptr->id;
                sort_major = ptr->major;
                sort_grade = ptr->grade;
            }
            ptr = ptr->next;
            
        }
        sortll.append((char)iName, sort_id, sort_major, sort_grade);
        used_arr[i] = iName;
    }
}

/***************************************************************************************
 * function: print_by_grade
 * description: 리스트에 존재하는 데이터들 중 GRADE가 A인 데이터를 출력하기 위해 사용된다.
 * variables:
 * ptr : 초기에 head로 지정하고 리스트의 끝까지 이동하며 데이터를 검사하기 위해 사용된다.
 * *************************************************************************************
*/
void List::print_by_grade()
{
    Node *ptr;
    ptr = head;
    
    while(ptr)
    {
        if(ptr->grade == "A")
            cout << ptr->name << " " << ptr->id << " " <<ptr->major << " " << ptr->grade << endl;
        
        ptr = ptr->next;
    }

}

/***************************************************************************************
 * function: print_by_major
 * description: 리스트에 존재하는 데이터들 중 MAJOR가 CS인 데이터를 출력하기 위해 사용된다.
 * variables:
 * ptr : 초기에 head로 지정하고 리스트의 끝까지 이동하며 데이터를 검사하기 위해 사용된다.
 * *************************************************************************************
*/
void List::print_by_major()
{
    Node *ptr;
    ptr = head;

    while(ptr)
    {
        if(ptr->major == "CS")
            cout << ptr->name << " " << ptr->id << " " <<ptr->major << " " << ptr->grade << endl;
        
        ptr = ptr->next;
    }
}

int main()
{
    List student; // data1 파일을 통해 데이터를 저장할 리스트
    List sortll; // student 리스트가 이름 순으로 오름차순 정렬 될 리스트
    List all_sll; // data1 파일과 data2 파일이 합쳐질 데이터가 저장 될 리스트

    // data1.dat 파일을 읽어온다.
    ifstream in;
    in.open("data1.dat");
    
    for(int i = 0; i < 8; i++)
    {
        char name;
        string major, grade;
        int id;

        // 병합된 리스트도 나중에 처리 하기 위해서 data1 파일을 읽어올 때 병합 리스트에도 같이 추가해준다.
        in >> name >> id >> major >> grade;
        student.append(name, id, major, grade);
        all_sll.append(name, id, major, grade);
    }

    // 학생의 이름을 기준으로 오름차순 리스트를 만들어 출력하기
    student.sort_by_name(sortll);
    sortll.display();

    // 출력 여백
    cout << endl;

    // 성적이 A인 학생들만 출력하기
    sortll.print_by_grade();

    // 출력 여백
    cout << endl;

    // 새로운 파일을 열기위한 이전 파일 닫기
    in.close();

    // data1 파일 내용과 data2 파일 내용 합치기 위해서 data2.dat 파일을 읽어온다.
    in.open("data2.dat");

    for(int i = 0; i < 3; i++)
    {
        char name;
        string major, grade;
        int id;

        // 파일에 존재하는 추가 데이터들을 병합 리스트 뒤에 append 한다.
        in >> name >> id >> major >> grade;
        all_sll.append(name, id, major, grade);
    }

    // 합쳐진 리스트에서 CS 전공 학생들만 출력하기
    all_sll.print_by_major();

    // 파일 닫기
    in.close();
}