#include "view.h"

string View::get_menu(){
    string menu = R"(
==========
SUPER CHAT
==========

1) Create User
2) Remove User from server (Admin priviledge)
3) Bump User to Mod Status
4) See Current Users
5) Create a chatroom
6) View Chatrooms
7) Add user to chat
8) Remove Chatroom
9) Remove User from a chatroom (Mod priviledge)

)";

return menu;
}

void View::username_prompt(){
    cout << "Enter a username: ";
}

void View::view_current_users(){
    string header = R"(
XXXXXXXXXXXXX
Current Users
XXXXXXXXXXXXX

)";
    header += server.display_users2();
    cout << header;
}

void View::view_chatrooms(){
    string header = R"(
XXXXXXXXX
CHATROOMS
XXXXXXXXX

)";
    header += server.display_chatrooms();
    cout << header;
}

void View::no_user_prompt(){
    cout << "No user found.\n";
}

void View::chatroom_name_prompt(){
    cout << "Enter a chatroom name: ";
}
void View::chatroom_not_found_prompt(){
    cout << "Chatroom not found.\n";
}

void View::invalid_entry(){
    cout << "Invalid input. Please select a correct option.\n";
}