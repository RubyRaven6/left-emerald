# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 6 "data/maps/LittlerootTown/scripts.pory"

# 7 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MayCallsOver
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 11 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 12 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 13 "data/maps/LittlerootTown/scripts.pory"

# 14 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 19 "data/maps/LittlerootTown/scripts.pory"

# 20 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 28 "data/maps/LittlerootTown/scripts.pory"

# 29 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 30 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 36 "data/maps/LittlerootTown/scripts.pory"

# 37 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 41 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"

# 44 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 45 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 46 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_NEW_MAY_BATTLE, LittlerootTown_EventScript_NewRivalSetup
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 55 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 56 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 57 "data/maps/LittlerootTown/scripts.pory"
	end
# 58 "data/maps/LittlerootTown/scripts.pory"

# 59 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 60 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 61 "data/maps/LittlerootTown/scripts.pory"
	return
# 62 "data/maps/LittlerootTown/scripts.pory"

# 63 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 64 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 65 "data/maps/LittlerootTown/scripts.pory"
	return
# 66 "data/maps/LittlerootTown/scripts.pory"

# 67 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 68 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 69 "data/maps/LittlerootTown/scripts.pory"
	return
# 70 "data/maps/LittlerootTown/scripts.pory"

# 71 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 72 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 73 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 74 "data/maps/LittlerootTown/scripts.pory"
	return
# 75 "data/maps/LittlerootTown/scripts.pory"

# 76 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 77 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 78 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 79 "data/maps/LittlerootTown/scripts.pory"
	return
# 80 "data/maps/LittlerootTown/scripts.pory"

# 81 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 82 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 83 "data/maps/LittlerootTown/scripts.pory"
	return
# 84 "data/maps/LittlerootTown/scripts.pory"

# 85 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 86 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 87 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 88 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 89 "data/maps/LittlerootTown/scripts.pory"
	return
# 90 "data/maps/LittlerootTown/scripts.pory"

# 91 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 92 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 93 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 94 "data/maps/LittlerootTown/scripts.pory"
	return
# 95 "data/maps/LittlerootTown/scripts.pory"

# 96 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 97 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 98 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 99 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 100 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 101 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 102 "data/maps/LittlerootTown/scripts.pory"
	return
# 103 "data/maps/LittlerootTown/scripts.pory"

# 104 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 105 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 106 "data/maps/LittlerootTown/scripts.pory"
	return
# 107 "data/maps/LittlerootTown/scripts.pory"

# 108 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 109 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 110 "data/maps/LittlerootTown/scripts.pory"
	return
# 111 "data/maps/LittlerootTown/scripts.pory"

# 112 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 113 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 114 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 115 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 116 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 117 "data/maps/LittlerootTown/scripts.pory"

# 118 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MayCallsOver:
# 119 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, LittlerootTown_EventScript_MayCallsOver
# 120 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 121 "data/maps/LittlerootTown/scripts.pory"

# 122 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 123 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 124 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 125 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 126 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 127 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 128 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 129 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 130 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 131 "data/maps/LittlerootTown/scripts.pory"
	end
# 132 "data/maps/LittlerootTown/scripts.pory"

# 133 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 134 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 135 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 136 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 137 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 138 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 139 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 140 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 141 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 142 "data/maps/LittlerootTown/scripts.pory"
	end
# 143 "data/maps/LittlerootTown/scripts.pory"

# 144 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 145 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 146 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 147 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 148 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 150 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 151 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 152 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 153 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 154 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 155 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 156 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 157 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 158 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 160 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 161 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 162 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 163 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 165 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 166 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 167 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 168 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 169 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 170 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 171 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 172 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 173 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 174 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 175 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 176 "data/maps/LittlerootTown/scripts.pory"
	return
# 177 "data/maps/LittlerootTown/scripts.pory"

# 178 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 179 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 180 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 181 "data/maps/LittlerootTown/scripts.pory"

# 182 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 183 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 184 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 185 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 186 "data/maps/LittlerootTown/scripts.pory"

# 187 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 188 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 189 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 190 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 191 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 192 "data/maps/LittlerootTown/scripts.pory"

# 193 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 194 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 195 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 196 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 197 "data/maps/LittlerootTown/scripts.pory"

# 198 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 199 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 200 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 201 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 202 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 203 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 204 "data/maps/LittlerootTown/scripts.pory"

# 205 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 206 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 207 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 208 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 209 "data/maps/LittlerootTown/scripts.pory"

# 210 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 211 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 212 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 213 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 214 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 215 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 216 "data/maps/LittlerootTown/scripts.pory"

# 217 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 218 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 219 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 220 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 221 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 222 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 223 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 224 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 225 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 226 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 227 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 228 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 229 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 230 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 231 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 232 "data/maps/LittlerootTown/scripts.pory"
	end
# 233 "data/maps/LittlerootTown/scripts.pory"

# 234 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 235 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 236 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 237 "data/maps/LittlerootTown/scripts.pory"

# 238 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 239 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 240 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 241 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 242 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 243 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 244 "data/maps/LittlerootTown/scripts.pory"
	end
# 245 "data/maps/LittlerootTown/scripts.pory"

# 246 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 247 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 248 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 249 "data/maps/LittlerootTown/scripts.pory"
	end
# 250 "data/maps/LittlerootTown/scripts.pory"

# 251 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 252 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 253 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 254 "data/maps/LittlerootTown/scripts.pory"
	end
# 255 "data/maps/LittlerootTown/scripts.pory"

# 256 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 257 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 258 "data/maps/LittlerootTown/scripts.pory"
	end
# 259 "data/maps/LittlerootTown/scripts.pory"

# 260 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 261 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 262 "data/maps/LittlerootTown/scripts.pory"
	end
# 263 "data/maps/LittlerootTown/scripts.pory"

# 264 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 265 "data/maps/LittlerootTown/scripts.pory"
	lock
# 266 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 267 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 268 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 269 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 270 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 271 "data/maps/LittlerootTown/scripts.pory"
	release
# 272 "data/maps/LittlerootTown/scripts.pory"
	end
# 273 "data/maps/LittlerootTown/scripts.pory"

# 274 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 275 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 276 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 277 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 278 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 279 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 280 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 281 "data/maps/LittlerootTown/scripts.pory"
	release
# 282 "data/maps/LittlerootTown/scripts.pory"
	end
# 283 "data/maps/LittlerootTown/scripts.pory"

# 284 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 285 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 286 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 287 "data/maps/LittlerootTown/scripts.pory"
	release
# 288 "data/maps/LittlerootTown/scripts.pory"
	end
# 289 "data/maps/LittlerootTown/scripts.pory"

# 290 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 291 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 292 "data/maps/LittlerootTown/scripts.pory"
	release
# 293 "data/maps/LittlerootTown/scripts.pory"
	end
# 294 "data/maps/LittlerootTown/scripts.pory"

# 295 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 296 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 297 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 298 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 299 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 300 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 301 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 302 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 303 "data/maps/LittlerootTown/scripts.pory"
	end
# 304 "data/maps/LittlerootTown/scripts.pory"

# 305 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 306 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 307 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 308 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 309 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 310 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 311 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 312 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 313 "data/maps/LittlerootTown/scripts.pory"
	return
# 314 "data/maps/LittlerootTown/scripts.pory"

# 315 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 316 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 317 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 318 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 319 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 320 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 321 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 322 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 323 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 324 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 327 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 328 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 329 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 330 "data/maps/LittlerootTown/scripts.pory"

# 331 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 333 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 334 "data/maps/LittlerootTown/scripts.pory"

# 335 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 340 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 341 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 344 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 345 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 346 "data/maps/LittlerootTown/scripts.pory"

# 347 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 348 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 350 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 351 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 352 "data/maps/LittlerootTown/scripts.pory"

# 353 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 354 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 355 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 356 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 357 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 358 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 359 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 360 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 361 "data/maps/LittlerootTown/scripts.pory"
	end
# 362 "data/maps/LittlerootTown/scripts.pory"

# 363 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 364 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 365 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 366 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 367 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 368 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 371 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 375 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 376 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 377 "data/maps/LittlerootTown/scripts.pory"

# 378 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 381 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 382 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 383 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 384 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 385 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 386 "data/maps/LittlerootTown/scripts.pory"

# 387 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 388 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 389 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 390 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 391 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 392 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 393 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 394 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 395 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 396 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 397 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 398 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 399 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 400 "data/maps/LittlerootTown/scripts.pory"
	end
# 401 "data/maps/LittlerootTown/scripts.pory"

# 402 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 403 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 404 "data/maps/LittlerootTown/scripts.pory"
	end
# 405 "data/maps/LittlerootTown/scripts.pory"

# 406 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 407 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 408 "data/maps/LittlerootTown/scripts.pory"
	end
# 409 "data/maps/LittlerootTown/scripts.pory"

# 410 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 411 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 412 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 413 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 414 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 415 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 416 "data/maps/LittlerootTown/scripts.pory"
	end
# 417 "data/maps/LittlerootTown/scripts.pory"

# 418 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 419 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 420 "data/maps/LittlerootTown/scripts.pory"
	return
# 421 "data/maps/LittlerootTown/scripts.pory"

# 422 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 423 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 424 "data/maps/LittlerootTown/scripts.pory"
	return
# 425 "data/maps/LittlerootTown/scripts.pory"

# 426 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 427 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 428 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 429 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 430 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 431 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 432 "data/maps/LittlerootTown/scripts.pory"
	end
# 433 "data/maps/LittlerootTown/scripts.pory"

# 434 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 435 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 436 "data/maps/LittlerootTown/scripts.pory"
	return
# 437 "data/maps/LittlerootTown/scripts.pory"

# 438 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 439 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 440 "data/maps/LittlerootTown/scripts.pory"
	return
# 441 "data/maps/LittlerootTown/scripts.pory"

# 442 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 443 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 444 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 445 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 446 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 447 "data/maps/LittlerootTown/scripts.pory"
	end
# 448 "data/maps/LittlerootTown/scripts.pory"

# 449 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 450 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 451 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 452 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 453 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 454 "data/maps/LittlerootTown/scripts.pory"
	end
# 455 "data/maps/LittlerootTown/scripts.pory"

# 456 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 457 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 458 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 459 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 460 "data/maps/LittlerootTown/scripts.pory"
	end
# 461 "data/maps/LittlerootTown/scripts.pory"

# 462 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 463 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 464 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 465 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 466 "data/maps/LittlerootTown/scripts.pory"
	end
# 467 "data/maps/LittlerootTown/scripts.pory"

# 468 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 469 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 470 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 471 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 472 "data/maps/LittlerootTown/scripts.pory"
	end
# 473 "data/maps/LittlerootTown/scripts.pory"

# 474 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 475 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 476 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 477 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 478 "data/maps/LittlerootTown/scripts.pory"
	end
# 479 "data/maps/LittlerootTown/scripts.pory"

# 480 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 481 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 482 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 483 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 484 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 485 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 486 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 487 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 488 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 489 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 490 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 491 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 492 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 493 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 494 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 495 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 496 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 497 "data/maps/LittlerootTown/scripts.pory"
	end
# 498 "data/maps/LittlerootTown/scripts.pory"

# 499 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 500 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 501 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 502 "data/maps/LittlerootTown/scripts.pory"
	return
# 503 "data/maps/LittlerootTown/scripts.pory"

# 504 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 505 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 506 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 507 "data/maps/LittlerootTown/scripts.pory"
	return
# 508 "data/maps/LittlerootTown/scripts.pory"

# 509 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 510 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 511 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 512 "data/maps/LittlerootTown/scripts.pory"
	return
# 513 "data/maps/LittlerootTown/scripts.pory"

# 514 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 515 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 516 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 517 "data/maps/LittlerootTown/scripts.pory"
	return
# 518 "data/maps/LittlerootTown/scripts.pory"

# 519 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 520 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 521 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 522 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 523 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 524 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 525 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 526 "data/maps/LittlerootTown/scripts.pory"
	return
# 527 "data/maps/LittlerootTown/scripts.pory"

# 528 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 530 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 531 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 532 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 533 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 534 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 535 "data/maps/LittlerootTown/scripts.pory"
	return
# 536 "data/maps/LittlerootTown/scripts.pory"

# 537 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 538 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 539 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 540 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 541 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 542 "data/maps/LittlerootTown/scripts.pory"
	return
# 543 "data/maps/LittlerootTown/scripts.pory"

# 544 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 545 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 546 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 547 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 548 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 549 "data/maps/LittlerootTown/scripts.pory"
	return
# 550 "data/maps/LittlerootTown/scripts.pory"

# 551 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 552 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 553 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 554 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 555 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 556 "data/maps/LittlerootTown/scripts.pory"
	return
# 557 "data/maps/LittlerootTown/scripts.pory"

# 558 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 559 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 560 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 561 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 562 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 563 "data/maps/LittlerootTown/scripts.pory"
	return
# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 566 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 567 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 568 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 569 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 570 "data/maps/LittlerootTown/scripts.pory"
	return
# 571 "data/maps/LittlerootTown/scripts.pory"

# 572 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 573 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 574 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 575 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 576 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 577 "data/maps/LittlerootTown/scripts.pory"
	return
# 578 "data/maps/LittlerootTown/scripts.pory"

# 579 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 580 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 581 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 582 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 583 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 584 "data/maps/LittlerootTown/scripts.pory"
	return
# 585 "data/maps/LittlerootTown/scripts.pory"

# 586 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 587 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 588 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 589 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 590 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 591 "data/maps/LittlerootTown/scripts.pory"
	return
# 592 "data/maps/LittlerootTown/scripts.pory"

# 593 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 594 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 595 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 596 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 597 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 598 "data/maps/LittlerootTown/scripts.pory"
	return
# 599 "data/maps/LittlerootTown/scripts.pory"

# 600 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 601 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 602 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 603 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 604 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 605 "data/maps/LittlerootTown/scripts.pory"
	return
# 606 "data/maps/LittlerootTown/scripts.pory"

# 607 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 608 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 609 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 610 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 611 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 612 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 613 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 614 "data/maps/LittlerootTown/scripts.pory"
	return
# 615 "data/maps/LittlerootTown/scripts.pory"

# 616 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 618 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 619 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 620 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 622 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 623 "data/maps/LittlerootTown/scripts.pory"
	return
# 624 "data/maps/LittlerootTown/scripts.pory"

# 625 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 626 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 627 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 628 "data/maps/LittlerootTown/scripts.pory"
	return
# 629 "data/maps/LittlerootTown/scripts.pory"

# 630 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 631 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 632 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 633 "data/maps/LittlerootTown/scripts.pory"
	return
# 634 "data/maps/LittlerootTown/scripts.pory"

# 635 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 636 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 637 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 638 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 639 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 640 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 641 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 642 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 643 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 644 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 645 "data/maps/LittlerootTown/scripts.pory"
	return
# 646 "data/maps/LittlerootTown/scripts.pory"

# 647 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 648 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 650 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 651 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 652 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 653 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 654 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 655 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 656 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 657 "data/maps/LittlerootTown/scripts.pory"
	return
# 658 "data/maps/LittlerootTown/scripts.pory"

# 659 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 660 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 662 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 663 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 664 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 665 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 666 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 667 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 668 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 669 "data/maps/LittlerootTown/scripts.pory"
	return
# 670 "data/maps/LittlerootTown/scripts.pory"

# 671 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 672 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 674 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 675 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 676 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 677 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 678 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 679 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 680 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 681 "data/maps/LittlerootTown/scripts.pory"
	return
# 682 "data/maps/LittlerootTown/scripts.pory"

# 683 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 684 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 686 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 687 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 688 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 689 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 690 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 691 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 692 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 693 "data/maps/LittlerootTown/scripts.pory"
	return
# 694 "data/maps/LittlerootTown/scripts.pory"

# 695 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 696 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 698 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 699 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 700 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 701 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 702 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 703 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 704 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 705 "data/maps/LittlerootTown/scripts.pory"
	return
# 706 "data/maps/LittlerootTown/scripts.pory"

# 707 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 708 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 710 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 711 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 712 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 713 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 714 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 715 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 716 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 717 "data/maps/LittlerootTown/scripts.pory"
	return
# 718 "data/maps/LittlerootTown/scripts.pory"

# 719 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 720 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 721 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 722 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 723 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 724 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 726 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 727 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 728 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 729 "data/maps/LittlerootTown/scripts.pory"
	return
# 730 "data/maps/LittlerootTown/scripts.pory"

# 731 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 732 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 736 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 737 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 738 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 739 "data/maps/LittlerootTown/scripts.pory"

# 740 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 747 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 748 "data/maps/LittlerootTown/scripts.pory"

# 749 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 753 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 754 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 755 "data/maps/LittlerootTown/scripts.pory"

# 756 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 760 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 761 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 762 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 763 "data/maps/LittlerootTown/scripts.pory"

# 764 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 766 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 767 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 768 "data/maps/LittlerootTown/scripts.pory"

# 769 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 771 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 772 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 773 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 774 "data/maps/LittlerootTown/scripts.pory"

# 775 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 776 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 779 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 780 "data/maps/LittlerootTown/scripts.pory"

# 781 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 784 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 785 "data/maps/LittlerootTown/scripts.pory"

# 786 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 789 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 790 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 791 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 792 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 793 "data/maps/LittlerootTown/scripts.pory"

# 794 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 796 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 797 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 798 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 799 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 800 "data/maps/LittlerootTown/scripts.pory"

# 801 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 804 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 805 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 806 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 807 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 808 "data/maps/LittlerootTown/scripts.pory"

# 809 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 811 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 812 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 815 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 816 "data/maps/LittlerootTown/scripts.pory"

# 817 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 821 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 823 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 824 "data/maps/LittlerootTown/scripts.pory"

# 825 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 826 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 827 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 828 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 832 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 833 "data/maps/LittlerootTown/scripts.pory"

# 834 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 835 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 836 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 837 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 838 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 839 "data/maps/LittlerootTown/scripts.pory"

# 840 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 844 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 845 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 846 "data/maps/LittlerootTown/scripts.pory"

# 847 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 851 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 852 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 853 "data/maps/LittlerootTown/scripts.pory"

# 854 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 858 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 859 "data/maps/LittlerootTown/scripts.pory"

# 860 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 865 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 866 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 867 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 868 "data/maps/LittlerootTown/scripts.pory"

# 869 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 875 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 876 "data/maps/LittlerootTown/scripts.pory"

# 877 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 878 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 879 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 880 "data/maps/LittlerootTown/scripts.pory"

# 881 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 882 "data/maps/LittlerootTown/scripts.pory"
	lock
# 883 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 884 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 885 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 886 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 887 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 888 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 889 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 890 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 891 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 892 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 893 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 894 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 895 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 896 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 897 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 898 "data/maps/LittlerootTown/scripts.pory"
	end
# 899 "data/maps/LittlerootTown/scripts.pory"

# 900 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 901 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 902 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 903 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 904 "data/maps/LittlerootTown/scripts.pory"
	release
# 905 "data/maps/LittlerootTown/scripts.pory"
	end
# 906 "data/maps/LittlerootTown/scripts.pory"

# 907 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 908 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 909 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 910 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 911 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 912 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 913 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 914 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 915 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 916 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 917 "data/maps/LittlerootTown/scripts.pory"
	return
# 918 "data/maps/LittlerootTown/scripts.pory"

# 919 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 920 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 921 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 922 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 923 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 925 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 926 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 927 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 928 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 929 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 930 "data/maps/LittlerootTown/scripts.pory"

# 931 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 933 "data/maps/LittlerootTown/scripts.pory"

# 934 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 935 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 936 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 937 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 938 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 939 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 941 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 942 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 943 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 944 "data/maps/LittlerootTown/scripts.pory"

# 945 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 946 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 947 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 948 "data/maps/LittlerootTown/scripts.pory"

# 949 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 952 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 953 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 956 "data/maps/LittlerootTown/scripts.pory"

# 957 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 958 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 959 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 960 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 963 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 964 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 966 "data/maps/LittlerootTown/scripts.pory"

# 967 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 968 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 969 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 970 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 971 "data/maps/LittlerootTown/scripts.pory"

# 972 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 974 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 975 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 976 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 977 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 978 "data/maps/LittlerootTown/scripts.pory"

# 979 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 980 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 981 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 982 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 983 "data/maps/LittlerootTown/scripts.pory"

# 984 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 985 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 986 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 987 "data/maps/LittlerootTown/scripts.pory"

# 988 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 991 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 992 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 993 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 996 "data/maps/LittlerootTown/scripts.pory"

# 997 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 998 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 999 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1000 "data/maps/LittlerootTown/scripts.pory"

# 1001 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1002 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1003 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1004 "data/maps/LittlerootTown/scripts.pory"

# 1005 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1007 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1008 "data/maps/LittlerootTown/scripts.pory"

# 1009 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1010 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1011 "data/maps/LittlerootTown/scripts.pory"

# 1012 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1013 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1014 "data/maps/LittlerootTown/scripts.pory"

# 1015 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1016 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1017 "data/maps/LittlerootTown/scripts.pory"

# 1018 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1019 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1020 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1021 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1022 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1023 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1024 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1025 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1026 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1027 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

LittlerootTown_EventScript_NewRivalSetup::
# 1031 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_WINGULL_CHOSEN, LittlerootTown_EventScript_NewRivalSetup_4
LittlerootTown_EventScript_NewRivalSetup_3:
# 1037 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_STATE, 0
	goto_if_eq LittlerootTown_EventScript_NewRivalSetup_21
LittlerootTown_EventScript_NewRivalSetup_1:
# 1051 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_NEW_MAY_BATTLE, LittlerootTown_EventScript_NewRivalSetup_13
	return

LittlerootTown_EventScript_NewRivalSetup_2:
# 1032 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_BEFORE_MAY_BATTLE
# 1033 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 0
# 1034 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL, 0
	goto LittlerootTown_EventScript_NewRivalSetup_1

LittlerootTown_EventScript_NewRivalSetup_4:
# 1031 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_NUMEL_CHOSEN, LittlerootTown_EventScript_NewRivalSetup_6
	goto LittlerootTown_EventScript_NewRivalSetup_3

LittlerootTown_EventScript_NewRivalSetup_6:
# 1031 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_LARVITAR_CHOSEN, LittlerootTown_EventScript_NewRivalSetup_8
	goto LittlerootTown_EventScript_NewRivalSetup_3

LittlerootTown_EventScript_NewRivalSetup_8:
# 1031 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_SPHEAL_CHOSEN, LittlerootTown_EventScript_NewRivalSetup_2
	goto LittlerootTown_EventScript_NewRivalSetup_3

LittlerootTown_EventScript_NewRivalSetup_11:
# 1052 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

LittlerootTown_EventScript_NewRivalSetup_12:
# 1051 "data/maps/LittlerootTown/scripts.pory"
	checktrainerflag TRAINER_MAY_ROUTE_103_TORCHIC
	goto_if 0, LittlerootTown_EventScript_NewRivalSetup_16
	return

LittlerootTown_EventScript_NewRivalSetup_13:
# 1051 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_NewRivalSetup_12
	return

LittlerootTown_EventScript_NewRivalSetup_16:
# 1051 "data/maps/LittlerootTown/scripts.pory"
	checktrainerflag TRAINER_MAY_ROUTE_103_TREECKO
	goto_if 0, LittlerootTown_EventScript_NewRivalSetup_18
	return

LittlerootTown_EventScript_NewRivalSetup_18:
# 1051 "data/maps/LittlerootTown/scripts.pory"
	checktrainerflag TRAINER_MAY_ROUTE_103_MUDKIP
	goto_if 0, LittlerootTown_EventScript_NewRivalSetup_11
	return

LittlerootTown_EventScript_NewRivalSetup_21:
# 1038 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_BEFORE_MAY_BATTLE
# 1039 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_NEW_MAY_BATTLE
# 1040 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_WINGULL_CHOSEN, LittlerootTown_EventScript_NewRivalSetup_23
# 1040 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_SPHEAL_CHOSEN, LittlerootTown_EventScript_NewRivalSetup_23
# 1043 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_LARVITAR_CHOSEN, LittlerootTown_EventScript_NewRivalSetup_24
# 1046 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_NUMEL_CHOSEN, LittlerootTown_EventScript_NewRivalSetup_25
	goto LittlerootTown_EventScript_NewRivalSetup_1

LittlerootTown_EventScript_NewRivalSetup_23:
# 1041 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL, 1
	goto LittlerootTown_EventScript_NewRivalSetup_1

LittlerootTown_EventScript_NewRivalSetup_24:
# 1044 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL, 2
	goto LittlerootTown_EventScript_NewRivalSetup_1

LittlerootTown_EventScript_NewRivalSetup_25:
# 1047 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL, 3
	goto LittlerootTown_EventScript_NewRivalSetup_1


LittlerootTown_EventScript_WarehouseSign::
# 1057 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1058 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WarehouseSign_Text_0
# 1059 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_OldGymSign::
# 1063 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1064 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_GymSign_Text
# 1065 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_BlockPlayer::
# 1069 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1070 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_BeforePrologue, MSGBOX_DEFAULT
# 1071 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 1072 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1073 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_NewRivalMay::
# 1077 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1078 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1079 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Idle_NewRivalMay, MSGBOX_DEFAULT
# 1080 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1081 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_MayCallsOver::
# 1085 "data/maps/LittlerootTown/scripts.pory"
	applymovement 12, LookAtPlayer
# 1086 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookAtMay
# 1087 "data/maps/LittlerootTown/scripts.pory"
	dofieldeffect FLDEFF_EXCLAMATION_MARK_ICON
# 1088 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_NewRivalMay_ComeHere, MSGBOX_AUTOCLOSE
# 1089 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_TEMP_0, 2
	return


LittlerootTown_EventScript_NewRivalMayBattle::
# 1093 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_NewRivalMay_Intro, MSGBOX_DEFAULT
# 1094 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1095 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_LITTLEROOT_RIVAL
# 1096 "data/maps/LittlerootTown/scripts.pory"
	case 1, LittlerootTown_EventScript_NewRivalMayBattle_3
# 1098 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_NewRivalMayBattle_4
# 1100 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_NewRivalMayBattle_5
LittlerootTown_EventScript_NewRivalMayBattle_1:
	end

LittlerootTown_EventScript_NewRivalMayBattle_3:
# 1097 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MayMudkip
	goto LittlerootTown_EventScript_NewRivalMayBattle_1

LittlerootTown_EventScript_NewRivalMayBattle_4:
# 1099 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MayTorchic
	goto LittlerootTown_EventScript_NewRivalMayBattle_1

LittlerootTown_EventScript_NewRivalMayBattle_5:
# 1101 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MayTreecko
	goto LittlerootTown_EventScript_NewRivalMayBattle_1


LittlerootTown_EventScript_MayMudkip::
# 1107 "data/maps/LittlerootTown/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, LittlerootTown_NewRivalMay_Outro
# 1108 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_RivalBattleOver
	end


LittlerootTown_EventScript_MayTorchic::
# 1113 "data/maps/LittlerootTown/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, LittlerootTown_NewRivalMay_Outro
# 1114 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_RivalBattleOver
	end


LittlerootTown_EventScript_MayTreecko::
# 1119 "data/maps/LittlerootTown/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, LittlerootTown_NewRivalMay_Outro
# 1120 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_RivalBattleOver
	end


LittlerootTown_RivalBattleOver::
# 1125 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1126 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_PostBattle_NewRivalMay, MSGBOX_AUTOCLOSE
# 1127 "data/maps/LittlerootTown/scripts.pory"
	applymovement 12, MayLeave
# 1128 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1129 "data/maps/LittlerootTown/scripts.pory"
	removeobject 12
# 1130 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 1
# 1131 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 1132 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_DeveloperRuby::
# 1136 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_WINGULL_CHOSEN, LittlerootTown_EventScript_DeveloperRuby_3
LittlerootTown_EventScript_DeveloperRuby_2:
# 1144 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DeveloperRubyBattle
	return

LittlerootTown_EventScript_DeveloperRuby_1:
# 1137 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1138 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1139 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Idle_Ruby, MSGBOX_DEFAULT
# 1140 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1141 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return

LittlerootTown_EventScript_DeveloperRuby_3:
# 1136 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_NUMEL_CHOSEN, LittlerootTown_EventScript_DeveloperRuby_5
	goto LittlerootTown_EventScript_DeveloperRuby_2

LittlerootTown_EventScript_DeveloperRuby_5:
# 1136 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_LARVITAR_CHOSEN, LittlerootTown_EventScript_DeveloperRuby_7
	goto LittlerootTown_EventScript_DeveloperRuby_2

LittlerootTown_EventScript_DeveloperRuby_7:
# 1136 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_SPHEAL_CHOSEN, LittlerootTown_EventScript_DeveloperRuby_1
	goto LittlerootTown_EventScript_DeveloperRuby_2


LittlerootTown_EventScript_DeveloperRubyBattle::
# 1149 "data/maps/LittlerootTown/scripts.pory"
	trainerbattle_single TRAINER_RUBY, LittlerootTown_Ruby_Intro, LittlerootTown_Ruby_Outro
# 1150 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_PostBattle_Ruby, MSGBOX_AUTOCLOSE
# 1151 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
	end


LittlerootTown_EventScript_Kyogre::
# 1156 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1157 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 1158 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 1159 "data/maps/LittlerootTown/scripts.pory"
	delay 40
# 1160 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 1161 "data/maps/LittlerootTown/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 15, ITEM_BLUE_ORB
# 1162 "data/maps/LittlerootTown/scripts.pory"
	dowildbattle
# 1163 "data/maps/LittlerootTown/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 1164 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq LittlerootTown_EventScript_Kyogre_2
# 1167 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq LittlerootTown_EventScript_Kyogre_3
# 1170 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq LittlerootTown_EventScript_Kyogre_4
# 1173 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq LittlerootTown_EventScript_Kyogre_5
LittlerootTown_EventScript_Kyogre_1:
# 1176 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1177 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return

LittlerootTown_EventScript_Kyogre_2:
# 1165 "data/maps/LittlerootTown/scripts.pory"
	call Won_or_Caught
	goto LittlerootTown_EventScript_Kyogre_1

LittlerootTown_EventScript_Kyogre_3:
# 1168 "data/maps/LittlerootTown/scripts.pory"
	call Won_or_Caught
	goto LittlerootTown_EventScript_Kyogre_1

LittlerootTown_EventScript_Kyogre_4:
# 1171 "data/maps/LittlerootTown/scripts.pory"
	call RanAway
	goto LittlerootTown_EventScript_Kyogre_1

LittlerootTown_EventScript_Kyogre_5:
# 1174 "data/maps/LittlerootTown/scripts.pory"
	call RanAway
	goto LittlerootTown_EventScript_Kyogre_1


Won_or_Caught::
# 1181 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1182 "data/maps/LittlerootTown/scripts.pory"
	removeobject 10
# 1183 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1184 "data/maps/LittlerootTown/scripts.pory"
	msgbox Won_or_Caught_Text_0
	return


RanAway::
# 1189 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 1190 "data/maps/LittlerootTown/scripts.pory"
	msgbox RanAway_Text_0, MSGBOX_AUTOCLOSE
# 1191 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 1192 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1193 "data/maps/LittlerootTown/scripts.pory"
	removeobject 10
# 1194 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1195 "data/maps/LittlerootTown/scripts.pory"
	msgbox RanAway_Text_1
	return


# 1199 "data/maps/LittlerootTown/scripts.pory"
StopPlayer:
# 1200 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1200 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 1203 "data/maps/LittlerootTown/scripts.pory"
LookAtMay:
# 1204 "data/maps/LittlerootTown/scripts.pory"
	face_right
	step_end

# 1207 "data/maps/LittlerootTown/scripts.pory"
LookAtPlayer:
# 1208 "data/maps/LittlerootTown/scripts.pory"
	face_left
	step_end

# 1211 "data/maps/LittlerootTown/scripts.pory"
MayLeave:
# 1212 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1212 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1212 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1212 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1212 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1212 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1212 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

LittlerootTown_EventScript_WarehouseSign_Text_0:
# 1058 "data/maps/LittlerootTown/scripts.pory"
	.string "BIRCH'S WAREHOUSE$"

Won_or_Caught_Text_0:
# 1184 "data/maps/LittlerootTown/scripts.pory"
	.string "You are the Pokemon Master!$"

RanAway_Text_0:
# 1190 "data/maps/LittlerootTown/scripts.pory"
	.string "Kyuhh....$"

RanAway_Text_1:
# 1195 "data/maps/LittlerootTown/scripts.pory"
	.string "You are not the Pokemon Master.$"

LittlerootTown_BeforePrologue::
# 1215 "data/maps/LittlerootTown/scripts.pory"
	.string "I probably shouldn't go out yet. I might\n"
	.string "not be ready!$"

LittlerootTown_GymSign_Text::
# 1219 "data/maps/LittlerootTown/scripts.pory"
	.string "It's an old worn out sign, but you can\n"
	.string "faintly read its text.\p"
	.string "LITTLEROOT TOWN POKÉMON GYM\n"
	.string "LEADER: BIRCH\n"
	.string "The pursuant scientist!$"

LittlerootTown_Idle_Ruby::
# 1224 "data/maps/LittlerootTown/scripts.pory"
	.string "RUBY: Hi! I'm the developer! Nice to\nmeet ya.$"

LittlerootTown_Ruby_Intro::
# 1228 "data/maps/LittlerootTown/scripts.pory"
	.string "RUBY: Oh hey! You got a Pokémon! Let's battle!$"

LittlerootTown_Ruby_Outro::
# 1232 "data/maps/LittlerootTown/scripts.pory"
	.string "RUBY: That was fun!$"

LittlerootTown_PostBattle_Ruby::
# 1236 "data/maps/LittlerootTown/scripts.pory"
	.string "RUBY: I look forward to next time!$"

LittlerootTown_Idle_NewRivalMay::
# 1240 "data/maps/LittlerootTown/scripts.pory"
	.string "MAY: Hey! This is my dad's old gym.\n"
	.string "There's definitely some interesting\l"
	.string "things inside.$"

LittlerootTown_NewRivalMay_ComeHere::
# 1244 "data/maps/LittlerootTown/scripts.pory"
	.string "May: I see you got a Pokémon! Let's do a\n"
	.string "trainer battle!$"

LittlerootTown_NewRivalMay_Intro::
# 1248 "data/maps/LittlerootTown/scripts.pory"
	.string "MAY: Are you ready?$"

LittlerootTown_NewRivalMay_Outro::
# 1252 "data/maps/LittlerootTown/scripts.pory"
	.string "MAY: That was fun!$"

LittlerootTown_PostBattle_NewRivalMay::
# 1256 "data/maps/LittlerootTown/scripts.pory"
	.string "MAY: I look forward to next time! I gotta\ngo!$"
