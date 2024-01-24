class CfgPatches
{
	class MOCPackII
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
            "DZ_Gear_Medical",
            "DZ_Gear_Drinks",
            "DZ_Structures_Furniture",
            "DZ_Weapons_Muzzles",
            "DZ_Weapons_Melee_Blade",
            "DZ_Characters",
            "DZ_Characters_Backpacks",
			"DZ_Weapons_Explosives",
			"DZ_Gear_Medical"
		};
	};
};
class cfgMods
{
  class MOCPackII
   {
     dir="MOCPackII";
	 picture="";
	 hideName=0;
	 hidePicture=0;
	 name="JhowPix";
	 credits="";
	 author="JhowPix";
	 authorID="76561199247898368";
	 extra=0;
	 type="mod";
	 dependencies[]=
	  {
		"Game",
		"World",
		"Mission"
	  };
        class defs
		{
           class gameScriptModule
		   {
               value="";
			   files[]=
			   {
                 "MOCPackII/scripts/3_Game"
			   };
		   };
		   class worldScriptModule
		   {
               value="";
			   files[]=
			   {
                 "MOCPackII/scripts/4_World"
			   };
		   };
		   class missionScriptModule
		   {
               value="";
			   files[]=
			   {
                 "MOCPackII/scripts/5_Mission"
			   };
		   };
		};
	 
    };
};

//---------------------------------- Start config sonds --------------------------------------------------
class CfgSoundShaders
{
     //----------------------------------------------------------Start class CfgSoundShaders Music Menu----------------------------------
    class FMusic_Menu_SoundShader
	{
		samples[] = {{"\MocM\Untitled_Project_V1_V2.ogg",1}};  // path to your soundfile in .ogg format, you can also put more than one file in there after the first closing bracket
		volume = 0.85;  // volume of your music
	};
    //----------------------------------------------------------End class CfgSoundShaders Music Menu----------------------------------


    //-----------------------------------------------------------Stard class CfgSoundShaders sond Horn ----------------------
	// Em Construcao 
	class baseCharacter_SoundShader;
    class JP_HornViking_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MOCPackII\test\Sounds\berrante.ogg", 1 }}; 
        volume = 1;
        range=150;
    };
    class JP_HornVikingII_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MOCPackII\test\Sounds\berrante2.ogg", 1 }}; 
        volume = 1;
        range=150;
    }
    //-----------------------------------------------------------End class CfgSoundShaders sond Horn ----------------------


    //----------------------------------------------------------Start class CfgSoundShaders  MemeGrenade----------------------------------
	
    class MemeGrenade_aiPai_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\aiPai.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_atolaODedoNestaPorra_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\atolaODedoNestaPorra.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_bomDiaaa_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\bomDiaaa.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_bomDiaNaFazendinhaPagode_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\bomDiaNaFazendinhaPagode.ogg", 1 }}; 
        volume = 1;
        range=150;
    };
    class MemeGrenade_euQueroSerNinja_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\euQueroSerNinja.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_grito_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\grito.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_iluminat_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\iluminat.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_lala_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\lala.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_lalaVaiSeFude_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\lalaVaiSeFude.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_marioPeido_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\marioPeido.ogg", 1 }}; 
        volume = 1;
        range=150;
    };		
    class MemeGrenade_plantaoGlobo_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\plantaoGlobo.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_putsputs_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\putsputs.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_risadaTerror_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\risadaTerror.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_skibidi_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\skibidi.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_soDoI_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\soDoI.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_temaTristeChaves_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\temaTristeChaves.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_tictokIndia_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\tictokIndia.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_wo_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\wo.ogg", 1 }}; 
        volume = 1;
        range=150;
    };	
    class MemeGrenade_zeDaManga_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\zeDaManga.ogg", 1 }}; 
        volume = 1;
        range=150;
    };
    class MemeGrenade_veSeEnrrugou_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\veSeEnrrugou.ogg", 1 }}; 
        volume = 4;
        range=150;
    };
    class MemeGrenade_salve_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\salve.ogg", 1 }}; 
        volume = 1;
        range=150;
    };
    class MemeGrenade_Pressao_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\Pressao.ogg", 1 }}; 
        volume = 1;
        range=150;
    };
    class MemeGrenade_sexy_SoundShader: baseCharacter_SoundShader 
    {
        samples[]={{ "MocM\Songs\sexy.ogg", 1 }}; 
        volume = 1;
        range=150;
    };
};


class CfgSoundSets
{
    //----------------------------------------------------------Start class CfgSoundSets  Music Menu----------------------------------
    class FMusic_Menu_SoundSet // do not change anything in this
	{
		soundShaders[] = {"FMusic_Menu_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
    //----------------------------------------------------------End class CfgSoundSets  Music Menu----------------------------------

    //-----------------------------------------------------------Start class CfgSoundSets sond Horn ----------------------
    // Em Construcao
	class JP_HornViking_SoundSet
    { 
        soundShaders[] = { "JP_HornViking_SoundShader" }; 
        volumeRandomizer = 0;	
    };
	   class JP_HornVikingII_SoundSet
    { 
        soundShaders[] = { "JP_HornVikingII_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    //-----------------------------------------------------------End class CfgSoundSets sond Horn ----------------------
    
    //----------------------------------------------------------Start class CfgSoundSets  MemeGrenade----------------------------------
    class MemeGrenade_aiPai_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_aiPai_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_atolaODedoNestaPorra_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_atolaODedoNestaPorra_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_bomDiaaa_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_bomDiaaa_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_bomDiaNaFazendinhaPagode_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_bomDiaNaFazendinhaPagode_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_euQueroSerNinja_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_euQueroSerNinja_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_euNaoQuero_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_euNaoQuero_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_grito_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_grito_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_iluminat_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_iluminat_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_lala_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_lala_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_lalaVaiSeFude_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_lalaVaiSeFude_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_marioPeido_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_marioPeido_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_plantaoGlobo_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_plantaoGlobo_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_risadaTerror_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_risadaTerror_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_skibidi_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_skibidi_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_soDoI_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_soDoI_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_temaTristeChaves_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_temaTristeChaves_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_tictokIndia_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_tictokIndia_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_wo_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_wo_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_zeDaManga_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_zeDaManga_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_veSeEnrrugou_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_veSeEnrrugou_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_salve_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_salve_SoundShader" }; 
        volumeRandomizer = 0;	
    };
    class MemeGrenade_Pressao_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_Pressao_SoundShader" }; 
        volumeRandomizer = 0;	
    };
     class MemeGrenade_sexy_SoundSet
    { 
        soundShaders[] = { "MemeGrenade_sexy_SoundShader" }; 
        volumeRandomizer = 0;	
    };
};


//------------------------------------------------ Create Ammo Object --------------------------------
class CfgAmmo
{
	class DefaultAmmo;
    class MemeGrenade_aiPaiAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_aiPai_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_atolaODedoNestaPorraAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_atolaODedoNestaPorra_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_bomDiaaaAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_bomDiaaa_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_bomDiaNaFazendinhaPagodeAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_bomDiaNaFazendinhaPagode_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_euNaoQueroAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_euNaoQuero_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_gritoAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_grito_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_iluminatAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_iluminat_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_lalaAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_lala_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
     class MemeGrenade_lalaVaiSeFudeAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_lalaVaiSeFude_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
     class MemeGrenade_euQueroSerNinjaAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_euQueroSerNinja_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_marioPeidoAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_marioPeido_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_plantaoGloboAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_plantaoGlobo_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_putsputsAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_putsputs_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_risadaTerrorAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_risadaTerror_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_skibidiAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_skibidi_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_soDoIAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_soDoI_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_temaTristeChavesAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_temaTristeChaves_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_tictokIndiaAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_tictokIndia_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_woAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_wo_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_zeDaMangaAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_zeDaManga_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_veSeEnrrugouAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_veSeEnrrugou_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_salveAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_salve_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_PressaoAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_Pressao_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
    class MemeGrenade_sexyAmmo: DefaultAmmo 
    {
		indirectHit = 1;
		indirectHitRange = 5;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] = { "MemeGrenade_sexy_SoundSet" };
		class DamageApplied
		{
			type="FragGrenade";
			class Health { damage=0; };
			class Blood { damage=0; };
			class Shock { damage=0; };
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
};

//------------------------------------------------- Crate Objects ----------------------------------------------
class CfgVehicles
{
	class FlashGrenade;
    class MemeGrenade_aiPai: FlashGrenade
    {
        scope = 2;
        displayName = "aiPai";
        descriptionShort = "Ai Pai Paraaa!!!";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
    class MemeGrenade_atolaODedoNestaPorra: FlashGrenade
    {
        scope = 2;
        displayName = "Mete o Dedo";
        descriptionShort = "Tiringa. mete o dedo nesta porra";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
    class MemeGrenade_bomDiaaa: FlashGrenade
    {
        scope = 2;
        displayName = "Bom dia!";
        descriptionShort = "Grito de bom dia";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
    class MemeGrenade_bomDiaNaFazendinhaPagode: FlashGrenade
    {
        scope = 2;
        displayName = "Bom dia fazendinha";
        descriptionShort = "Bom dia fazendinha versao pagode";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_grito: FlashGrenade
    {
        scope = 2;
        displayName = "Grito terror";
        descriptionShort = "Grito para assustar";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_iluminat: FlashGrenade
    {
        scope = 2;
        displayName = "Musica";
        descriptionShort = "Music suspense ET.";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_lala: FlashGrenade
    {
        scope = 2;
        displayName = "Music lala";
        descriptionShort = "music lalalalala!!!";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_lalaVaiSeFude: FlashGrenade
    {
        scope = 2;
        displayName = "Lalala vai se fu";
        descriptionShort = "Musica com final feliz";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_marioPeido: FlashGrenade
    {
        scope = 2;
        displayName = "Mario Card Music";
        descriptionShort = "Music intro Mario";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
    class MemeGrenade_plantaoGlobo: FlashGrenade
    {
        scope = 2;
        displayName = "Plantao da Globo";
        descriptionShort = "Chamada urgente do plantao da globo";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_putsputs: FlashGrenade
    {
        scope = 2;
        displayName = "Music";
        descriptionShort = "Puts Puts";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_risadaTerror: FlashGrenade
    {
        scope = 2;
        displayName = "Risada Terror";
        descriptionShort = "Risada alta de terror";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
    class MemeGrenade_skibidi: FlashGrenade
    {
        scope = 2;
        displayName = "Music";
        descriptionShort = "Skiniriririr!!!";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_soDoI: FlashGrenade
    {
        scope = 2;
        displayName = "Music";
        descriptionShort = "Music";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_temaTristeChaves: FlashGrenade
    {
        scope = 2;
        displayName = "Musica triste";
        descriptionShort = "Musica triste tema do chaves";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_tictokIndia: FlashGrenade
    {
        scope = 2;
        displayName = "Music";
        descriptionShort = "tictok India";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_wo: FlashGrenade
    {
        scope = 2;
        displayName = "WO";
        descriptionShort = "gritos Wowowowowo";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_zeDaManga: FlashGrenade
    {
        scope = 2;
        displayName = "Ze da manga";
        descriptionShort = "uhummmm ze da manga";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
     class MemeGrenade_veSeEnrrugou: FlashGrenade
    {
        scope = 2;
        displayName = "Gomes300";
        descriptionShort = "Ve se enrrugou!!!";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
    class MemeGrenade_salve: FlashGrenade
    {
        scope = 2;
        displayName = "Salve";
        descriptionShort = "Salve Cleber atalla";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
    class MemeGrenade_Pressao: FlashGrenade
    {
        scope = 2;
        displayName = "Music";
        descriptionShort = "Sinta a pressao nenen!";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };
    class MemeGrenade_sexy: FlashGrenade
     {
        scope = 2;
        displayName = "Music";
        descriptionShort = "sexy music!";
        model = "\dz\weapons\explosives\flashbang.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[]={1,1};
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "dz\weapons\explosives\data\flashbang_co.paa" };
        hiddenSelectionsMaterials[] = { "dz\weapons\explosives\data\flashbang.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20;
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Grenade_unpin
                {
                    soundSet = "Grenade_unpin_SoundSet";
                    id = 201;
                };
                class turnOnRadio_Pin
                {
                    soundSet = "Grenade_pin_SoundSet";
                    id = 1006;
                };
            };
        };
    };

class CfgVehicles
{
	class Box_Base;
    class Inventory_Base;
	class Edible_Base;
	class Bottle_Base;
    //---------------------------------------------------------Pocao1--------------------------------------------------------
	class JP_DrinkMistik: Bottle_Base
    {
        scope=2;
		displayName="Drink Mistik";
		descriptionShort="Can cause itching in the anus";
		model="MOCPackII\test\data\pocao.p3d";
		debug_ItemCategory=6;
		inventorySlot[]=
		{
			"Belt_Left"
		};
		weight=250;
		itemSize[]={2,2};
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		varTemperatureMax=1;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		isMeleeWeapon=1;
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Canteen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Canteen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Canteen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Canteen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Canteen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Canteen_in_B
				{
					soundSet="Canteen_in_B_SoundSet";
					id=202;
				};
				class Canteen_in_C
				{
					soundSet="Canteen_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class Canteen_out_A
				{
					soundSet="Canteen_out_A_SoundSet";
					id=205;
				};
				class Canteen_out_B
				{
					soundSet="Canteen_out_B_SoundSet";
					id=206;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
	};

    //---------------------------------------------------------Pocao2--------------------------------------------------------
    class JP_DrinkMistikII: Bottle_Base
    {
       scope=2;
		displayName="Drink MistikII";
		descriptionShort="Can cause impotence";
		model="MOCPackII\test\data\pocaoII.p3d";
		debug_ItemCategory=6;
		inventorySlot[]=
		{
			"Belt_Left"
		};
		weight=250;
		itemSize[]={2,2};
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		varTemperatureMax=1;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		isMeleeWeapon=1;
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Canteen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Canteen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Canteen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Canteen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Canteen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Canteen_in_B
				{
					soundSet="Canteen_in_B_SoundSet";
					id=202;
				};
				class Canteen_in_C
				{
					soundSet="Canteen_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class Canteen_out_A
				{
					soundSet="Canteen_out_A_SoundSet";
					id=205;
				};
				class Canteen_out_B
				{
					soundSet="Canteen_out_B_SoundSet";
					id=206;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
	};

    //--------------------------------------------------------------Horn Viking---------------------------------------------
    class JP_HornViking: Bottle_Base
    {
        scope=2;
		displayName="Horn Viking";
		descriptionShort="Makes a sound and can attract zombies";
		model="MOCPackII\test\data\Horn.p3d";
		debug_ItemCategory=6;
		inventorySlot[]=
		{
			"Belt_Left"
		};
		weight=250;
		itemSize[]={2,2};
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		varTemperatureMax=1;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		isMeleeWeapon=1;
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Canteen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Canteen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Canteen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Canteen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Canteen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Canteen_in_B
				{
					soundSet="Canteen_in_B_SoundSet";
					id=202;
				};
				class Canteen_in_C
				{
					soundSet="Canteen_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class Canteen_out_A
				{
					soundSet="Canteen_out_A_SoundSet";
					id=205;
				};
				class Canteen_out_B
				{
					soundSet="Canteen_out_B_SoundSet";
					id=206;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
	};

    //---------------------------------------------------------------------------- Body Death in Black Plastic --------------------------------------------------------------------
    class HouseNoDestruct;
	class JP_BodyDeath_Static: HouseNoDestruct
	{
		scope=1;
		model="MOCPackII\test\data\body.p3d";
	};
	//----------------------------------------------------------------------------- Drink Static ----------------------------------------------------------
    class JP_DrinkMistik_Static: HouseNoDestruct   // Para enfeitar a casa da BRUXA
	{
		scope=1;
		model="MOCPackII\test\data\pocao.p3d";
	};
    class JP_DrinkMistikII_Static: HouseNoDestruct  // Para enfeitar a casa da BRUXA
	{
		scope=1;
		model="MOCPackII\test\data\pocaoII.p3d";
	};

	//-----------------------------------------------------------------------------Banner MOC-------------------------------------------------------------------
	class JP_Banner_Moc: HouseNoDestruct
	{
		scope=1;
		model="MOCPackII\test\data\BannerMOC.p3d";
	};

    //------------------------------------------------------------------------------ Meteorite ----------------------------------------------------------------
    
    class SmallStone;
    class JP_MeteoriteMistik: SmallStone
	{
		scope=2;
		displayName="Meteorite Mistik";
		descriptionShort="It is not known where the stones came from but they are valuable";
		model="MOCPackII\test\data\meteorito.p3d";
		weight=100;
		itemSize[]={2,2};	
	};
    
    //--------------------------------------------------------------------------------- Eggplant Supressor  ------------------------------------------------------------------
    
    class ItemBarrel;
	class ItemSuppressor;
    class JP_EggplantSupressor: ItemSuppressor
    {
        scope=2;
		displayName="Eggplant Supressor";
		descriptionShort="It's strange but it can muffle the sound and avoid attracting the attention of zombies";
		model="MOCPackII\test\data\berinjela.p3d";
		rotationFlags=17;
		reversed=0;
		weight=70;
		itemSize[]={1,1};
		itemModelLength=0.176;
		barrelArmor=600;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_east",
			"Military_west",
			"Police",
			"Civilian"
		};
		inventorySlot[]=
		{
			"pistolMuzzle",
            "weaponMuzzleAK",
            "weaponMuzzleM4",
            "suppressorImpro";
            "weaponMuzzleMP5";
            "weaponMuzzleMosin";
            "weaponBayonetSKS";
            "weaponBayonetMosin";
            "weaponBayonet";
            "weaponBayonetAK";
            "weaponBarrelAug"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.89999998;
		recoilModifier[]={0.89999998,0.89999998,0.89999998};
		swayModifier[]={1.3,1.3,1.3};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=2;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\gemtech.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\gemtech.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\gemtech_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\gemtech_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\gemtech_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
   
    //--------------------------------------------------------------------------------- Viking Axe -----------------------------------------------------------------
    class JP_VikingAxe: Inventory_Base
	{
		scope=2;
		displayName="Axe Viking";
		descriptionShort="Resitul for years will resist zombies";
		model="MOCPackII\test\data\VikingAxe.p3d";
		debug_ItemCategory=2;
		build_action_type=10;
		dismantle_action_type=74;
		repairableWithKits[]={4};
		repairCosts[]={18};
		rotationFlags=17;
		weight=100;
		itemSize[]={2,3};
		fragility=0.0099999998;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
		};
		lootCategory="Tools";
		lootTag[]=
		{
			"Work",
			"Forester",
			"Camping"
		};
		itemInfo[]=
		{
			"Axe"
		};
		openItemSpillRange[]={20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=550;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blade\data\hatchet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blade\data\hatchet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blade\data\hatchet_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_2";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_2";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_2";
				range=3.3;
			};
		};
		isMeleeWeapon=1;
		suicideAnim="woodaxe";
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
				class ShoulderR_Hide
				{
					soundset="ShoulderR_Hide_SoundSet";
					id=1210;
				};
				class ShoulderR_Show
				{
					soundset="ShoulderR_Show_SoundSet";
					id=1211;
				};
				class WoodHammer_SoundSet
				{
					soundSet="WoodHammer_SoundSet";
					id=11161;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
			};
		};
	};
   
    //--------------------------------------------------------------------- JP_Bag --------------------------------------------------------------------------
    class Clothing_Base;
	class Clothing;
    class HuntingBag;
    class JP_Bag: HuntingBag
	{
		scope=2;
		displayName="New bag For Survivor";
		descriptionShort="$STR_cfgVehicles_HuntingBag1";
		model="\dz\characters\backpacks\hunting_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
            "Shoulder1",
			"Shoulder2",
            "Pistol",
            "Belt_Left"
		};
		itemsCargoSize[]={9,7};
		weight=400;
		hiddenSelectionsTextures[]=
		{
			"MOCPackII\test\data\BagJhowpix.paa",
			"MOCPackII\test\data\BagJhowpix.paa",
			"MOCPackII\test\data\BagJhowpix.paa"
		};
	};
   
    //----------------------------------------------------------------------------- Seringe Old --------------------------------------------------------
    
	class Epinephrine;
	class JP_SyringeMistik: Epinephrine
	{
		scope=2;
		displayName="Syringe Mistik";
		descriptionShort="Be careful, you don't know what's inside";
		model="MOCPackII\test\data\seringa.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=130;
		stackedUnit="ml";
		quantityBar=1;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\Syringe.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\Syringe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\Syringe_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\Syringe_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\Syringe_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Syringe_out
				{
					soundSet="Syringe_out_SoundSet";
					id=201;
				};
				class Syringe_spear
				{
					soundSet="Syringe_spear_SoundSet";
					id=202;
				};
				class Syringe_splash
				{
					soundSet="Syringe_splash_SoundSet";
					id=203;
				};
			};
		};
	};

    //------------------------------------------------- Start Clothes Moc -------------------------------------------------------------------------------
    // class CfgVehicles

    //---------------------------------------------------------------- Bag --------------------------------------
	class Moc_Bag: HuntingBag
	{
		scope=2;
		displayName="Survivor Bag";
		descriptionShort="New backpack with new spaces";
		attachments[]=
		{
			"pistol",
			"Knife",			
			"Belt_Left",
		};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MocM\data\Moc_Bag_co.paa",
			"MocM\data\Moc_Bag_co.paa",
			"MocM\data\Moc_Bag_co.paa"
		};
		itemsCargoSize[]={8,8};
	};

    //---------------------------------------------- Pants --------------------------------------------
    class PrisonUniformPants; 
    class Moc_Pants: PrisonUniformPants
	{
		scope=2;
		displayName="$STR_CfgVehicles_PrisonUniformPants0";
		descriptionShort="$STR_CfgVehicles_PrisonUniformPants1";
		model="\DZ\characters\pants\prison_pants_g.p3d";
		itemSize[]={3,2};
		itemsCargoSize[]={6,6};
		weight=210;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"MocM\data\Moc_Pants_co.paa",
			"MocM\data\Moc_Pants_co.paa",
			"MocM\data\Moc_Pants_co.paa"
		};
		attachments[]=
		{
			"Knife"
		};
    };

    //--------------------------------------------------- Tshirt ----------------------------------------
    class PrisonUniformJacket;
    class Moc_Tshirt: PrisonUniformJacket
	{
		scope=2;
		displayName="Mercenary Tshirt";
		descriptionShort="Mercenary Survivor Tshirt";
		model="\DZ\characters\tops\prison_top_g.p3d";
		weight=100;
		itemSize[]={3,3};
		itemsCargoSize[]={5,6};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelectionsTextures[]=
		{
			"MocM\data\prison_top_g_co.paa",
			"MocM\data\Moc_Tshirt_co.paa",
			"MocM\data\Moc_Tshirt_co.paa"
		};
    };

    //----------------------------------------- Cap ---------------------------------------------------
    class Switchable_Base;
    class BaseballCap_ColorBase;
	class BaseballCap_Blue;
    class Moc_Cap: BaseballCap_Blue
    {
        scope=2;
        displayName="Mercenary Caps";
		descriptionShort="Mercenary Caps Survivor";
		model="\DZ\characters\headgear\BaseballCap_ground.p3d";
		weight=50;
		itemSize[]={2,1};
		hiddenSelectionsTextures[]=
		{
			"MocM\data\Moc_Cap_co.paa",
			"MocM\data\Moc_Cap_co.paa",
			"MocM\data\Moc_Cap_co.paa"
		};
        itemsCargoSize[]={2,1};

    };

    //----------------------------------------- Gloves---------------------------------------------------
	class MaleHands_Base;
    class FemaleHands_Base;
    class WoolGloves_ColorBase;
    class WoolGloves_White;
    class Moc_Glove: WoolGloves_ColorBase
	{
		scope=2;
		displayName="Mercenary Glove";
		descriptionShort="Mercenary Survivor Glove";
		model="\DZ\characters\gloves\woolgloves_g.p3d";
		color="White";
		hiddenSelectionsTextures[]=
		{
			"MocM\data\Moc_gloves_co.paa",
			"MocM\data\Moc_gloves_co.paa",
			"MocM\data\Moc_gloves_co.paa"
		};
	};


	class AthleticShoes_ColorBase;
	class AthleticShoes_Blue;
	class Moc_Shoes: AthleticShoes_Blue
	{
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"MocM\data\Moc_Shoes_co.paa",
			"MocM\data\Moc_Shoes_co.paa",
			"MocM\data\Moc_Shoes_co.paa"
		};
	};
  };
};
