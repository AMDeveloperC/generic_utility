# include <iostream>
# include <vector>
# include <deque>
# include <forward_list>
# include <list>
# include <map>
# include <unordered_map>
# include <unordered_set>
# include <queue>
# include <stack>
# include <array>
# include <bitset>

typedef struct movies_t {
    std::string title;
    int year;
} myEx;

/*enum prova {
    UNO = "UNO",
    DUE = "DUE",
    TRE = "TRE"
};*/

enum available_screen {
    START_MENU = 1,
    SHOP_MENU = 2,
    PROFILE_MENU = 3,
    SKIN_MENU = 4,
    OPTION_MENU = 5,
    INFO_MENU = 6
};

myEx mine, yours;

void confronta(available_screen av) {
    switch(av) {
        case START_MENU: std::cout << "Start menu";
        case SHOP_MENU: std::cout << "Shop menu";
        default: std::cout << "Default";
    }
}

int main() {
    confronta(START_MENU);
    for (int fooInt = START_MENU ; fooInt != INFO_MENU ; fooInt++ ) {
        std::cout << "Sto leggendo: " << fooInt << std::endl;
    }
    std::vector<int> v5;
    v5.reserve(100);
    for (int i=0; i<100; i++) {
        v5.push_back(i);
        std::cout << i + 1 << ": " 
                  << "Size: " << v5.size()
                  << " - Capacity: " << v5.capacity() << std::endl;
    }
    std::vector<int> v;
    //std::cout << v.front();

    /* Iterator */
    std::cout << "Iteratore: " << std::endl;
    for (auto it=v5.begin(); it!=v5.end(); it++) {
        std::cout << *it << std::endl;
    }

    std::cout << "Iteratore inverso: " << std::endl;
    for (auto it=v5.rbegin(); it!=v5.rend(); ++it) {
        std::cout << *it << std::endl;
    }

    std::cout << "Iteratore costante: " << std::endl;
    for (auto it=v5.cbegin(); it!=v5.cend(); ++it) {
        std::cout << *it << std::endl;
    }


    std::cout << "Sto inizializzando vector e mappa " << std::endl;
    std::map<int,std::vector<myEx>> first;
    std::vector<myEx> v1;
    std::vector<myEx> v2;
    std::vector<myEx> v3;
    std::vector<myEx> v4;
    first[0]=v1;
    first[1]=v2;
    first[2]=v3;
    first[3]=v4;
    std::cout << "Inizializzazione fatta: " << first.size() << std::endl;

    mine.title="Titolo";
    mine.year=2019;
    first[2].push_back(mine);


    std::cout << "Accedo al terzo elemento della mappa e ne leggo la size: " << first[2].size() << std::endl;
    std::cout << "Accedo al terzo elemento della mappa e ne leggo il front: " << first[2].front().title << " " << first[2].front().year << std::endl;
    

    return 0;
}
