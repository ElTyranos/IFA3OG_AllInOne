private ["_msg", "_tag", "_chat"];
_msg  = _this select 0;
_tag = _this select 1;
_chat = _this select 2;

if (_chat) then { systemChat ('[SYSTEM] ' + _msg)};
diag_log  ('[BG21] ' + _tag + ': ' + _msg);
