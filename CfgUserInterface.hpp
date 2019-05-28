class Controls;
class RscText;
class RscStructuredText;
class RscPicture;
class RscDisplayMainMenuBackground;
class CfgMainMenuSpotlight
{
	delete Bootcamp;
	delete EastWind;
	delete ApexProtocol;
	// delete Orange_Campaign;
	delete Orange_CampaignGerman;
	delete Orange_Showcase_IDAP;
	delete Orange_Showcase_LoW;
	delete Showcase_TankDestroyers;
	// delete Tacops_Campaign_01;
	delete Tacops_Campaign_02;
	delete Tacops_Campaign_03;
	delete Tanks_Campaign_01;
	class BG21_Server
	{
		text = "World War 2 : Open Games";
		textIsQuote = 0;
		picture = "\WW2OG_AllInOne\data\menu_spotlight.paa";
		// video = "\a3\Ui_f\Video\spotlight_1_Bootcamp.ogv";
		action = "";
		actionText = "srv.battlegroup21.com:2302 - PW: 1944"; // Text displayed in top left corner of on-hover white frame
		condition = "true"; // Condition for showing the spotlight
	};
	class Orange_Campaign {condition = "false";};
	class Tacops_Campaign_01 {condition = "false";};
};

class RscTitles
{
	class RscDisplayMainMenuBackground: RscDisplayMainMenuBackground
	{
		class Controls: Controls
		{
			class Picture: RscPicture
			{
				text = "\WW2OG_AllInOne\Data\backgroundWW2OG.jpg";
			};
		};
	};
	class rr_restrictedArea
	{
		idd = -1;
		movingEnable = 1;
		enableSimulation = 1;
		fadeout=0;
		fadein=0;
		duration = 1e10;
		onLoad = "uiNamespace setVariable ['rr_restrictedArea',_this select 0];";

		class controlsBackground {};

		class controls
		{
			class RscText_1000: RscText
			{
				idc = -1;
				x = 0.298905 * safezoneW + safezoneX;
				y = 0.335 * safezoneH + safezoneY;
				w = 0.402187 * safezoneW;
				h = 0.33 * safezoneH;
				colorBackground[] = {1,0,0,0.1};
				sizeEx = "1.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class RscText_1001: RscText
			{
				idc = -1;
				x = 0.304062 * safezoneW + safezoneX;
				y = 0.346 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.308 * safezoneH;
				colorBackground[] = {1,0,0,0.15};
				sizeEx = "1.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class text: RscStructuredText
			{
				idc = 0;
				text = "<t size='3.5' color='#FFFFFF' shadow='2' align='center' t font='PuristaBold'>TURN BACK</t><br/><t size='2' color='#FFFFFF' shadow='2' align='center'>YOU ARE LEAVING THE BATTLEFIELD</t>"; //--- ToDo: Localize;
				x = 0.309219 * safezoneW + safezoneX;
				y = 0.401 * safezoneH + safezoneY;
				w = 0.381563 * safezoneW;
				h = 0.132 * safezoneH;
				colorBackground[] = {-1,-1,-1,0};
				colorActive[] = {-1,-1,-1,0};
				size = "1.00 * 	(pixelH * pixelGridNoUIScale * 1.5)";
			};
			class timer: RscStructuredText
			{
				idc = 1101;
				x = 0.309219 * safezoneW + safezoneX;
				y = 0.5 * safezoneH + safezoneY;
				w = 0.381563 * safezoneW;
				h = 0.176 * safezoneH;
				colorBackground[] = {-1,-1,-1,0};
				colorActive[] = {-1,-1,-1,0};
				size = "1.00 * 	(pixelH * pixelGridNoUIScale * 1.5)";
			};
		};
	};
};
