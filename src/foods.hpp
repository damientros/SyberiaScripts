class BakedBeansCan_Opened;
class PeachesCan_Opened;
class TacticalBaconCan_Opened;
class SpaghettiCan_Opened;
class SardinesCan_Opened;
class TunaCan_Opened;
class DogFoodCan_Opened;
class CatFoodCan_Opened;
class PorkCan_Opened;
class Lunchmeat_Opened;
class UnknownFoodCan_Opened;
class Pajka_Opened;
class Pate_Opened;
class BrisketSpread_Opened;

class BakedBeansCan_OpenedRotten : BakedBeansCan_Opened {};

class PeachesCan_OpenedRotten : PeachesCan_Opened {};

class TacticalBaconCan_OpenedRotten : TacticalBaconCan_Opened {};

class SpaghettiCan_OpenedRotten : SpaghettiCan_Opened {};

class SardinesCan_OpenedRotten : SardinesCan_Opened {};

class TunaCan_OpenedRotten : TunaCan_Opened {};

class DogFoodCan_OpenedRotten : DogFoodCan_Opened {};

class CatFoodCan_OpenedRotten : CatFoodCan_Opened {};

class PorkCan_OpenedRotten : PorkCan_Opened {};

class Lunchmeat_OpenedRotten : Lunchmeat_Opened {};

class UnknownFoodCan_OpenedRotten : UnknownFoodCan_Opened {};

class Pajka_OpenedRotten : Pajka_Opened {};

class Pate_OpenedRotten : Pate_Opened {};

class BrisketSpread_OpenedRotten : BrisketSpread_Opened {};

class SmallGuts: Edible_Base
{
	canBeSplit=1;
};

class Guts: Edible_Base
{
	canBeSplit=1;
};

class BaseFoodStageTransitions
{
	class Raw
	{
		class ToBaked
		{
			transition_to=2;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=3;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=4;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Rotten
	{
		class ToBurned
		{
			transition_to=5;
			cooking_method=1;
		};
	};
	class Baked
	{
		class ToBaked
		{
			transition_to=5;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=5;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Boiled
	{
		class ToBaked
		{
			transition_to=5;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=5;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Dried
	{
		class ToBaked
		{
			transition_to=5;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=5;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Burned
	{
	};
};

class MeatStageTransitions: BaseFoodStageTransitions
{
};

class HumanSteakMeat;
class InfectedSteakMeat: HumanSteakMeat
{
	scope=2;
	displayName="#STR_InfectedSteakMeat0";
	descriptionShort="#STR_InfectedSteakMeat1";
	model="\dz\gear\food\human_meat.p3d";
	debug_ItemCategory=6;
	weight=0;
	weightPerQuantityUnit=2.5;
	interactionWeight=1;
	quantityBar=1;
	itemSize[]={1,3};
	varQuantityInit=150;
	varQuantityMin=0;
	varQuantityMax=150;
	inventorySlot[]=
	{
		"Ingredient",
		"DirectCookingA",
		"DirectCookingB",
		"DirectCookingC",
		"SmokingA",
		"SmokingB",
		"SmokingC",
		"SmokingD"
	};
	hiddenSelections[]=
	{
		"cs_raw"
	};
	hiddenSelectionsTextures[]=
	{
		"dz\gear\food\data\meat_steak_raw_CO.paa",
		"dz\gear\food\data\meat_steak_baked_CO.paa",
		"dz\gear\food\data\meat_steak_boiled_co.paa",
		"dz\gear\food\data\meat_steak_dried_CO.paa",
		"dz\gear\food\data\meat_steak_burned_CO.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"dz\gear\food\data\meat_steak_raw.rvmat",
		"dz\gear\food\data\meat_steak_baked.rvmat",
		"dz\gear\food\data\meat_steak_boiled.rvmat",
		"dz\gear\food\data\meat_steak_dried.rvmat",
		"dz\gear\food\data\meat_steak_burnt.rvmat",
		"dz\gear\food\data\meat_steak_rotten.rvmat"
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=50;
				healthLevels[]=
				{
					
					{
						1,
						{}
					},
					
					{
						0.69999999,
						{}
					},
					
					{
						0.5,
						{}
					},
					
					{
						0.30000001,
						{}
					},
					
					{
						0,
						{}
					}
				};
			};
		};
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={7,50,50,1,0,30};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,25,25,1,0,40};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={4,200,50,1,0,15};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={4,150,150,1,0,15};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={5,150,0,1,0,10};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={7,50,0,1,0,16,20};
				cooking_properties[]={100,30};
			};
		};
	};
	class NoiseImpact
	{
		strength=600;
		type="sound";
	};
	soundImpactType="organic";
	class AnimEvents
	{
		class SoundWeapon
		{
			class openTunaCan
			{
				soundSet="openTunaCan_SoundSet";
				id=204;
			};
			class Eating_TakeFood
			{
				soundSet="Eating_TakeFood_Soundset";
				id=889;
			};
			class Eating_BoxOpen
			{
				soundSet="Eating_BoxOpen_Soundset";
				id=893;
			};
			class Eating_BoxShake
			{
				soundSet="Eating_BoxShake_Soundset";
				id=894;
			};
			class Eating_BoxEnd
			{
				soundSet="Eating_BoxEnd_Soundset";
				id=895;
			};
		};
	};
};

class Mackerel: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="MackerelFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class Carp: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="CarpFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Bluegill: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_BluegillFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Blackbass: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_BlackbassFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Catfish: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_CatfishFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Walleye: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_WalleyeFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Sunfish: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_SunfishFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Smallmouthbass: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_SmallmouthbassFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Largemouthbass: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_LargemouthbassFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Minnow: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_MinnowFilletMeat";
			count=1;
			quantityMinMaxCoef[]={0.2,0.4};
		};
	};
};

class geb_Northernpike: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_NorthernpikeFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Perch: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_PerchFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Sauger: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_SaugerFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Crayfish: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_CrayfishFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Trout_Base: Edible_Base {};

class geb_Trout: geb_Trout_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_TroutFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_BrookTrout: geb_Trout_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_BrookTroutFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_BrownTrout: geb_Trout_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_BrownTroutFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_CutthroatTrout: geb_Trout_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_CutthroatTroutFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_LakeTrout: geb_Trout_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_LakeTroutFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Whitebass: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_WhitebassFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Bowfin: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_BowfinFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Slimysculpin: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_SlimysculpinFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Angelfish: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_AngelfishFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Asianseabass: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_AsianseabassFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Bluemarlin: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_BluemarlinFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Sailfish: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_SailfishFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Mahimahi: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_MahimahiFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Bonita: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_BonitaFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Cherrysalmon: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_CherrysalmonFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Sockeyesalmon: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_SockeyesalmonFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Chinooksalmon: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_ChinooksalmonFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Flatheadmullet: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_FlatheadmulletFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Leopardshark: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_LeopardsharkFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Pacificcod: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_PacificcodFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Redheadcichlid: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_RedheadcichlidFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Roughneckrock: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_RoughneckrockFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Severum: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_SeverumFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Shrimp: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_ShrimpFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Bluetang: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_BluetangFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Hairtailfish: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_HairtailfishFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Humpheadwrasse: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_HumpheadwrasseFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Siamesetigerfish: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_SiamesetigerfishFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Angelshark: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_AngelsharkFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Greatwhiteshark: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_GreatwhitesharkFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class geb_Yellowfintuna: Edible_Base
{
	scope=2;
	class Skinning
	{
		class ObtainedSteaks
		{
			item="geb_YellowFinTunaFilletMeat";
			count=2;
			quantityMinMaxCoef[]={0.5,1};
		};
	};
};

class CarpFilletMeat: Edible_Base
{
};

class MackerelFilletMeat: Edible_Base
{
};

class geb_BluegillFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_bluegill_fillet";
	descriptionShort = "$STR_bluegill_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\bluegill_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,30,60,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,15,30,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,180,60,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,150,150,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,120,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,30,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_BlackbassFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_blackbass_fillet";
	descriptionShort = "$STR_blackbass_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\blackbass_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,45,75,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,25,40,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,220,80,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,170,170,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,140,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,40,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_SmallmouthbassFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_Smallmouthbass_fillet";
	descriptionShort = "$STR_Smallmouthbass_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\smallmouthbass_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,30,60,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,15,30,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,180,60,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,150,150,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,120,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,30,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_WalleyeFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_walleye_fillet";
	descriptionShort = "$STR_walleye_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\walleye_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,30,60,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,15,30,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,180,60,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,150,150,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,120,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,30,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_SunfishFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_sunfish_fillet";
	descriptionShort = "$STR_sunfish_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\sunfish_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,30,60,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,15,30,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,180,60,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,150,150,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,120,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,30,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_CatfishFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_catfish_fillet";
	descriptionShort = "$STR_catfish_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\catfish_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,55,85,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,30,50,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,240,90,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,190,190,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,160,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,50,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_LargemouthbassFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_largemouthbass_fillet";
	descriptionShort = "$STR_largemouthbass_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\largemouthbass_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,45,75,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,25,40,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,220,80,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,170,170,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,140,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,40,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_MinnowFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_minnow_fillet";
	descriptionShort = "$STR_minnow_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
};

class geb_NorthernpikeFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_northernpike_fillet";
	descriptionShort = "$STR_northernpike_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\northernpike_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,25,50,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,15,25,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,110,35,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,90,90,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,80,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,20,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_PerchFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_perch_fillet";
	descriptionShort = "$STR_perch_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\perch_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,45,75,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,25,40,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,220,80,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,170,170,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,140,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,40,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_SaugerFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_sauger_fillet";
	descriptionShort = "$STR_sauger_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\sauger_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,30,60,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,15,30,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,180,60,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,150,150,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,120,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,30,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_TroutFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_trout_fillet";
	descriptionShort = "$STR_trout_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\trout_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,45,75,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,25,40,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,220,80,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,170,170,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,140,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,40,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_BrownTroutFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_browntrout_fillet";
	descriptionShort = "$STR_browntrout_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\browntrout_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,30,60,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,15,30,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,180,60,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,150,150,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,120,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,30,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_BrookTroutFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_brooktrout_fillet";
	descriptionShort = "$STR_brooktrout_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\brooktrout_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,45,75,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,25,40,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,220,80,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,170,170,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,140,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,40,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_CutthroatTroutFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_cuthroattrout_fillet";
	descriptionShort = "$STR_cutthroattrout_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\cutthroattrout_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,45,75,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,25,40,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,220,80,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,170,170,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,140,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,40,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_LakeTroutFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_laketrout_fillet";
	descriptionShort = "$STR_laketrout_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\laketrout_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,45,75,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,25,40,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,220,80,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,170,170,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,140,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,40,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_WhitebassFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_whitebass_fillet";
	descriptionShort = "$STR_whitebass_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\whitebass_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,45,75,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,25,40,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,220,80,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,170,170,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,140,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,40,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_BowfinFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_bowfin_fillet";
	descriptionShort = "$STR_bowfin_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\bowfin_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,30,60,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,15,30,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,180,60,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,150,150,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,120,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,30,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_SlimysculpinFilletMeat: CarpFilletMeat
{
	scope = 2;
	displayName = "$STR_slimysculpin_fillet";
	descriptionShort = "$STR_slimysculpin_desc";
	model = "\dz\gear\food\carp_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\slimysculpin_fillet_co.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,35,50,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,10,20,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,120,50,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,110,110,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,90,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,20,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_AngelfishFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_angelfish_fillet";
	descriptionShort = "$STR_angelfish_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\angelfish_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,55,85,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,30,50,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,240,90,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,190,190,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,160,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,50,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_AsianseabassFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_asianseabass_fillet";
	descriptionShort = "$STR_asianseabass_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\asianseabass_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,45,75,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,25,40,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,220,80,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,170,170,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,140,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,40,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_BluemarlinFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_bluemarlin_fillet";
	descriptionShort = "$STR_bluemarlin_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\bluemarlin_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,65,100,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,40,60,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,280,110,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,220,220,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,180,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,70,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_SailfishFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_sailfish_fillet";
	descriptionShort = "$STR_sailfish_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\bluemarlin_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,65,100,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,40,60,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,280,110,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,220,220,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,180,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,70,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_MahimahiFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_mahimahi_fillet";
	descriptionShort = "$STR_mahimahi_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\mahimahi_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,65,100,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,40,60,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,280,110,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,220,220,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,180,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,70,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_BonitaFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_bonita_fillet";
	descriptionShort = "$STR_bonita_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\bonita_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,55,85,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,30,50,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,240,90,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,190,190,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,160,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,50,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_CherrysalmonFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_cherrysalmon_fillet";
	descriptionShort = "$STR_cherrysalmon_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\cherrysalmon_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,55,85,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,30,50,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,240,90,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,190,190,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,160,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,50,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_SockeyesalmonFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_sockeyesalmon_fillet";
	descriptionShort = "$STR_sockeyesalmon_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\sockeyesalmon_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,55,85,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,30,50,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,240,90,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,190,190,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,160,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,50,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_ChinooksalmonFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_chinooksalmon_fillet";
	descriptionShort = "$STR_chinooksalmon_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\chinooksalmon_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,55,85,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,30,50,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,240,90,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,190,190,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,160,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,50,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_FlatheadmulletFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_flatheadmullet_fillet";
	descriptionShort = "$STR_flatheadmullet_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\flatheadmullet_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,20,50,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,10,20,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,150,40,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,120,120,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,90,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,25,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_LeopardsharkFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_leopardshark_fillet";
	descriptionShort = "$STR_leopardshark_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\leopardshark_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,65,100,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,40,60,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,280,110,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,220,220,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,180,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,70,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_PacificcodFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_pacificcod_fillet";
	descriptionShort = "$STR_pacificcod_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\pacificcod_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,45,75,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,25,40,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,220,80,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,170,170,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,140,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,40,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_RedheadcichlidFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_redheadcichlid_fillet";
	descriptionShort = "$STR_redheadcichlid_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\redheadcichlid_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,65,100,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,40,60,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,280,110,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,220,220,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,180,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,70,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_RoughneckrockFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_roughneckrock_fillet";
	descriptionShort = "$STR_roughneckrock_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\roughneckrock_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,65,100,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,40,60,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,280,110,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,220,220,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,180,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,70,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_SeverumFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_severum_fillet";
	descriptionShort = "$STR_severum_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\severum_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,65,100,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,40,60,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,280,110,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,220,220,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,180,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,70,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_BluetangFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_bluetang_fillet";
	descriptionShort = "$STR_bluetang_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\bluetang_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,65,100,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,40,60,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,280,110,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,220,220,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,180,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,70,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_HairtailfishFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_hairtailfish_fillet";
	descriptionShort = "$STR_hairtailfish_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\hairtailfish_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,55,85,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,30,50,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,240,90,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,190,190,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,160,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,50,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_HumpheadwrasseFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_humpheadwrasse_fillet";
	descriptionShort = "$STR_humpheadwrasse_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\humpheadwrasse_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,65,100,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,40,60,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,280,110,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,220,220,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,180,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,70,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_SiamesetigerfishFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_siamesetigerfish_fillet";
	descriptionShort = "$STR_siamesetigerfish_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\siamesetigerfish_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,55,85,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,30,50,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,240,90,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,190,190,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,160,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,50,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_GreatwhitesharkFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_greatwhiteshark_fillet";
	descriptionShort = "$STR_greatwhiteshark_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\greatwhiteshark_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,65,100,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,40,60,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,280,110,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,220,220,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,180,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,70,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_AngelsharkFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_angelfish_fillet";
	descriptionShort = "$STR_angelfish_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\angelshark_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,65,100,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,40,60,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,280,110,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,220,220,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,180,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,70,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};

class geb_YellowFinTunaFilletMeat: MackerelFilletMeat
{
	scope = 2;
	displayName = "$STR_yellowfintuna_fillet";
	descriptionShort = "$STR_yellowfintuna_desc";
	model = "\dz\gear\food\mackerel_fillet.p3d";
	hiddenSelectionsTextures[] = {
		"\gebsfish\data\fish\yellowfintuna_fillet_co.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
	};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[]={0,0,0};
				nutrition_properties[]={5,55,85,1,0,4};
				cooking_properties[]={0,0};
			};
			class Rotten
			{
				visual_properties[]={-1,-1,5};
				nutrition_properties[]={10,30,50,1,0,20};
				cooking_properties[]={0,0};
			};
			class Baked
			{
				visual_properties[]={0,1,1};
				nutrition_properties[]={2,240,90,1,0};
				cooking_properties[]={70,45};
			};
			class Boiled
			{
				visual_properties[]={0,2,2};
				nutrition_properties[]={2,190,190,1,0};
				cooking_properties[]={70,55};
			};
			class Dried
			{
				visual_properties[]={0,3,3};
				nutrition_properties[]={3,160,0,1,0};
				cooking_properties[]={70,120,80};
			};
			class Burned
			{
				visual_properties[]={0,4,4};
				nutrition_properties[]={5,50,0,1,0,16};
				cooking_properties[]={100,30};
			};
		};
		class FoodStageTransitions: MeatStageTransitions
		{
		};
	};
};