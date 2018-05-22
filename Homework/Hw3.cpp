/*****************************************
 * Name: 김영훈
 * StudentID: 20171597
 * ProgramID: Hw3
 * Description: 이진 트리를 생성하고 삽입, 탐색, 삭제, 출력 동작을 문제의 조건에 맞게 행한다.
 * Algorithm:
 * Node 를 left child와 right child로 연결한 트리를 생성하고 아래의 각각의 동작을 수행한다.
 * 삽입: 비교대상보다 값이 작으면 왼쪽 자식 노드로, 값이 크면 오른쪽 자식 노드로 이동한다.
 * 이 때 비교대상이 없을 때 까지 내려가며 비교대상이 없는 위치에 도달했을 경우 해당 위치가 새 데이터가 저장될 위치이다.
 * 삭제: 이진 탐색 트리에서 임의의 노드를 삭제할 때는 삭제 후에도 이진 탐색 트리가 유지되도록 빈 자리를 채우는 것이 핵심이다.
 * 삭제의 경우 3가지 케이스로 분류할 수 있는데, 첫 번째는 삭제할 노드가 단말 노드 일 경우, 두 번째는 삭제할 노드가 하나의 자식을 갖는 경우
 * 세번 째 삭제할 노드가 두 개의 자식노드를 갖는 경우이다.
 * 첫 밴째 케이스의 경우 삭제 대상인 노드를 삭제하는 것으로 삭제 과정이 끝이 나는데, 왼쪽 자식 노드면 왼쪽을, 오른쪽 자식 노드면 오른쪽 노드를 트리에서 제거하면 된다.
 * 두 번째 케이스의 경우 삭제 대상의 부모 노드와 자식노드를 연결해주는 것이 핵심이다. 즉 부모 노드와 자식 노드를 연결하는 작업이 필요하다.
 * 세 번째 케이스의 경우 삭제된 노드 위치를 삭제할 노드의 왼쪽 서브 트리에서 가장 큰 값 또는 오른쪽 서브 트리에서 가장 작은 값을 가지고 있는 노드로 대체 하면 되는데
 * 여기에서는 find_min 함수를 이용하여 후자의 방법을 채택했다.
 * 탐색: 삽입과 비슷한 과정으로 진행되는데 비교대상의 노드보다 값이 작으면 왼쪽 자식 노드로, 값이 크면 오른쪽 자식 노드로 이동하면서 탐색을 하는데,
 * 더 이상 이동할 자식 노드가 없다면 찾는 데이터가 없다는 뜻이다. 도중에 주어진 key 값과 일치하는 값을 찾을 경우 그냥 return으로 빠져나오면 된다.
 * Variables:
 * searchTree: root와 입력 값을 searchBST에 넘겨주는 함수이다.
 * searchBST: 주어진 key를 트리에서 찾는 탐색 함수이다.
 * insertTree: root와 삽입 대상이 되는 값을 insertBST에 넘겨주는 함수이다.
 * insertBST: 입력으로 들어온 값을 트리에 삽입하는 함수이다.
 * deleteTree: root와 삭제 대상이 되는 값을 deleteBST에 넘겨주는 함수이다.
 * deleteBST: 주어진 key를 트리에서 삭제하는 삭제 함수이다.
 * find_min: left가 NULL이 될 때까지 내려가서 NULL이 된 노드를 반환하는 함수이다.
 * drawBSTree: 트리를 print 하는 함수이다.
 * drawTree: root 값과 level 1을 drawBSTree에 넘겨주는 함수이다.
 * get_root: root 값을 반환하는 함수이다.
 * 
 * ****************************************
*/

#include <iostream>
#include <cstdlib> // exit 함수를 이용한 프로그램 종료를 하기 위해서 추가한다.

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int value) {data = value; left = NULL; right = NULL;}
    friend class Tree;
};

class Tree{
    private:
        Node *root;
    public:
        Tree() {root = 0;}

        /*********************************************
         * function: searchTree
         * description: searchBSTree를 호출하기 위해 root와 num을 넘겨주는 함수
         * variables:
         * 없음.
         * *******************************************
        */
        void searchTree(int num){
            searchBST(root, num);
        }
        /*********************************************
         * function: searchBST
         * description: 주어진 값을 트리에서 찾기 위한 함수이다.
         * variables:
         * ptr : 트리를 재귀적으로 탐색하기 위해서 입력 값으로 받아서 처리하기 위한 포인터
         * key : 찾고자하는 값
         * *******************************************
        */
        Node *searchBST(Node *ptr, int key){
            if (ptr == NULL){
                return NULL;
            }else {
                if (key == ptr->data)
                    return ptr;
                else if (key < ptr->data)
                    ptr = searchBST(ptr->left, key);
                else if (key > ptr->data)
                    ptr = searchBST(ptr->right, key);
            }
            return ptr;
        }
        /*********************************************
         * function: insertTree
         * description: insertBSTree를 호출하기 위해 root와 num을 넘겨주는 함수
         * variables:
         * 없음.
         * *******************************************
        */
        void insertTree(int num){
            insertBST(root, num);
        }
        /*********************************************
         * function: insertBST
         * description: 주어진 값을 트리에 삽입하기 위한 함수이다.
         * variables:
         * ptr : 삽입 위치를 크기 비교를 통해 재귀적으로 찾기 위해서 포인터를 인자로 받는다.
         * key : 삽입하고자 하는 값이다.
         * *******************************************
        */
        void *insertBST(Node *ptr, int key){
            if (ptr == NULL){
                Node *new_node = ptr;
                ptr->data = key;
                ptr->left = NULL;
                ptr->right = NULL;
            }else if (key < ptr->data){
                insertBST(ptr->left, key);
            }else if (key > ptr->data){
                insertBST(ptr->right, key);
            }
        }
        /*********************************************
         * function: deleteTree
         * description: deleteBSTree를 호출하기 위해 root와 key를 넘겨주는 함수
         * variables:
         * 없음.
         * *******************************************
        */
        void deleteTree(int key){
            deleteBST(root, key);
        }

        /*********************************************
         * function: deleteBST
         * description: 주어진 값을 트리에서 제거 하기 위한 함수이다.
         * variables:
         * ptr : 트리를 재귀적으로 삭제하기 위해서 입력 값으로 받아서 처리하기 위한 포인터
         * key : 찾고자하는 값
         * *******************************************
        */
        Node *deleteBST(Node *ptr, int key){
            if (ptr != NULL){
                if (key < ptr->data)
                    ptr->left = deleteBST(ptr->left, key);
                else if (key  > ptr->data)
                    ptr->right = deleteBST(ptr->right, key);
                else if ((ptr->left == NULL) && (ptr->right == NULL))
                    ptr = NULL;
                else if (ptr->left == NULL){
                    Node *p = ptr;
                    ptr = ptr->right;
                    delete(p);
                }else if (ptr->right == NULL){
                    Node *p = ptr;
                    ptr = ptr->left;
                    delete(p);
                }else {
                    Node *temp = find_min(ptr->right);
                    ptr->data = temp->data;
                    ptr->right = deleteBST(ptr->right, ptr->data);
                }
            } else {
                cout << "Not Found" << endl;
            }
            return ptr;
        }

        /*********************************************
         * function: find_min
         * description: 주어진 인자를 받아서 왼쪽 자식 노드가 NULL이 될 때까지 내려가는 함수
         * variables:
         * p : 재귀적으로 왼쪽 자식 노드를 계속해서 찾아 내려가기 위한 포인터
         * *******************************************
        */
        Node *find_min(Node *p){
            if (p->left == NULL)
                return p;
            else
                find_min(p->left);
        }

        /*********************************************
         * function: drawBSTree
         * description: 현재 트리 구조를 시각화 시키기 위한 함수
         * variables:
         * p : 출력과 레벨 비교를 위해 재귀적으로 사용되는 포인터 변수
         * level : 1부터 시작하여 현재 단계에 존재하는 트리들을 출력하기 위한 변수
         * *******************************************
        */
        void drawBSTree(Node *p, int level){
            if (p != 0 && level <= 7){
                drawBSTree(p->right, level + 1);
                for(int i = 1; i <= (level - 1); i++)
                    cout << " ";
                cout << p->data;

                if (p->left != 0 && p->right != 0)
                    cout << " <" << endl;
                else if (p->right != 0)
                    cout << " /" << endl;
                else if (p->left != 0)
                    cout << " \\" << endl;
                else
                    cout << endl;
                
                drawBSTree(p->left, level+1);
            }
        }

        /*********************************************
         * function: drawTree
         * description: drawBSTree 함수 호출을 하기 위해서 root 값과 초기 레벨 1을 넘겨준다.
         * variables:
         * 없음.
         * *******************************************
        */

        void drawTree(){
            drawBSTree(root, 1);
        }
        /*********************************************
         * function: get_root
         * description: root를 얻기 위한 함수
         * variables:
         * 없음
         * *******************************************
        */
        Node *get_root(){
            return root;
        }
};

int main()
{
    Tree tree;

    while (true){
        int command;
        int getNum;
        cout << "1. Insert, 2. Delete, 3. Search, 4. Print, 5. Quit" << endl;
        cin >> command;

        switch(command){
            case 1:
                cout << "Input your number: ";
                cin >> getNum;
                tree.insertTree(getNum);
                break;
            case 2:
                cout << "Input your number: ";
                cin >> getNum;
                tree.deleteTree(getNum);
                break;
            case 3:
                if (tree.get_root() != NULL){
                    int searchNum;
                    cout << "Input your number: ";
                    cin >> searchNum;
                    tree.searchTree(searchNum);
                }else {
                    cout << "Tree is Empty" << endl;
                }
                break;
            case 4:
                tree.drawTree();
                break;
            case 5:
                exit(1);
                break;
        }
    }
}