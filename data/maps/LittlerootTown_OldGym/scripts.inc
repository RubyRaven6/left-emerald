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
# 23 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_PokeballWingull_Text_0
LittlerootTown_OldGym_EventScript_PokeballWingull_1:
# 25 "data/maps/LittlerootTown_OldGym/scripts.pory"
	waitmessage
# 26 "data/maps/LittlerootTown_OldGym/scripts.pory"
	releaseall
	end

LittlerootTown_OldGym_EventScript_PokeballWingull_2:
# 20 "data/maps/LittlerootTown_OldGym/scripts.pory"
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
# 31 "data/maps/LittlerootTown_OldGym/scripts.pory"
	lockall
# 32 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_WINGULL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballNumel_4
LittlerootTown_OldGym_EventScript_PokeballNumel_3:
# 36 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_PokeballWingull_Text_0
LittlerootTown_OldGym_EventScript_PokeballNumel_1:
# 38 "data/maps/LittlerootTown_OldGym/scripts.pory"
	waitmessage
# 39 "data/maps/LittlerootTown_OldGym/scripts.pory"
	releaseall
	end

LittlerootTown_OldGym_EventScript_PokeballNumel_2:
# 33 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call LittlerootTown_OldGym_EventScript_Numel
	goto LittlerootTown_OldGym_EventScript_PokeballNumel_1

LittlerootTown_OldGym_EventScript_PokeballNumel_4:
# 32 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_NUMEL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballNumel_6
	goto LittlerootTown_OldGym_EventScript_PokeballNumel_3

LittlerootTown_OldGym_EventScript_PokeballNumel_6:
# 32 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_LARVITAR_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballNumel_8
	goto LittlerootTown_OldGym_EventScript_PokeballNumel_3

LittlerootTown_OldGym_EventScript_PokeballNumel_8:
# 32 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_SPHEAL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballNumel_2
	goto LittlerootTown_OldGym_EventScript_PokeballNumel_3


LittlerootTown_OldGym_EventScript_PokeballLarvitar::
# 44 "data/maps/LittlerootTown_OldGym/scripts.pory"
	lockall
# 45 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_WINGULL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballLarvitar_4
LittlerootTown_OldGym_EventScript_PokeballLarvitar_3:
# 49 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_PokeballWingull_Text_0
LittlerootTown_OldGym_EventScript_PokeballLarvitar_1:
# 51 "data/maps/LittlerootTown_OldGym/scripts.pory"
	waitmessage
# 52 "data/maps/LittlerootTown_OldGym/scripts.pory"
	releaseall
	end

LittlerootTown_OldGym_EventScript_PokeballLarvitar_2:
# 46 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call LittlerootTown_OldGym_EventScript_Larvitar
	goto LittlerootTown_OldGym_EventScript_PokeballLarvitar_1

LittlerootTown_OldGym_EventScript_PokeballLarvitar_4:
# 45 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_NUMEL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballLarvitar_6
	goto LittlerootTown_OldGym_EventScript_PokeballLarvitar_3

LittlerootTown_OldGym_EventScript_PokeballLarvitar_6:
# 45 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_LARVITAR_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballLarvitar_8
	goto LittlerootTown_OldGym_EventScript_PokeballLarvitar_3

LittlerootTown_OldGym_EventScript_PokeballLarvitar_8:
# 45 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_SPHEAL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballLarvitar_2
	goto LittlerootTown_OldGym_EventScript_PokeballLarvitar_3


LittlerootTown_OldGym_EventScript_PokeballSpheal::
# 57 "data/maps/LittlerootTown_OldGym/scripts.pory"
	lockall
# 58 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_WINGULL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballSpheal_4
LittlerootTown_OldGym_EventScript_PokeballSpheal_3:
# 62 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_PokeballWingull_Text_0
LittlerootTown_OldGym_EventScript_PokeballSpheal_1:
# 64 "data/maps/LittlerootTown_OldGym/scripts.pory"
	waitmessage
# 65 "data/maps/LittlerootTown_OldGym/scripts.pory"
	releaseall
	end

LittlerootTown_OldGym_EventScript_PokeballSpheal_2:
# 59 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call LittlerootTown_OldGym_EventScript_Spheal
	goto LittlerootTown_OldGym_EventScript_PokeballSpheal_1

LittlerootTown_OldGym_EventScript_PokeballSpheal_4:
# 58 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_NUMEL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballSpheal_6
	goto LittlerootTown_OldGym_EventScript_PokeballSpheal_3

LittlerootTown_OldGym_EventScript_PokeballSpheal_6:
# 58 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_LARVITAR_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballSpheal_8
	goto LittlerootTown_OldGym_EventScript_PokeballSpheal_3

LittlerootTown_OldGym_EventScript_PokeballSpheal_8:
# 58 "data/maps/LittlerootTown_OldGym/scripts.pory"
	goto_if_unset FLAG_SPHEAL_CHOSEN, LittlerootTown_OldGym_EventScript_PokeballSpheal_2
	goto LittlerootTown_OldGym_EventScript_PokeballSpheal_3


LittlerootTown_OldGym_EventScript_Wingull::
# 70 "data/maps/LittlerootTown_OldGym/scripts.pory"
	showmonpic SPECIES_WINGULL, 10, 3
# 71 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_0, MSGBOX_YESNO
# 72 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_OldGym_EventScript_Wingull_1
# 94 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 95 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittleRootTown_OldGym_NotChosen
	return

LittlerootTown_OldGym_EventScript_Wingull_1:
# 73 "data/maps/LittlerootTown_OldGym/scripts.pory"
	givemon SPECIES_WINGULL, 5, ITEM_MYSTIC_WATER
# 74 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_OldGym_EventScript_Wingull_4
# 81 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_OldGym_EventScript_Wingull_5
# 89 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 90 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_2
	return

LittlerootTown_OldGym_EventScript_Wingull_4:
# 75 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 76 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_1
# 77 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 1
# 78 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_WINGULL_CHOSEN
# 79 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_OldGym_EventScript_Wingull_5:
# 82 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 83 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_1
# 84 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 1
# 85 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_WINGULL_CHOSEN
# 86 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_OldGym_EventScript_Numel::
# 101 "data/maps/LittlerootTown_OldGym/scripts.pory"
	showmonpic SPECIES_NUMEL, 10, 3
# 102 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Numel_Text_0, MSGBOX_YESNO
# 103 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_OldGym_EventScript_Numel_1
# 125 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 126 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittleRootTown_OldGym_NotChosen
	return

LittlerootTown_OldGym_EventScript_Numel_1:
# 104 "data/maps/LittlerootTown_OldGym/scripts.pory"
	givemon SPECIES_NUMEL, 5, ITEM_CHARCOAL
# 105 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_OldGym_EventScript_Numel_4
# 112 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_OldGym_EventScript_Numel_5
# 120 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 121 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_2
	return

LittlerootTown_OldGym_EventScript_Numel_4:
# 106 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 107 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Numel_Text_1
# 108 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 2
# 109 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_NUMEL_CHOSEN
# 110 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_OldGym_EventScript_Numel_5:
# 113 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 114 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Numel_Text_1
# 115 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 2
# 116 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_NUMEL_CHOSEN
# 117 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_OldGym_EventScript_Larvitar::
# 132 "data/maps/LittlerootTown_OldGym/scripts.pory"
	showmonpic SPECIES_LARVITAR, 10, 3
# 133 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Larvitar_Text_0, MSGBOX_YESNO
# 134 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_OldGym_EventScript_Larvitar_1
# 156 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 157 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittleRootTown_OldGym_NotChosen
	return

LittlerootTown_OldGym_EventScript_Larvitar_1:
# 135 "data/maps/LittlerootTown_OldGym/scripts.pory"
	givemon SPECIES_LARVITAR, 5, ITEM_HARD_STONE
# 136 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_OldGym_EventScript_Larvitar_4
# 143 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_OldGym_EventScript_Larvitar_5
# 151 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 152 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_2
	return

LittlerootTown_OldGym_EventScript_Larvitar_4:
# 137 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 138 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Larvitar_Text_1
# 139 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 3
# 140 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_LARVITAR_CHOSEN
# 141 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_OldGym_EventScript_Larvitar_5:
# 144 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 145 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Larvitar_Text_1
# 146 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 3
# 147 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_LARVITAR_CHOSEN
# 148 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_OldGym_EventScript_Spheal::
# 163 "data/maps/LittlerootTown_OldGym/scripts.pory"
	showmonpic SPECIES_SPHEAL, 10, 3
# 164 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Spheal_Text_0, MSGBOX_YESNO
# 165 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_OldGym_EventScript_Spheal_1
# 187 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 188 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittleRootTown_OldGym_NotChosen
	return

LittlerootTown_OldGym_EventScript_Spheal_1:
# 166 "data/maps/LittlerootTown_OldGym/scripts.pory"
	givemon SPECIES_SPHEAL, 5, ITEM_NEVER_MELT_ICE
# 167 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_OldGym_EventScript_Spheal_4
# 174 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_OldGym_EventScript_Spheal_5
# 182 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 183 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Wingull_Text_2
	return

LittlerootTown_OldGym_EventScript_Spheal_4:
# 168 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 169 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Spheal_Text_1
# 170 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 4
# 171 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SPHEAL_CHOSEN
# 172 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_OldGym_EventScript_Spheal_5:
# 175 "data/maps/LittlerootTown_OldGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 176 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox LittlerootTown_OldGym_EventScript_Spheal_Text_1
# 177 "data/maps/LittlerootTown_OldGym/scripts.pory"
	removeobject 4
# 178 "data/maps/LittlerootTown_OldGym/scripts.pory"
	setflag FLAG_SPHEAL_CHOSEN
# 179 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 194 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 195 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 196 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 197 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 198 "data/maps/LittlerootTown_OldGym/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 205 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 206 "data/maps/LittlerootTown_OldGym/scripts.pory"
	hidemonpic
# 207 "data/maps/LittlerootTown_OldGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 210 "data/maps/LittlerootTown_OldGym/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 208 "data/maps/LittlerootTown_OldGym/scripts.pory"
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
# 23 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Best to leave it.$"

LittlerootTown_OldGym_EventScript_Wingull_Text_0:
# 71 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Do you want to choose Wingull?$"

LittlerootTown_OldGym_EventScript_Wingull_Text_1:
# 76 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Adopted Wingull!$"

LittlerootTown_OldGym_EventScript_Wingull_Text_2:
# 90 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "No more room...$"

LittlerootTown_OldGym_EventScript_Numel_Text_0:
# 102 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Do you want to choose Numel?$"

LittlerootTown_OldGym_EventScript_Numel_Text_1:
# 107 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Adopted Numel!$"

LittlerootTown_OldGym_EventScript_Larvitar_Text_0:
# 133 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Do you want to choose Larvitar?$"

LittlerootTown_OldGym_EventScript_Larvitar_Text_1:
# 138 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Adopted Larvitar!$"

LittlerootTown_OldGym_EventScript_Spheal_Text_0:
# 164 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Do you want to choose Spheal?$"

LittlerootTown_OldGym_EventScript_Spheal_Text_1:
# 169 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Adopted Spheal!$"

NicknamePartyMon_Text_0:
# 194 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 210 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "Transferred to PC.$"

LittleRootTown_OldGym_NotChosen::
# 213 "data/maps/LittlerootTown_OldGym/scripts.pory"
	.string "You did not choose the Pokemon$"
