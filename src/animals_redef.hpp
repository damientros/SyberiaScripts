class DZ_LightAI;
class AnimalBase: DZ_LightAI
{
    storageCategory=3;
    knifeDamageModifier=1;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
};

class Animal_GallusGallusDomesticus: AnimalBase
{
    knifeDamageModifier=0.25;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
};

class Animal_GallusGallusDomesticusF: AnimalBase
{
    knifeDamageModifier=0.25;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
};

class Animal_CervusElaphus: AnimalBase
{
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="DeerSteakMeat";
            count=6;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="DeerPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=1;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=2;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_CervusElaphusF: AnimalBase
{
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="DeerSteakMeat";
            count=5;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="DeerPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=1;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=2;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_BosTaurus: AnimalBase
{
    knifeDamageModifier=1.5;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="CowSteakMeat";
            count=8;
            quantityMinMaxCoef[]={0.5,0.8};
        };
        class ObtainedPelt
        {
            item="CowPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=2;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=3;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_BosTaurusF: AnimalBase
{
    knifeDamageModifier=1.5;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="CowSteakMeat";
            count=10;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="CowPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=2;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=3;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_UrsusArctos: AnimalBase
{
    knifeDamageModifier=2.0;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="BearSteakMeat";
            count=8;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="BearPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=2;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=3;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class DeadChicken_ColorBase: Edible_Base
{
    storageCategory=3;
    knifeDamageModifier=0.25;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="ChickenBreastMeat";
            count=2;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedFeathers
        {
            item="ChickenFeather";
            count=10;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=0;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=1;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class DeadRabbit: Edible_Base
{
    storageCategory=3;
    knifeDamageModifier=0.25;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="RabbitLegMeat";
            count=2;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="RabbitPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=0;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=1;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_CapraHircusF: AnimalBase
{
    knifeDamageModifier=1;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="GoatSteakMeat";
            count=5;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="GoatPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=1;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=1;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_CapraHircus_White: AnimalBase
{
    knifeDamageModifier=1;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="GoatSteakMeat";
            count=5;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="GoatPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=1;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=1;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_CapraHircus_Brown: AnimalBase
{
    knifeDamageModifier=1;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="GoatSteakMeat";
            count=5;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="GoatPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=1;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=1;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_CapraHircus_Black: AnimalBase
{
    knifeDamageModifier=1;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="GoatSteakMeat";
            count=5;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="GoatPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=1;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=1;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_SusDomesticus: AnimalBase
{
    knifeDamageModifier=1;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="PigSteakMeat";
            count=6;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="PigPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=2;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=2;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_CapreolusCapreolus: AnimalBase
{
    knifeDamageModifier=1;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="GoatSteakMeat";
            count=5;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="GoatPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=1;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=1;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_CapreolusCapreolusF: AnimalBase
{
    knifeDamageModifier=1;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="GoatSteakMeat";
            count=5;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="GoatPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=1;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=1;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_SusScrofa: AnimalBase
{
    knifeDamageModifier=1.5;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="BoarSteakMeat";
            count=7;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="WildboarPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=2;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=3;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_CanisLupus_Grey: AnimalBase
{
    knifeDamageModifier=1.5;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="WolfSteakMeat";
            count=4;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="WolfPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=1;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=2;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};

class Animal_CanisLupus_White: AnimalBase
{
    knifeDamageModifier=1.5;
    class Cargo
    {
        itemsCargoSize[]={0,0};
        allowOwnedCargoManipulation=1;
        openable=0;
    };
    class Skinning
    {
        class ObtainedSteaks
        {
            item="WolfSteakMeat";
            count=4;
            quantityMinMaxCoef[]={0.5,1};
        };
        class ObtainedPelt
        {
            item="WolfPelt";
            count=1;
            quantityMinMaxCoef[]={0.5,1};
            transferToolDamageCoef=1;
        };
        class ObtainedGuts
        {
            item="SmallGuts";
            count=1;
            quantityMinMaxCoef[]={0.5,0.80000001};
        };
        class ObtainedBones
        {
            item="Bone";
            count=2;
            quantityMinMaxCoef[]={0.2,0.30000001};
            transferToolDamageCoef=1;
        };
    };
};