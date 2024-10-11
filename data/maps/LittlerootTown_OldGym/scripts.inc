LittlerootTown_OldGym_MapScripts::
	.byte 0


LittlerootTown_OldGym_EventScript_GymStatue::
# 4 "data/maps/LittlerootTown_OldGym/scripts.pory"
	lockall
# 5 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_GymStatue_Text_0
# 6 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_GymStatue_Text_1
# 7 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_GymStatue_Text_2
# 8 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_GymStatue_Text_3
# 9 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_GymStatue_Text_4
# 10 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_GymStatue_Text_5
# 11 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_GymStatue_Text_6
# 12 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_GymStatue_Text_7
# 13 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_GymStatue_Text_8
# 14 "data/maps/LittlerootTown_OldGym/scripts.pory"
	releaseall
	return


LittlerootTown_OldGym_EventScript_PokeballWingull::
# 18 "data/maps/LittlerootTown_OldGym/scripts.pory"
	lockall
# 19 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_WINGULL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballWingull_4
LittlerootTown_OldGym_EventScript_PokeballWingull_3:
# 24 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_PokeballWingull_Text_0
LittlerootTown_OldGym_EventScript_PokeballWingull_1:
# 26 "data/maps/LittlerootTown_OldGym/scripts.pory"
	waitmessage
# 27 "data/maps/LittlerootTown_OldGym/scripts.pory"
	releaseall
	end

LittlerootTown_OldGym_EventScript_PokeballWingull_2:
# 20 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 21 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call LittlerootTown_OldGym_EventScript_Wingull
	goto LittlerootTown_OldGym_EventScript_PokeballWingull_1

LittlerootTown_OldGym_EventScript_PokeballWingull_4:
# 19 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_NUMEL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballWingull_6
	goto LittlerootTown_OldGym_EventScript_PokeballWingull_3

LittlerootTown_OldGym_EventScript_PokeballWingull_6:
# 19 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_LARVITAR_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballWingull_8
	goto LittlerootTown_OldGym_EventScript_PokeballWingull_3

LittlerootTown_OldGym_EventScript_PokeballWingull_8:
# 19 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_SPHEAL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballWingull_2
	goto LittlerootTown_OldGym_EventScript_PokeballWingull_3


LittlerootTown_OldGym_EventScript_PokeballNumel::
# 32 "data/maps/LittlerootTown_OldGym/scripts.pory"
	lockall
# 33 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_WINGULL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballNumel_4
LittlerootTown_OldGym_EventScript_PokeballNumel_3:
# 38 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_PokeballWingull_Text_0
LittlerootTown_OldGym_EventScript_PokeballNumel_1:
# 40 "data/maps/LittlerootTown_OldGym/scripts.pory"
	waitmessage
# 41 "data/maps/LittlerootTown_OldGym/scripts.pory"
	releaseall
	end

LittlerootTown_OldGym_EventScript_PokeballNumel_2:
# 34 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 35 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call LittlerootTown_OldGym_EventScript_Numel
	goto LittlerootTown_OldGym_EventScript_PokeballNumel_1

LittlerootTown_OldGym_EventScript_PokeballNumel_4:
# 33 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_NUMEL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballNumel_6
	goto LittlerootTown_OldGym_EventScript_PokeballNumel_3

LittlerootTown_OldGym_EventScript_PokeballNumel_6:
# 33 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_LARVITAR_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballNumel_8
	goto LittlerootTown_OldGym_EventScript_PokeballNumel_3

LittlerootTown_OldGym_EventScript_PokeballNumel_8:
# 33 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_SPHEAL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballNumel_2
	goto LittlerootTown_OldGym_EventScript_PokeballNumel_3


LittlerootTown_OldGym_EventScript_PokeballLarvitar::
# 46 "data/maps/LittlerootTown_OldGym/scripts.pory"
	lockall
# 47 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_WINGULL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballLarvitar_4
LittlerootTown_OldGym_EventScript_PokeballLarvitar_3:
# 52 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_PokeballWingull_Text_0
LittlerootTown_OldGym_EventScript_PokeballLarvitar_1:
# 54 "data/maps/LittlerootTown_OldGym/scripts.pory"
	waitmessage
# 55 "data/maps/LittlerootTown_OldGym/scripts.pory"
	releaseall
	end

LittlerootTown_OldGym_EventScript_PokeballLarvitar_2:
# 48 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 49 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call LittlerootTown_OldGym_EventScript_Larvitar
	goto LittlerootTown_OldGym_EventScript_PokeballLarvitar_1

LittlerootTown_OldGym_EventScript_PokeballLarvitar_4:
# 47 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_NUMEL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballLarvitar_6
	goto LittlerootTown_OldGym_EventScript_PokeballLarvitar_3

LittlerootTown_OldGym_EventScript_PokeballLarvitar_6:
# 47 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_LARVITAR_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballLarvitar_8
	goto LittlerootTown_OldGym_EventScript_PokeballLarvitar_3

LittlerootTown_OldGym_EventScript_PokeballLarvitar_8:
# 47 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_SPHEAL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballLarvitar_2
	goto LittlerootTown_OldGym_EventScript_PokeballLarvitar_3


LittlerootTown_OldGym_EventScript_PokeballSpheal::
# 60 "data/maps/LittlerootTown_OldGym/scripts.pory"
	lockall
# 61 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_WINGULL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballSpheal_4
LittlerootTown_OldGym_EventScript_PokeballSpheal_3:
# 66 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_PokeballWingull_Text_0
LittlerootTown_OldGym_EventScript_PokeballSpheal_1:
# 68 "data/maps/LittlerootTown_OldGym/scripts.pory"
	waitmessage
# 69 "data/maps/LittlerootTown_OldGym/scripts.pory"
	releaseall
	end

LittlerootTown_OldGym_EventScript_PokeballSpheal_2:
# 62 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 63 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call LittlerootTown_OldGym_EventScript_Spheal
	goto LittlerootTown_OldGym_EventScript_PokeballSpheal_1

LittlerootTown_OldGym_EventScript_PokeballSpheal_4:
# 61 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_NUMEL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballSpheal_6
	goto LittlerootTown_OldGym_EventScript_PokeballSpheal_3

LittlerootTown_OldGym_EventScript_PokeballSpheal_6:
# 61 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_LARVITAR_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballSpheal_8
	goto LittlerootTown_OldGym_EventScript_PokeballSpheal_3

LittlerootTown_OldGym_EventScript_PokeballSpheal_8:
# 61 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_SPHEAL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballSpheal_2
	goto LittlerootTown_OldGym_EventScript_PokeballSpheal_3


LittlerootTown_OldGym_EventScript_Wingull::
# 74 "data/maps/LittlerootTown_OldGym/scripts.pory"
	showmonpic SPECIES_WINGULL, 10, 3
# 75 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_0, MSGBOX_YESNO
# 76 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_OldGym_EventScript_Wingull_1
# 100 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 101 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittleRootTown_OldGym_NotChosen
	return

LittlerootTown_OldGym_EventScript_Wingull_1:
# 77 "data/maps/LittlerootTown_OldGym/scripts.pory"
	givemon SPECIES_WINGULL, 5, ITEM_MYSTIC_WATER
# 78 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_OldGym_EventScript_Wingull_4
# 86 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_OldGym_EventScript_Wingull_5
# 95 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 96 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_2
	return

LittlerootTown_OldGym_EventScript_Wingull_4:
# 79 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 80 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_1
# 81 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 1
# 82 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_WINGULL_CHOSEN
# 83 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 84 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_OldGym_EventScript_Wingull_5:
# 87 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 88 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_1
# 89 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 1
# 90 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_WINGULL_CHOSEN
# 91 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 92 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_OldGym_EventScript_Numel::
# 107 "data/maps/LittlerootTown_OldGym/scripts.pory"
	showmonpic SPECIES_NUMEL, 10, 3
# 108 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Numel_Text_0, MSGBOX_YESNO
# 109 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_OldGym_EventScript_Numel_1
# 133 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 134 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittleRootTown_OldGym_NotChosen
	return

LittlerootTown_OldGym_EventScript_Numel_1:
# 110 "data/maps/LittlerootTown_OldGym/scripts.pory"
	givemon SPECIES_NUMEL, 5, ITEM_CHARCOAL
# 111 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_OldGym_EventScript_Numel_4
# 119 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_OldGym_EventScript_Numel_5
# 128 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 129 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_2
	return

LittlerootTown_OldGym_EventScript_Numel_4:
# 112 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Numel_Text_1
# 114 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 2
# 115 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_NUMEL_CHOSEN
# 116 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 117 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_OldGym_EventScript_Numel_5:
# 120 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 121 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Numel_Text_1
# 122 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 2
# 123 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_NUMEL_CHOSEN
# 124 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 125 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_OldGym_EventScript_Larvitar::
# 140 "data/maps/LittlerootTown_OldGym/scripts.pory"
	showmonpic SPECIES_LARVITAR, 10, 3
# 141 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Larvitar_Text_0, MSGBOX_YESNO
# 142 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_OldGym_EventScript_Larvitar_1
# 166 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 167 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittleRootTown_OldGym_NotChosen
	return

LittlerootTown_OldGym_EventScript_Larvitar_1:
# 143 "data/maps/LittlerootTown_OldGym/scripts.pory"
	givemon SPECIES_LARVITAR, 5, ITEM_HARD_STONE
# 144 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_OldGym_EventScript_Larvitar_4
# 152 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_OldGym_EventScript_Larvitar_5
# 161 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 162 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_2
	return

LittlerootTown_OldGym_EventScript_Larvitar_4:
# 145 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 146 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Larvitar_Text_1
# 147 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 3
# 148 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_LARVITAR_CHOSEN
# 149 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 150 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_OldGym_EventScript_Larvitar_5:
# 153 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 154 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Larvitar_Text_1
# 155 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 3
# 156 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_LARVITAR_CHOSEN
# 157 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 158 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_OldGym_EventScript_Spheal::
# 173 "data/maps/LittlerootTown_OldGym/scripts.pory"
	showmonpic SPECIES_SPHEAL, 10, 3
# 174 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Spheal_Text_0, MSGBOX_YESNO
# 175 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_OldGym_EventScript_Spheal_1
# 199 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 200 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittleRootTown_OldGym_NotChosen
	return

LittlerootTown_OldGym_EventScript_Spheal_1:
# 176 "data/maps/LittlerootTown_OldGym/scripts.pory"
	givemon SPECIES_SPHEAL, 5, ITEM_NEVER_MELT_ICE
# 177 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_OldGym_EventScript_Spheal_4
# 185 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_OldGym_EventScript_Spheal_5
# 194 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 195 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_2
	return

LittlerootTown_OldGym_EventScript_Spheal_4:
# 178 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 179 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Spheal_Text_1
# 180 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 4
# 181 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SPHEAL_CHOSEN
# 182 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 183 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_OldGym_EventScript_Spheal_5:
# 186 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 187 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Spheal_Text_1
# 188 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 4
# 189 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SPHEAL_CHOSEN
# 190 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 191 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 206 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 207 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 208 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 209 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 210 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 217 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 218 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 219 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 222 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 220 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


LittlerootTown_OldGym_EventScript_GymStatue_Text_0:
# 5 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "LITTLEROOT POKéMON GYM\p$"

LittlerootTown_OldGym_EventScript_GymStatue_Text_1:
# 6 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "BIRCH'S CERTIFIED TRAINERS:\n$"

LittlerootTown_OldGym_EventScript_GymStatue_Text_2:
# 7 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "STEVEN\n$"

LittlerootTown_OldGym_EventScript_GymStatue_Text_3:
# 8 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "WALLACE\n$"

LittlerootTown_OldGym_EventScript_GymStatue_Text_4:
# 9 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "PHOEBE\n$"

LittlerootTown_OldGym_EventScript_GymStatue_Text_5:
# 10 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "WINONA\n$"

LittlerootTown_OldGym_EventScript_GymStatue_Text_6:
# 11 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "FLANNERY\n$"

LittlerootTown_OldGym_EventScript_GymStatue_Text_7:
# 12 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "BRAWLY\n$"

LittlerootTown_OldGym_EventScript_GymStatue_Text_8:
# 13 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "ROXANNE\n$"

LittlerootTown_OldGym_EventScript_PokeballWingull_Text_0:
# 24 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Best to leave it.$"

LittlerootTown_OldGym_EventScript_Wingull_Text_0:
# 75 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Do you want to choose Wingull?$"

LittlerootTown_OldGym_EventScript_Wingull_Text_1:
# 80 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Adopted Wingull!$"

LittlerootTown_OldGym_EventScript_Wingull_Text_2:
# 96 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "No more room...$"

LittlerootTown_OldGym_EventScript_Numel_Text_0:
# 108 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Do you want to choose Numel?$"

LittlerootTown_OldGym_EventScript_Numel_Text_1:
# 113 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Adopted Numel!$"

LittlerootTown_OldGym_EventScript_Larvitar_Text_0:
# 141 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Do you want to choose Larvitar?$"

LittlerootTown_OldGym_EventScript_Larvitar_Text_1:
# 146 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Adopted Larvitar!$"

LittlerootTown_OldGym_EventScript_Spheal_Text_0:
# 174 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Do you want to choose Spheal?$"

LittlerootTown_OldGym_EventScript_Spheal_Text_1:
# 179 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Adopted Spheal!$"

NicknamePartyMon_Text_0:
# 206 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 222 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Transferred to PC.$"

LittleRootTown_OldGym_NotChosen::
# 225 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "You did not choose the Pokemon$"
