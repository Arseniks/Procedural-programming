#include <iostream>
#include <string>

using namespace std;


int from_roman_to_int(const string& s, char MODE)
{
    string rim_numers = "IVXLCDM";
    int pos = rim_numers.find(MODE);
    int ch[7] = {1,5,10,50,100,500,1000};
    int res = ch[pos];
    int i = s.find(MODE);
    if (i >= 0 && i < s.size())
    {
        string sub1 = s.substr(0, i);
        string sub2 = s.substr(i + 1);
        if (sub1.size() > 0)
        {
            int j = sub1.find(rim_numers[pos]);
            int q = 0;
            while (j < 0 || j >= sub1.size())
            {
                q++;
                j = sub1.find(rim_numers[pos - q]);
            }
            res = res - from_roman_to_int(sub1, rim_numers[pos - q]);
        }
        if (sub2.size() > 0)
        {
            int j = sub2.find(rim_numers[pos]);
            int c = 0;
            while (j < 0 || j >= sub2.size())
            {
                c++;
                j = sub2.find(rim_numers[pos - c]);
            }
            res = res + from_roman_to_int(sub2, rim_numers[pos - c]);
        }
    }
    return res;
}


int main ()
{
    string inp;
    cout << "Введите римское число:" << endl;
    cin >> inp;
    int pos = 6;
    string RIM = "IVXLCDM";
    int i = inp.find(RIM[pos]);
    int c = 0;
    while (i < 0 || i >= inp.size())
    {
        c++;
        i = inp.find(RIM[pos - c]);
    }
    cout << from_roman_to_int(inp, RIM[pos - c]) << endl;

    return 0;
}
