Route7_MapScripts::
	.byte 0

Route7_EventScript_UndergroundPathSign::
	msgbox Route7_Text_UndergroundPathSign, MSGBOX_SIGN
	end

Route7_EventScript_BerryGamer::
	lock
	faceplayer
	setvar VAR_R7_BERRIES_FOUND, 0
	goto_if_set FLAG_BERRY_GAME_WON, Route7_EventScript_BerryGamer_2
	goto_if_set FLAG_HIDDEN_ITEMS_START + HIDDEN_ITEM_ROUTE7_PECHA_BERRY, Route7_EventScript_BerryGamer_5
Route7_EventScript_BerryGamer_4:
	goto_if_set FLAG_HIDDEN_ITEMS_START + HIDDEN_ITEM_ROUTE7_POMEG_BERRY, Route7_EventScript_BerryGamer_8
Route7_EventScript_BerryGamer_7:
	goto_if_set FLAG_HIDDEN_ITEMS_START + HIDDEN_ITEM_ROUTE7_CHESTO_BERRY, Route7_EventScript_BerryGamer_11
Route7_EventScript_BerryGamer_10:
	goto_if_set FLAG_HIDDEN_ITEMS_START + HIDDEN_ITEM_ROUTE7_PERSIM_BERRY, Route7_EventScript_BerryGamer_14
Route7_EventScript_BerryGamer_13:
	goto_if_set FLAG_HIDDEN_ITEMS_START + HIDDEN_ITEM_ROUTE7_WEPEAR_BERRY, Route7_EventScript_BerryGamer_17
Route7_EventScript_BerryGamer_16:
	switch VAR_R7_BERRIES_FOUND
	case 0, Route7_EventScript_BerryGamer_21
	case 1, Route7_EventScript_BerryGamer_22
	case 2, Route7_EventScript_BerryGamer_23
	case 3, Route7_EventScript_BerryGamer_24
	case 4, Route7_EventScript_BerryGamer_25
	case 5, Route7_EventScript_BerryGamer_26
	msgbox Route7_EventScript_BerryGamer_Text_10
Route7_EventScript_BerryGamer_19:
	setvar VAR_R7_BERRIES_FOUND, 0
	release
	end

Route7_EventScript_BerryGamer_2:
	msgbox Route7_EventScript_BerryGamer_Text_0
	release
	end

Route7_EventScript_BerryGamer_5:
	addvar VAR_R7_BERRIES_FOUND, 1
	goto Route7_EventScript_BerryGamer_4

Route7_EventScript_BerryGamer_8:
	addvar VAR_R7_BERRIES_FOUND, 1
	goto Route7_EventScript_BerryGamer_7

Route7_EventScript_BerryGamer_11:
	addvar VAR_R7_BERRIES_FOUND, 1
	goto Route7_EventScript_BerryGamer_10

Route7_EventScript_BerryGamer_14:
	addvar VAR_R7_BERRIES_FOUND, 1
	goto Route7_EventScript_BerryGamer_13

Route7_EventScript_BerryGamer_17:
	addvar VAR_R7_BERRIES_FOUND, 1
	goto Route7_EventScript_BerryGamer_16

Route7_EventScript_BerryGamer_21:
	msgbox Route7_EventScript_BerryGamer_Text_1
	msgbox Route7_EventScript_BerryGamer_Text_2
	msgbox Route7_EventScript_BerryGamer_Text_3
	goto Route7_EventScript_BerryGamer_19

Route7_EventScript_BerryGamer_22:
	msgbox Route7_EventScript_BerryGamer_Text_4
	goto Route7_EventScript_BerryGamer_19

Route7_EventScript_BerryGamer_23:
	msgbox Route7_EventScript_BerryGamer_Text_5
	goto Route7_EventScript_BerryGamer_19

Route7_EventScript_BerryGamer_24:
	msgbox Route7_EventScript_BerryGamer_Text_6
	goto Route7_EventScript_BerryGamer_19

Route7_EventScript_BerryGamer_25:
	msgbox Route7_EventScript_BerryGamer_Text_7
	goto Route7_EventScript_BerryGamer_19

Route7_EventScript_BerryGamer_26:
	msgbox Route7_EventScript_BerryGamer_Text_8
	giveitem ITEM_TM35_FLAMETHROWER, 1
	setflag FLAG_BERRY_GAME_WON
	msgbox Route7_EventScript_BerryGamer_Text_9
	goto Route7_EventScript_BerryGamer_19


Route7_EventScript_BerryGamer_Text_0:
	.string "Thanks for playing my little game!$"

Route7_EventScript_BerryGamer_Text_1:
	.string "Ho there, Trainer! Would you like to\n"
	.string "entertain a bored old man?$"

Route7_EventScript_BerryGamer_Text_2:
	.string "If you find all five berries I've\n"
	.string "buried here, I'll give you a TM!$"

Route7_EventScript_BerryGamer_Text_3:
	.string "It should come in handy for \n"
	.string "your next Gym battle!\l"
	.string "Where'd I get it, you ask?\l"
	.string "The Celadon Game Corner, of course!$"

Route7_EventScript_BerryGamer_Text_4:
	.string "That's one berry. Four more to go!$"

Route7_EventScript_BerryGamer_Text_5:
	.string "Two berries down. Three more to go!$"

Route7_EventScript_BerryGamer_Text_6:
	.string "Three already? Just two more to go!$"

Route7_EventScript_BerryGamer_Text_7:
	.string "Looks like there's just one left!$"

Route7_EventScript_BerryGamer_Text_8:
	.string "Ooh! That's all the berries! Alright,\n"
	.string "time for my end of the deal...$"

Route7_EventScript_BerryGamer_Text_9:
	.string "Wasn't that fun? Good luck out there!$"

Route7_EventScript_BerryGamer_Text_10:
	.string "The flags are all messed up.\n"
	.string "This doesn't quite seem right.$"
