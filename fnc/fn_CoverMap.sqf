private _trigger = _this select 0;
private _activated = _this select 1;


if (_activated) then {

	//--- Register areas
	_pos = position _trigger;
	_area = triggerarea _trigger;


	_posX = _pos select 0;
	_posY = _pos select 1;
	_sizeX = _area select 0;
	_sizeY = _area select 1;
	_dir = _area select 2;

	_sizeOut = 10000;

	for "_i" from 0 to 270 step 90 do {
		_size1 = [_sizeX,_sizeY] select (abs cos _i);
		_size2 = [_sizeX,_sizeY] select (abs sin _i);
		_sizeMarker = [_size2,_sizeOut] select (abs sin _i);
		_dirTemp = _dir + _i;
		_markerPos = [
			_posX + (sin _dirTemp * _sizeOut),
			_posY + (cos _dirTemp * _sizeOut)
		];

		_marker = format ["bis_fnc_moduleCoverMap_%1",_i];
		createmarker [_marker,_markerPos];
		_marker setmarkerpos _markerPos;
		_marker setmarkersize [_sizeMarker,_sizeOut - _size1];
		_marker setmarkerdir _dirTemp;
		_marker setmarkershape "rectangle";
		_marker setmarkerbrush "solid";
		_marker setmarkercolor "colorBlack";


		_markerPos = [
			_posX + (sin _dirTemp * _size1) + (sin (_dirTemp + 90) * _size2),
			_posY + (cos _dirTemp * _size1) + (cos (_dirTemp + 90) * _size2)
		];
		_marker = format ["bis_fnc_moduleCoverMap_dot_%1",_i];
		createmarker [_marker,_markerPos];
		_marker setmarkerpos _markerPos;
		_marker setmarkersize [0.75,0.75];
		_marker setmarkerdir _dir;
		_marker setmarkertype "mil_box_noShadow";
		_marker setmarkercolor "colorBlack";
	};

	//--- Frame
	_marker = "bis_fnc_moduleCoverMap_border";
	createmarker [_marker,_pos];
	_marker setmarkerpos _pos;
	_marker setmarkersize [_sizeX,_sizeY];
	_marker setmarkerdir _dir;
	_marker setmarkershape "rectangle";
	_marker setmarkerbrush "border";
	_marker setmarkercolor "colorblack";
} else {
	for "_i" from 0 to 270 step 90 do {
		_marker = format ["bis_fnc_moduleCoverMap_%1",_i];
		deletemarker _marker;
		_marker = format ["bis_fnc_moduleCoverMap_dot_%1",_i];
		deletemarker _marker;
	};
	deletemarker "bis_fnc_moduleCoverMap_border";
};
