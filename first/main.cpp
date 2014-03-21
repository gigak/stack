#include <iostream>

using namespace std;

/*!our struct*/
struct List
{
    int x; //element steka
    List *Next,*Head; //golova i ukazatel' na sleduushiu' element steka
};

/*!Function to add items in the stack*/
void Add(int x, List **MyList) //!< prinimaem element steka i ukazatel' na stek
{
    List *temp=new List; //!<Reserve memory for the new element
    temp->x=x; //!< zapisivaem v pole X prinimaemiu v funkciu element X
    temp->Next=(*MyList)->Head; //!< ukazivaem chto sleduushiu element eto predidushiu
    (*MyList)->Head=temp; //!< sdvigaem golove na posiciu
}

/*! function display stack*/
void Show(List *MyList) //!< stack
{
    List *temp=MyList->Head; 
              
    while (temp!=NULL) 
    {
        cout<<temp->x<<" "; 
        temp=temp->Next; 
    }
}

/*! Delete function stack from memory*/
void ClearList(List *MyList)
{   
     while (MyList->Head!=NULL)  //Пока по адресу не пусто
     {   
        List *temp=MyList->Head->Next; //!< temporary variable
        delete MyList->Head; //!< Free the beginning
        MyList->Head=temp; //!< Change the address to the next
     }
}

void main()
{
    List *MyList=new List; //!< Reserve memory for the stack
    MyList->Head=NULL; //!< initialize the first element

    for (int i=0;i<10;i++) Add(i,&MyList); //!< write data into the stack
    Show(MyList); //!< show our stack



	system("pause");
void ClearList(List *MyList); //!< clear our memory.
   
}