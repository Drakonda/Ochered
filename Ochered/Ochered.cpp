#include <iostream>
#include <windows.h>
#include <locale.h>
using namespace std;
 
class Node
{
public:
    int number;
    Node* last;
    Node* next;
};
 
void main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* ptrLast = NULL;
    short action = -1;
 setlocale(LC_ALL,"rus");
    while(1)
    {
        cout<<"1. Äîáàâèòü Ýëåìåíò\n";
        cout<<"2. Ïðîñìîòð Î÷åðåäè\n";
        cout<<"3. Óäàëèòü Ýëåìåíò\n";
        cout<<"4. Ïîèñê Ýëåìåíòà\n";
        cout<<"0. Âûõîä\n\n";
        cout<<"Âàø Âûáîð: ";
        cin>>action;
 
        if (action == 0)
        {
            system("CLS");
            break;
        }
 
        if (action == 1)
        {
            system("CLS");
            int numb = -1;
            cout<<"Ââåäèòå ×èñëî: ";
            cin>>numb;
            Node* ptr = new Node;
            ptr->number = numb;
            ptr->next = NULL;
            tail = ptr;
            if (head == NULL)
            {
                head = ptr;
                ptrLast = ptr;
                ptr->last = NULL;
                system("CLS");
                continue;
            }
            ptr->last = ptrLast;
            ptrLast->next = ptr;
            ptrLast = ptr;
            system("CLS");
            continue;
        }
 
        if (action == 2)
        {
            system("CLS");
            Node* ptr = NULL;           
            if (head == NULL)
            {
                cout<<"\t!!! Î×ÅÐÅÄÜ ÏÓÑÒÀ !!!\n\n";
                system("PAUSE");
                system("CLS");
                continue;
            }
            cout<<"* * * * * Î×ÅÐÅÄÜ * * * * *\n\n";
            ptr = tail;
            while (1)
            {
                cout<<ptr->number<<" ";
                if (ptr->last == 0)
                    break;
                ptr = ptr->last;
            }
            cout<<"\n\n";
            system("PAUSE");
            system("CLS");
            continue;
        }
 
        if (action == 3)
        {
            system("CLS");
            Node* ptrDelete = NULL;
            if (head == NULL)
            {
                cout<<"\t!!! Î×ÅÐÅÄÜ ÏÓÑÒÀ !!!\n\n";
                system("PAUSE");
                system("CLS");
                continue;
            }
            if (head->next == NULL)
            {
                head = NULL;
                tail = NULL;
                delete tail;
                continue;
            }           
            ptrDelete = head;
            head = ptrDelete->next;
            head->last = NULL;
            delete ptrDelete;
            continue;
        }
 
        if (action == 4)
        {
            system("CLS");
            Node* ptr = NULL;
            int key = -1;
            if (head == NULL)
            {
                cout<<"\t!!! ÑÏÈÑÎÊ ÏÓÑÒ !!!\n\n";
                system("PAUSE");
                system("CLS");
                continue;
            }
            cout<<"Ââåäèòå Ýëåìåíò Äëÿ Ïîèñêà: ";
            cin>>key;           
            ptr = head;
            while (1)
            {
                if (key == ptr->number)
                {
                    cout<<"\n\t!!! ÝËÅÌÅÍÒ ÍÀÉÄÅÍ !!!\n";
                    break;
                }
                if (ptr->next == NULL)
                {
                    cout<<"\n\t!!! ÝËÅÌÅÍÒ ÍÅ ÍÀÉÄÅÍ !!!\n";
                    break;
                }
                ptr = ptr->next;
            }
            system("PAUSE");
            system("CLS");
            continue;
        }
 
        if (action > 4)
        {
            system("CLS");
            cout<<"\t!!! ÍÅÂÅÐÍÛÉ ÂÛÁÎÐ. ÏÎÂÒÎÐÈÒÅ ÂÂÎÄ !!!\n\n";
            system("PAUSE");
            system("CLS");
            continue;
        }
    }
}