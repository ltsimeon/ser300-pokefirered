DiglettsCave_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DiglettsCave_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DiglettsCave_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_ZYGARDE_DEFEATED, DiglettsCave_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

DiglettsCave_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setmetatile 14, 16, 657, 0
	setmetatile 14, 17, 657, 0
	setmetatile 14, 18, 657, 0
	special DrawWholeMapView
	return


DiglettsCave_B2F_WarningSign::
	lock
	msgbox DiglettsCave_B2F_WarningSign_Text_0
	msgbox DiglettsCave_B2F_WarningSign_Text_1
	msgbox DiglettsCave_B2F_WarningSign_Text_2
	msgbox DiglettsCave_B2F_WarningSign_Text_3
	release
	end


DiglettsCave_B2F_BottomLeftSwitch::
	lockall
	compare VAR_TEMP_1, 0
	goto_if_eq DiglettsCave_B2F_BottomLeftSwitch_2
DiglettsCave_B2F_BottomLeftSwitch_1:
	releaseall
	end

DiglettsCave_B2F_BottomLeftSwitch_2:
	setvar VAR_TEMP_1, 1
	goto_if_questlog EventScript_ReleaseEnd
	faceplayer
	setwildbattle SPECIES_DUGTRIO, 45
	waitse
	playmoncry SPECIES_DUGTRIO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
	dowildbattle
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
	special QuestLog_CutRecording
	goto DiglettsCave_B2F_CheckAllSwitchesPressed
	goto DiglettsCave_B2F_BottomLeftSwitch_1


DiglettsCave_B2F_BottomRightSwitch::
	lockall
	compare VAR_TEMP_2, 0
	goto_if_eq DiglettsCave_B2F_BottomRightSwitch_2
DiglettsCave_B2F_BottomRightSwitch_1:
	releaseall
	end

DiglettsCave_B2F_BottomRightSwitch_2:
	setvar VAR_TEMP_2, 1
	goto_if_questlog EventScript_ReleaseEnd
	faceplayer
	setwildbattle SPECIES_GLIGAR, 45
	waitse
	playmoncry SPECIES_GLIGAR, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
	dowildbattle
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
	special QuestLog_CutRecording
	goto DiglettsCave_B2F_CheckAllSwitchesPressed
	goto DiglettsCave_B2F_BottomRightSwitch_1


DiglettsCave_B2F_TopLeftSwitch::
	lockall
	compare VAR_TEMP_3, 0
	goto_if_eq DiglettsCave_B2F_TopLeftSwitch_2
DiglettsCave_B2F_TopLeftSwitch_1:
	releaseall
	end

DiglettsCave_B2F_TopLeftSwitch_2:
	setvar VAR_TEMP_3, 1
	goto_if_questlog EventScript_ReleaseEnd
	faceplayer
	setwildbattle SPECIES_FLYGON, 45
	waitse
	playmoncry SPECIES_FLYGON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
	dowildbattle
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
	special QuestLog_CutRecording
	goto DiglettsCave_B2F_CheckAllSwitchesPressed
	goto DiglettsCave_B2F_TopLeftSwitch_1


DiglettsCave_B2F_TopRightSwitch::
	lockall
	compare VAR_TEMP_4, 0
	goto_if_eq DiglettsCave_B2F_TopRightSwitch_2
DiglettsCave_B2F_TopRightSwitch_1:
	releaseall
	end

DiglettsCave_B2F_TopRightSwitch_2:
	setvar VAR_TEMP_4, 1
	goto_if_questlog EventScript_ReleaseEnd
	faceplayer
	setwildbattle SPECIES_DUNSPARCE, 45
	waitse
	playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
	dowildbattle
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
	special QuestLog_CutRecording
	goto DiglettsCave_B2F_CheckAllSwitchesPressed
	goto DiglettsCave_B2F_TopRightSwitch_1


DiglettsCave_B2F_CheckAllSwitchesPressed::
	compare VAR_TEMP_1, 0
	goto_if_ne DiglettsCave_B2F_CheckAllSwitchesPressed_2
DiglettsCave_B2F_CheckAllSwitchesPressed_1:
	releaseall
	end

DiglettsCave_B2F_CheckAllSwitchesPressed_2:
	compare VAR_TEMP_2, 0
	goto_if_ne DiglettsCave_B2F_CheckAllSwitchesPressed_4
	goto DiglettsCave_B2F_CheckAllSwitchesPressed_1

DiglettsCave_B2F_CheckAllSwitchesPressed_4:
	compare VAR_TEMP_3, 0
	goto_if_ne DiglettsCave_B2F_CheckAllSwitchesPressed_6
	goto DiglettsCave_B2F_CheckAllSwitchesPressed_1

DiglettsCave_B2F_CheckAllSwitchesPressed_6:
	compare VAR_TEMP_4, 0
	goto_if_ne DiglettsCave_B2F_CheckAllSwitchesPressed_8
	goto DiglettsCave_B2F_CheckAllSwitchesPressed_1

DiglettsCave_B2F_CheckAllSwitchesPressed_8:
	setmetatile 14, 16, 657, 0
	setmetatile 14, 17, 657, 0
	setmetatile 14, 18, 657, 0
	playse SE_ICE_BREAK
	special DrawWholeMapView
	waitse
	goto DiglettsCave_B2F_CheckAllSwitchesPressed_1


DiglettsCave_B2F_WarningSign_Text_0:
	.string "Those who dare to unseal\n"
	.string "the guardian of order...$"

DiglettsCave_B2F_WarningSign_Text_1:
	.string "Let four stones come to rest,\n"
	.string "one on each switch...$"

DiglettsCave_B2F_WarningSign_Text_2:
	.string "And face off against\n"
	.string "the guardians of each...$"

DiglettsCave_B2F_WarningSign_Text_3:
	.string "Once all are defeated, all at once,\n"
	.string "only then may you face ZYGARDE.$"
