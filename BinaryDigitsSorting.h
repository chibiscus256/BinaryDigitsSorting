#pragma once

int main()
{
    int i = 0;
    fstream fin;
    int n = 0;
    fin.open("digits.txt");
    if (fin)
    {
        while (!fin.eof())
        {
            n++;
        }
    }
    int* array = new int[n];
    fin.clear();
    fin.seekg(0, std::ios::beg);
    if (fin)
    {
        while (!fin.eof())
        {
            fin >> array[i];
            i++;
        }
    }
    return 0;
    fin.close();
    qsort(array);
}
