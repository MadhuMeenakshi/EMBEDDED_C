void modify(struct Student s)
{
    s.id = 100;
}

void modify(struct Student *s)
{
    s->id = 100;
}