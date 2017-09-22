Insert(int x)
struct node* temp1= (struct node*)malloc(sizeof(struct node));

temp1->data = x;
temp1->next = NULL;
temp1->prev = NULL;
struct node* p;

if(head == NULL)
    head= temp1;

    else
        head->prev = temp1;
        temp1->next = head;
        head = temp1


