#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song
{
private:
    int songId;
    string lyrics;
    double duration;
    string singerName;

public:
    Song(int id, const string &lyrics, double duration, const string &singer);

    // Getter methods
    int getSongId() const;
    const string &getLyrics() const;
    double getDuration() const;
    const string &getSingerName() const;
};

Song::Song(int id, const string &songLyrics, double songDuration, const string &singer)
    : songId(id), lyrics(songLyrics), duration(songDuration), singerName(singer) {}

int Song::getSongId() const
{
    return songId;
}

const string &Song::getLyrics() const
{
    return lyrics;
}

double Song::getDuration() const
{
    return duration;
}

const string &Song::getSingerName() const
{
    return singerName;
}

class AlbumManager
{
    vector<Song> songs;

public:
    vector<Song> takeSongsInput()
    {
        songs.push_back(Song(1, "idontwannabeyouanymaore", 4.12, "Billie_Eillish"));
        songs.push_back(Song(2, "Happier than ever", 6.58, "Billie_Eillish"));
        songs.push_back(Song(3, "Lovely", 3.36, "Billie_Eillish"));
        songs.push_back(Song(4, "I dont care", 3.50, "Justin_Bieber"));
        songs.push_back(Song(5, "Hold On", 4.18, "Justin_Bieber"));
        songs.push_back(Song(6, "Bored", 4.20, "Billie_Eillish"));
        songs.push_back(Song(7, "Intentions", 3.60, "Justin_Bieber"));
        songs.push_back(Song(8, "Happier", 5.32, "Marshmello"));
        songs.push_back(Song(9, "Faded", 5.02, "Alan_Walker"));
        songs.push_back(Song(10, "Alone", 4.00, "Marshmello"));

        // un-comment this code to give manual input ..
        /*
        cout << "You have to enter song details for 10 songs .. " << endl;
        int id;
        string lyrics;
        int duration;
        string name;

        for (int i = 0; i < 10; i++)
        {
            cout << "Enter song id : ";
            cin >> id;
            cout << "Enter song lyrics : ";
            cin >> lyrics;
            cout << "Enter song duration : ";
            cin >> duration;
            cout << "Enter song singer name : ";
            cin >> name;

            Song song(id, lyrics, duration, name);
            songs.push_back(song);
        }
        */

        return songs;
    }
    vector<Song>
    findSongsBySingerName(string name)
    {
        vector<Song> singerAlbum;
        for (Song s : songs)
        {
            if (s.getSingerName() == name)
            {
                singerAlbum.push_back(s);
            }
        }
        return singerAlbum;
    }

    double totalDurationOfSongs(string name)
    {
        vector<Song> songsBySinger = findSongsBySingerName(name);
        double total_duration = 0;
        for (Song s : songsBySinger)
        {
            total_duration += s.getDuration();
        }

        return total_duration;
    }

    void displaySongDetails(vector<Song> displaySongs)
    {
        for (Song s : displaySongs)
        {
            cout << "Song Details: " << endl;
            cout << "Song Id : " << s.getSongId() << endl;
            cout << "Song Lyrics : " << s.getLyrics() << endl;
            cout << "Song Duration : " << s.getDuration() << endl;
            cout << "Song Singer Name : " << s.getSingerName() << endl
                 << endl;
        }
    }
};

int main()
{
    AlbumManager am;

    /*
    1. Add Song 10 songs
    2. get songs by singer
    3. get total duration of song by a singer
    */

    // dummy song data
    vector<Song> songList = am.takeSongsInput();
    cout << "The Dummy 10 songs in a list : " << endl;
    am.displaySongDetails(songList);

    string singerToSearch;
    cout << "\nEnter a Singer name: ";
    cin >> singerToSearch;

    cout << "Songs by your singer " << singerToSearch << " : " << endl;
    am.displaySongDetails(am.findSongsBySingerName(singerToSearch));

    cout << "The total song duration by " << singerToSearch << " : " << am.totalDurationOfSongs(singerToSearch);

    return 0;
}