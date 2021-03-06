// by ALIAS
// nul = [] execVM "intro.sqf";

// if (isDedicated) exitWith {};


if (hasInterface) then {


// if (!isNil "_camera_run") exitWith {}; _camera_run = true;

/* ----- how to use camera script -----------------------------------------------------------------------

_camera_shot = [position_1_name, position_2_name, target_name, duration, zoom_level1, zoom_level_2, attached, x_rel_coord, y_rel_coord, z_rel_coord] execVM "BG21\BG21\intro\camera_work.sqf";

Where
_camera_shot	- string, is the name/number of the camera shot, you can have as many as you want see examples from down bellow
position_1_name - string, where camera is created, replace it with the name of the object you want camera to start from
position_2_name - string, the object where you want camera to move, if you don't want to move from initial position put the same name as for position_1_name
target_name   	- string, name of the object you want the camera to look at
duration 		- seconds, how long you want the camera to function on current shot
zoom_level_1 	- takes values from 0.01 to 2, FOV (field of view) value for initial position
zoom_level_2	- takes values from 0.01 to 2, FOV value for second position, if you don't to change you can give the same value as you did for zoom_level_1
attached		- boolean, if you want to attach camera to an moving object its value has to be true, otherwise must be false
					in this case position_1_name must have the same value as position_2_name
x_rel_coord		- meters, relative position to the attached object on x coordinate
y_rel_coord		- meters, relative position to the attached object on y coordinate
z_rel_coord		- meters, relative position to the attached object on z coordinate

-----------------------------------------------------------------------------------------------------------*/

// - do not edit or delete the lines downbelow, this line must be before first camera shot
// introstarted = true; publicVariable "introstarted";
introended = false; // publicVariable "introended";
loopdone = false; // publicVariable "loopdone";
while {!loopdone} do {if ((introended) and (!loopdone)) then {loopdone = true; /* publicVariable "loopdone";*/};
//^^^^^^^^^^^^^^^^^^^^^^ DO NOT EDIT OR DELETE ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^



// EXAMPLES------ insert your lines for camera shots starting from here -----------------------------------------

// _shot0 = [cam0, cam0, target0, 15, 1, 1, true, 0, 0, 0] execVM "BG21\intro\camera_work.sqf";
// waitUntil {scriptdone _shot0};

// _shot4 = [cam5, cam5, target3, 6, 0.8, 0.5, false, 0, 0, 0] execVM "BG21\intro\camera_work.sqf";
// waitUntil {scriptdone _shot4};

// _shot5 = [cam6, cam6, target3, 6, 0.8, 0.5, false, 0, 0, 0] execVM "BG21\intro\camera_work.sqf";
// waitUntil {scriptdone _shot5};

// _shot6 = [cam7, cam7, target3, 6, 0.8, 0.5, false, 0, 0, 0] execVM "BG21\intro\camera_work.sqf";
// waitUntil {scriptdone _shot6};

// _shot1 = [cam1, cam1, target1, 4, 0.7, 0.1, true, 0, 0, 0] execVM "BG21\intro\camera_work.sqf";
// waitUntil {scriptdone _shot1};

// _shot2 = [cam3, cam3, target2, 4, 0.7, 0.1, true, 0, 0, 0] execVM "BG21\intro\camera_work.sqf";
// waitUntil {scriptdone _shot2};


/*
if you want to add a forth or a fifth camera shot use a code like:
_forthshot = [cam5, cam6, target4, 7, 1, 1, false] execVM "BG21\intro\camera_work.sqf";
waitUntil {scriptDone _forthshot};

>>!! don't forget to name the objects cam5, cam6, target4 in editor 

You can add as many camera shots as you want 
but you have to name the script differently 
and don't forget to add the wait line after each shot
waitUntil {scriptDone _xxxshot};
*/

// --------------->> end of camera shots <<---------------------------------------------------------



// - this line should be after the last camera shot, - do not edit or delete the line
introended = true; publicVariable "introstarted";
//^^^^^^^^^^^^^^^^^^^^^^ DO NOT EDIT OR DELETE ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

sleep 0.1;
};

"dynamicBlur" ppEffectEnable true;   
"dynamicBlur" ppEffectAdjust [100];   
"dynamicBlur" ppEffectCommit 0;     
"dynamicBlur" ppEffectAdjust [0.0];  
"dynamicBlur" ppEffectCommit 4;  
};

_name = name player;
_rank = rank player;
    0=[
		[
			["Welcome,","align = 'center' shadow = '1' size = '1.2' font='PuristaBold'"],
			[format ["  %1 %2", _rank, _name],"align = 'center' shadow = '1' size = '1'","#aaaaaa"],
			["","<br/>"],
			["www.battlegroup21.com","align = 'center' shadow = '1' size = '0.5'"],
			["","<br/>"],
			["WW2 Open Games","align = 'center' shadow = '1' size = '0.8'"]
		]
	] spawn BIS_fnc_typeText2;
