#include<iostream>
#include<cstring>


using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r){
        title = s;
        rating =r;
    }
    virtual void display() = 0; //do-nothing function --> pure virtual function
 

};
class CWHVideo: public CWH{
    float videolength;
    public:
    CWHVideo(string s, float r, float vl) : CWH(s, r){
        videolength =vl;
    }
    void display(){
        cout<< "This is an amazing video with title"<<title<<endl;
        cout<< "Ratings: "<<rating<<"out of 5 star"<<endl;
        cout<< "Length of this video is "<<videolength<<"minutes"<<endl;
    }

};
class CWHText: public CWH{
    int words;
    public:
    CWHText(string s, float r, int wc) : CWH(s, r){
        words =wc;
    }
    void display(){
        cout<< "This is an amazing Text tutorial with title"<<title<<endl;
        cout<< "Ratings of this text : "<<rating<<" out of 5 star"<<endl;
        cout<< "NO of words in this text tutorial is "<<words<<" Words"<<endl;
    }

};

int main(){
    string title;
    float rating , vlen;
    int words;

    // For code with harry video
    title = "Django Tutorial";
    vlen = 8,45;
    rating= 4.66;
    CWHVideo djvideo(title , rating , vlen);
    // djvideo.display();

    // For code with harry text

    title ="Django text";
    words = 400;
    rating =4.39;
    CWHText djtext(title , rating , words);
    // djtext.display();

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0] ->display();
    tuts[1] ->display();

    
    
    return 0;
} 