LittlerootTown_Mart_MapScripts::
	.byte 0


Littleroot_Mart_EventScript_Clerk::
# 5 "data/maps/LittlerootTown_Mart/scripts.pory"
	lock
# 6 "data/maps/LittlerootTown_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/LittlerootTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 8 "data/maps/LittlerootTown_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/LittlerootTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_Mart_ExpandedItems
# 10 "data/maps/LittlerootTown_Mart/scripts.pory"
	pokemart LittlerootTown_Mart_Pokemart_Basic
# 11 "data/maps/LittlerootTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LittlerootTown_Mart/scripts.pory"
	release
	end


	.align 2
# 16 "data/maps/LittlerootTown_Mart/scripts.pory"
LittlerootTown_Mart_Pokemart_Basic:
# 17 "data/maps/LittlerootTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 18 "data/maps/LittlerootTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 19 "data/maps/LittlerootTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 20 "data/maps/LittlerootTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

LittlerootTown_Mart_ExpandedItems::
# 25 "data/maps/LittlerootTown_Mart/scripts.pory"
	pokemart LittlerootTown_Mart_Pokemart_Expanded
# 26 "data/maps/LittlerootTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 27 "data/maps/LittlerootTown_Mart/scripts.pory"
	release
	end


	.align 2
# 31 "data/maps/LittlerootTown_Mart/scripts.pory"
LittlerootTown_Mart_Pokemart_Expanded:
# 32 "data/maps/LittlerootTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 33 "data/maps/LittlerootTown_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 34 "data/maps/LittlerootTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 35 "data/maps/LittlerootTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 36 "data/maps/LittlerootTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 37 "data/maps/LittlerootTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE
