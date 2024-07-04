#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song {
    string title;
    string artist;
    int duration;

public:
    Song(string t, string a, int d) : title(t), artist(a), duration(d) {}
    void getDetails() {
        cout << "Title: " << title << endl;
        cout << "Artist: " << artist << endl;
        cout << "Duration: " << duration << endl;
    }
};
class Playlist {
    vector<Song> songs;

public:
    Playlist() {}
    void addSongs(string t, string a, int d) {
        songs.push_back(Song(t, a, d));
    }
    void displayPlaylist() {
        for (auto &s : songs) {
            s.getDetails();
        }
    }
};
int main() {
    Playlist p;
    p.addSongs("Song 1", "Awwab", 25);
    p.addSongs("Song 2", "Karim", 27);
    p.displayPlaylist();
    return 0;
}