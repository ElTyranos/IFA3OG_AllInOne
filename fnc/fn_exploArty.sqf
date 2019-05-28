//---------------------------------------------------------------------------//
//                               exploArty.sqf                               //
//---------------------------------------------------------------------------//
//                   Script r�alis� par pares pour Haxey                     //
//---------------------------------------------------------------------------//
//    Script qui g�n�re des explosions pour simuler des tirs d'artilleries   //
//---------------------------------------------------------------------------//
// Liste de param�tres : _nul = [0,1,2,3,4,5,...] execVM "exploArty.sqf"     //
//    -> 0 : Explosion � cr�er                                               //
//    -> 1 : Nombre de salves (-1 pour un nombre infini de salves)           //
//    -> 2 : Nombre d'explosions par salves                                  //
//    -> 3 : Dur�e (en secondes) minimum entre deux salves                   //
//    -> 4 : Dur�e (en secondes) maximum entre deux salves                   //
//    -> 5 : Dur�e (en secondes) min entre les explosions d'une salves       //
//    -> 6 : Dur�e (en secondes) min entre les explosions d'une salves       //
//    -> 7 : Rayon autour duquel l'explosion pourra avoir lieu               //
//    -> 8 (et suivants) : Marqueurs qui seront la cible des explosions      //
// Liste des explosions possibles pour le premier argument ici :             //
// http://wiki.7thcavalry.us/wiki/Arma_3_CfgMagazines                        //
// Pour une explosion impressionante, "Bo_GBU12_LGB" fera l'affaire          //
//---------------------------------------------------------------------------//
//                      Exemple d'appel de la fonction :                     //
// _nul = ["Bo_GBU12_LGB",5,4,3,10,1,2,150,"f0","f1"] execVM "exploArty.sqf";//
//     Cet appel fait donc tomber 5 salves de 4 explosions dans un rayon     //
//                      de 150 m�tres des marqueurs f0 et f1,                //
//           avec un temps d'attente entre salves de 3 � 10 secondes         //
//         et un temps d'attente entre explosion de 1 � 2 secondes           //
//---------------------------------------------------------------------------//


// S�curit� pour ne pas faire appara�tre une explosion par joueur
if (!isServer) exitWith {};

// R�cup�ration des arguments :
_explo = (_this select 0);
_nbSlv = (_this select 1);
_nbExp = (_this select 2);
_dminS = (_this select 3);
_dMaxS = (_this select 4);
_dminE = (_this select 5);
_dMaxE = (_this select 6);
_rayon = (_this select 7);
_slvIf = false;
if (_nbSlv < 0) then {
  _slvIf = true;
  _nbSlv = 5;
};

// Pour chacune des salves :
while {_nbSlv > 0} do {
  // Pour chacuns des marqueurs indiqu�s :
  _index = 8;
  while {_index < (count _this)} do
  {
    // Pour chacune des explosions de la salves :
    _i = _nbExp;
    // R�cup�ration de la position en X et Y du marqueur � faire p�ter
    _posX = ( (getMarkerPos (_this select _index) ) select 0);
    _posY = ( (getMarkerPos (_this select _index) ) select 1);
    while {_i >= 1} do {
      // G�naration d'un lieu d'explosion al�atoire
      _posX = ( _posX - _rayon + (random (_rayon * 2) ) );
      _posY = ( _posY - _rayon + (random (_rayon * 2) ) );
      // G�n�ration de l'explosion
      _explo createVehicle [_posX,_posY,0];
      // Attente dur�e minimale entre explosions
      sleep _dminE;
      // Attente dur�e al�atoire
      if (_dMaxE > _dminE) then {
        sleep (random (_dMaxE - _dminE) );
      };
      // D�cr�mentation du nombre de salves � faire exploser
      _i = (_i - 1);
    };
    // S�lection marqueur suivant
    _index = (_index + 1);
  };

  // Attente dur�e minimale entre salves
  sleep _dminS;
  // Attente dur�e al�atoire
  if (_dMaxS > _dminS) then {
    sleep (random (_dMaxS - _dminS) );
  };

  // D�compte du nombre de salves
  _nbSlv = (_nbSlv - 1);
  if (_slvIf) then {_nbSlv = 5;};
};

if (true) exitWith {};
