LittlerootTown_BirchsWarehouse_MapScripts::
	.byte 0


LittlerootTown_BirchsWarehouse_EventScript_PaperStack::
# 4 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	lockall
# 5 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	msgbox LittlerootTown_BirchsWarehouse_EventScript_PaperStack_Text_0
# 6 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	releaseall
	return


LittlerootTown_BirchsWarehouse_EventScript_Naughty::
# 10 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	lockall
# 11 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	msgbox LittlerootTown_BirchsWarehouse_EventScript_Naughty_Text_0
# 12 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	releaseall
	return


LittlerootTown_BirchsWarehouse_EventScript_Computer::
# 16 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	lockall
# 17 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	msgbox LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_0
# 18 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	msgbox LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_1
# 19 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	msgbox LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_2, MSGBOX_YESNO
# 20 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_BirchsWarehouse_EventScript_Computer_2
LittlerootTown_BirchsWarehouse_EventScript_Computer_1:
# 45 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	msgbox LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_8
# 46 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	releaseall
	return

LittlerootTown_BirchsWarehouse_EventScript_Computer_2:
# 21 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	message LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_3
# 22 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	multichoice 25, 4, 115, 0
# 23 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	closemessage
# 24 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_BirchsWarehouse_EventScript_Computer_5
LittlerootTown_BirchsWarehouse_EventScript_Computer_4:
# 29 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootTown_BirchsWarehouse_EventScript_Computer_8
LittlerootTown_BirchsWarehouse_EventScript_Computer_7:
# 34 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LittlerootTown_BirchsWarehouse_EventScript_Computer_11
LittlerootTown_BirchsWarehouse_EventScript_Computer_10:
# 39 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LittlerootTown_BirchsWarehouse_EventScript_Computer_13
	goto LittlerootTown_BirchsWarehouse_EventScript_Computer_1

LittlerootTown_BirchsWarehouse_EventScript_Computer_5:
# 25 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	showmonpic SPECIES_WINGULL, 10, 3
# 26 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	msgbox LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_4, MSGBOX_DEFAULT
# 27 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	hidemonpic
	goto LittlerootTown_BirchsWarehouse_EventScript_Computer_4

LittlerootTown_BirchsWarehouse_EventScript_Computer_8:
# 30 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	showmonpic SPECIES_NUMEL, 10, 3
# 31 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	msgbox LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_5, MSGBOX_DEFAULT
# 32 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	hidemonpic
	goto LittlerootTown_BirchsWarehouse_EventScript_Computer_7

LittlerootTown_BirchsWarehouse_EventScript_Computer_11:
# 35 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	showmonpic SPECIES_LARVITAR, 10, 3
# 36 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	msgbox LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_6, MSGBOX_DEFAULT
# 37 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	hidemonpic
	goto LittlerootTown_BirchsWarehouse_EventScript_Computer_10

LittlerootTown_BirchsWarehouse_EventScript_Computer_13:
# 40 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	showmonpic SPECIES_SPHEAL, 10, 3
# 41 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	msgbox LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_7, MSGBOX_DEFAULT
# 42 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	hidemonpic
	goto LittlerootTown_BirchsWarehouse_EventScript_Computer_1


LittlerootTown_BirchsWarehouse_EventScript_Bookshelf::
# 50 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	lockall
# 51 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	msgbox LittlerootTown_BirchsWarehouse_EventScript_Bookshelf_Text_0
# 52 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	releaseall
	return


LittlerootTown_BirchsWarehouse_EventScript_PaperStack_Text_0:
# 5 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	.string "It's a random stack of papers.$"

LittlerootTown_BirchsWarehouse_EventScript_Naughty_Text_0:
# 11 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	.string "Eh? There's an adult comic here!$"

LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_0:
# 17 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	.string "It has a spreadsheet of the items stored\nin the warehouse.$"

LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_1:
# 18 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	.string "There's a folder here called\n “Gym Roster (Old)”.$"

LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_2:
# 19 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	.string "Open it?$"

LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_3:
# 21 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	.string "Choose a Pokémon to view.$"

LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_4:
# 26 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	.string "Notes:  Good for setting rain.$"

LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_5:
# 31 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	.string "Notes:  Good for setting sun.$"

LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_6:
# 36 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	.string "Notes:  Good for setting sandstorms.$"

LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_7:
# 41 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	.string "Notes:  Good for setting hail.$"

LittlerootTown_BirchsWarehouse_EventScript_Computer_Text_8:
# 45 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	.string "Better close this folder before leaving.$"

LittlerootTown_BirchsWarehouse_EventScript_Bookshelf_Text_0:
# 51 "data/maps/LittlerootTown_BirchsWarehouse/scripts.pory"
	.string "It's different books and journals that\nare archived here.$"
