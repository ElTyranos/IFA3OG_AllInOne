class ww2og_restrictedArea
{
	idd = -1;
	movingEnable = 1;
	enableSimulation = 1;
	fadeout=0;
	fadein=0;
	duration = 1e10;
	onLoad = "uiNamespace setVariable ['ww2og_restrictedArea',_this select 0];"; // rr_restrictedArea

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
