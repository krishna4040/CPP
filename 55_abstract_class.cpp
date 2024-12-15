# include <iostream>
# include <cstring>
using namespace std;

// Abstract class ---> class with at least one pure virtual function
// Now it is an Abstrct Base class
class cwh
{
    protected:
        string title;
        float rating;
    public:
        cwh(string s , float r)
        {
            title = s;
            rating  = r;
        }
        virtual void display() = 0;  // Do nothing function ----> pure virtual function
};

class cwhvideo : public cwh
{
    int videolenth;
    public:
        cwhvideo(string s , float r , int vl) : cwh(s , r)
        {
            videolenth = vl;
        }
        void display()
        {
            cout << "This is an amazing video tutorial with title " << title << endl;
            cout << "Ratings: " << rating << endl;
            cout << "Length of this video is " << videolenth << " minutes" << endl;
        }
};

class cwhtext : public cwh
{
    int words;
    public:
        cwhtext(string s , float r , int wc) : cwh(s , r)
        {
            words = wc;
        }
        void display()
        {
            cout << "This is an amazing text tutorial with title " << title << endl;
            cout << "Ratings: " << rating << endl;
            cout << "words in this text tutorial is " << words << " words" << endl;
        }
};

int main()
{
    string title;
    float rating , vlen;
    int words;

    // for cwhvideos
    title = "Django tutorials";
    vlen = 2.34;
    rating = 4.89;
    cwhvideo djvideo(title , rating , vlen);

    // for cwhtext
    title = "Django tutorials text";
    words = 2222;
    rating = 3.89;
    cwhtext djtext(title , rating , words);

    // pointers
    cwh *ptr[2];
    ptr[0] = &djvideo;
    ptr[1] = &djtext;

    ptr[0] -> display();    // ptr[0] should have a display function
    ptr[1] -> display();    // ptr[1] should have a display function

    return 0;
}