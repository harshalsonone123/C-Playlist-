#include <iostream>
#include <cstring>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class cwhvideo : public cwh
{
    int videolength;

public:
    cwhvideo(string s, float r, float vl) : cwh(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 starts " << endl;
        cout << "length of this video is " << videolength << " minutes " << endl;
    }
};

class cwhtext : public cwh
{
    int words;

public:
    cwhtext(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this is an amazing video with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 starts " << endl;
        cout << "no. of words in this text tutorial is " << words << " words " << endl;
    }
};

int main(int argc, char const *argv[])
{
    string title;
    float rating, vlen;
    int words;

    title = "Django tutorial ";
    vlen = 4.56;
    rating = 4.89;
    cwhvideo djvideo(title, rating, vlen);
    djvideo.display();

    title = "Django tutorial text ";
    words = 436;
    rating = 4.19;
    cwhtext djtext(title, rating, words);
    djtext.display();

    cwh *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
