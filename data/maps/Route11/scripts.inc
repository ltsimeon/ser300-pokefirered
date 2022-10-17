Route11_MapScripts::
	.byte 0

Route11_EventScript_DiglettsCaveSign::
	msgbox Route11_Text_DiglettsCave, MSGBOX_SIGN
	end

Route11_EventScript_SignOfLegend::
	lock
	msgbox Route11_EventScript_SignOfLegend_Text_0
	msgbox Route11_EventScript_SignOfLegend_Text_1
	giveitem ITEM_RARE_CANDY, 5
	compare VAR_RESULT, 0
	goto_if_eq Route11_EventScript_SignOfLegend_2
Route11_EventScript_SignOfLegend_1:
	release
	end

Route11_EventScript_SignOfLegend_2:
	msgbox Route11_EventScript_SignOfLegend_Text_2
	goto Route11_EventScript_SignOfLegend_1


Route11_EventScript_SignOfLegend_Text_0:
	.string "You've found the Sign of Legends!\n"
	.string "Congratulations!$"

Route11_EventScript_SignOfLegend_Text_1:
	.string "Enjoy these five Rare Candies as a\n"
	.string "reward!$"

Route11_EventScript_SignOfLegend_Text_2:
	.string "Ah, you've got too many of those. Use\n"
	.string "some first, then come back for more.$"
