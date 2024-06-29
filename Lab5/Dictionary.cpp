#include"Dictionary.h"
Dictionary::Instance Dictionary::Create(const char name[DICTNAMEMAXSIZE], int size)
{
    if (strlen(name) > DICTNAMEMAXSIZE)
        throw THROW01;
    if (size > DICTMAXSIZE)
        throw THROW02;
    Dictionary::Instance inst;
    strncpy_s(inst.name, name, DICTNAMEMAXSIZE);
    inst.maxsize = size;
    inst.size = 0;
    inst.dictionary = new Dictionary::Entry[size];
    return inst;
}
Dictionary::Entry Dictionary::GetEntry(Instance inst, int id)
{
	int i = 0;
	while (i < inst.size && inst.dictionary[i].id != id)
		i++;
	if (i == inst.size)
		throw THROW05;
	return inst.dictionary[i];
}

void Dictionary::AddEntry(Instance& inst, Entry ed)
{
	if (inst.size >= inst.maxsize)
		throw THROW03;
	for (int i = 0; i < inst.size; i++)
	{
		if (inst.dictionary[i].id == ed.id)
			throw THROW04;
	}
	inst.dictionary[inst.size++] = ed;
}
void Dictionary::DelEntry(Instance& inst, int id)
{
	int i = 0;
	while (i < inst.size && inst.dictionary[i].id != id)
		i++;
	if (i == inst.size)
		throw THROW06;
	while (i < inst.size - 1)
	{
		inst.dictionary[i] = inst.dictionary[i + 1];
		i++;
	}
	inst.size--;
}
void Dictionary::UpdEntry(Instance& inst, int id, Entry new_ed)
{
	int i = 0;
	while (i < inst.size && inst.dictionary[i].id != id)
		i++;
	if (i == inst.size)
		throw THROW07;
	for (int j = 0; j < inst.size; j++)
	{
		if (inst.dictionary[j].id == new_ed.id && j != i)
			throw THROW08;
	}
	inst.dictionary[i] = new_ed;
}

void Dictionary::Print(Instance d)
{
	for (int i = 0; i < d.size; i++)
		cout << d.dictionary[i].id << " " << d.dictionary[i].name << endl;
}
void Dictionary::Delete(Instance& d)
{
	delete[] d.dictionary;
}
