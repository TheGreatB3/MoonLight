#include <MoonLight/Base/Keyboard.h>
#include <Windows.h>

namespace ml
{
	std::string Keyboard::KeyToString(VirtualKey vk)
	{
		static const std::string names[0xE8] = {
			"",
			"LCLICK",
			"RCLICK",
			"CANCEL",
			"MCLICK",
			"XBUTTON1",
			"XBUTTON2",
			"--RESERVED--",
			"BACK",
			"TAB",
			"--RESERVED--",
			"--RESERVED--",
			"CLEAR",
			"RETURN",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"SHIFT",
			"CONTROL",
			"ALT",
			"PAUSE",
			"CAPITAL",
			"KANA",
			"--UNASSIGNED--",
			"JUNJA",
			"FINAL",
			"KANJI",
			"--UNASSIGNED--",
			"ESCAPE",
			"CONVERT",
			"NONCONVERT",
			"ACCEPT",
			"MODE CHANGE",
			"SPACE",
			"PRIOR",
			"NEXT",
			"END",
			"HOME",
			"LEFT",
			"UP",
			"RIGHT",
			"DOWN",
			"SELECT",
			"PRINT",
			"EXECUTE",
			"SNAPSHOT",
			"INSERT",
			"DELETE",
			"HELP",
			"0", "1", "2", "3", "4", "5", "6", "7", "8", "9",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
			"LWIN",
			"RWIN",
			"APPS",
			"RESERVED",
			"SLEEP",
			"NUM0", "NUM1", "NUM2", "NUM3", "NUM4", "NUM5", "NUM6", "NUM7", "NUM8", "NUM9",
			"MULTIPLY",
			"ADD",
			"SEPARATOR",
			"SUBTRACT",
			"DECIMAL",
			"DIVIDE",
			"F1", "F2", "F3", "F4", "F5", "F6", "F7", "F8", "F9",
			"F10", "F11", "F12", "F13", "F14", "F15", "F16", "F17", "F18", "F19",
			"F20", "F21", "F22", "F23", "F24",
			"NAVVIEW", "NAVMENU", "NAVUP", "NAVDOWN", "NAVLEFT", "NAVRIGHT", "NAVACCEPT", "NAVCANCEL",
			"NUMLOCK",
			"SCROLL",
			"NUMEQUAL",
			"MASSHOU",
			"TOUROKU",
			"LOYA",
			"ROYA",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"--UNASSIGNED--",
			"LSHIFT",
			"RSHIFT",
			"LCTRL",
			"RCTRL",
			"LMENU",
			"RMENU",
			"BROWSERBACK",
			"BROWSERFORWARD",
			"BROWSERREFRESH",
			"BROWSERSTOP",
			"BROWSERSEARCH",
			"BROWSERFAVORITES",
			"BROWSERHOME",
			"VOLUMEMUTE",
			"VOLUMEDOWN",
			"VOLUMEUP",
			"MEDIANEXT",
			"MEDIAPREV",
			"MEDIASTOP",
			"MEDIAPLAY",
			"LAUNCHMAIL",
			"MEDIASELECT",
			"APP1",
			"APP2",
			"--RESERVED--",
			"--RESERVED--",
			"SEMICOLON",
			"PLUS",
			"COMMA",
			"MINUS",
			"PERIOD",
			"SLASH",
			"TILDA",
			"--RESERVED--",
			"--RESERVED--",
			"GAMEPADA",
			"GAMEPADB",
			"GAMEPADX",
			"GAMEPADY",
			"GAMEPADRSHOULDER",
			"GAMEPADLSHOULDER",
			"GAMEPADLTRIGGER",
			"GAMEPADRTRIGGER",
			"GAMEPADDPADUP",
			"GAMEPADDPADDOWN",
			"GAMEPADDPADLEFT",
			"GAMEPADDPADRIGHT",
			"GAMEPADDMENU",
			"GAMEPADDVIEW",
			"GAMEPADLTHUMB",
			"GAMEPADRTHUMB",
			"GAMEPADLTHUMBUP",
			"GAMEPADLTHUMBDOWN",
			"GAMEPADLTHUMBRIGHT",
			"GAMEPADLTHUMBLEFT",
			"GAMEPADRTHUMBUP",
			"GAMEPADRTHUMBDOWN",
			"GAMEPADRTHUMBRIGHT",
			"GAMEPADRTHUMBLEFT",
			"LBRACKET",
			"BACKSLASH",
			"RBRACKET",
			"QUOTE",
			"--RESERVED--",
			"--RESERVED--",
			"AX",
			"LESS",
			"HELP",
			"00",
			"PROCESS",
			"CLEAR",
			"PACKET"
		};

		return names[vk];
	}
}