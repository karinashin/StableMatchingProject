//
// Created by Karina Shin on 3/22/2022.
//

#include "Element.h"
Element::Element()
{
    name = "";
    free = true;
}

Element::Element(string name)
{
    this->name = name;
    free = true;
}

bool Element::operator==(const Element& e)
{
    if (e.name == name)//no names will repeat, so if two elements have the same name they are the same element
        return true;
    return false;
}

string Element::getName()
{
    return name;
}

bool Element::isFree()
{
    if (free)
        cout << "this element is free" << endl;
    else
        cout << "this element is not free" << endl;
    return free;
}

void Element::changeFree()
{
    if (free)//if true, change to false
        free = false;
    else
        free = true;
    if (free)
        cout << "this element is free" << endl;
    else
        cout << "this element is not free" << endl;
}

void Element::addPreference(Element pref)
{
    preferences.push_back(pref);
}

int Element::findPref(const string& name)
{
    for (int i = 0; i < preferences.size(); i++)
    {
        if (preferences.at(i).getName() == name)
            return i;
    }
    return -1;//didn't find the element/name
}

void Element::printPreferences()
{
    cout << preferences.at(0).getName();
    for (int i = 1; i < preferences.size(); i++){
        cout << ", " << preferences.at(i).getName();
    }
}

vector<Element> Element::getPreferences()
{
    return preferences;
}
