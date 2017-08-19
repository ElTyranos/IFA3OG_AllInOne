if(isDedicated) exitWith{};

"BG21_DeathScreamEvent" addPublicVariableEventHandler
{
_this select 1 spawn 
    {
        _killedUnit = _this select 0;
        _position = _this select 1;
        _sound = _this select 2;

        // Out of reach
        if ((player distance _killedUnit) > 140) exitWith {};

        _dummy = "Land_HelipadEmpty_F" createVehicleLocal _position;
        _dummy attachTo [_killedUnit, [0,0,0],"head"];
        _dummy say3d _sound;

        sleep 60;

        deleteVehicle _dummy;
    };
};
