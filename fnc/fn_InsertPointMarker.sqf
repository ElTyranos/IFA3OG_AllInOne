/*

WW2 Open Games - Glider insertion marker
Author: El Tyranos
Function : BG21_fnc_InsertPointMarker

*/

if (isNil ("insert_point")) exitWith {};

createMarker ["insert_point_marker", position insert_point];
"insert_point_marker" setMarkerColor "ColorGreen";
"insert_point_marker" setMarkerType "mil_pickup";
"insert_point_marker" setMarkerText "Insertion point";

switch (playerSide) do {
	case WEST: { "insert_point_marker" setMarkerAlphaLocal 0; };
	case EAST: { "insert_point_marker" setMarkerAlphaLocal 1; };
	case RESISTANCE: { "insert_point_marker" setMarkerAlphaLocal 1; };
};
