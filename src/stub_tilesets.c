// FRLG tileset stubs - empty tileset data so the build links
#include "global.h"
#include "tilesets.h"

#define STUB_TILESET(name) \
    const struct Tileset gTileset_##name = { \
        .isCompressed = 0, \
        .swapPalettes = 0, \
        .isSecondary = 0, \
        .lightPalettes = 0, \
        .customLightColor = 0, \
        .tiles = NULL, \
        .palettes = NULL, \
        .metatiles = NULL, \
        .metatileAttributes = NULL, \
        .callback = NULL, \
    }

STUB_TILESET(BuildingFrlg);
STUB_TILESET(General_Frlg);
STUB_TILESET(PokemonCenterFrlg);
STUB_TILESET(Lab_Frlg);
STUB_TILESET(Cave_Frlg);
STUB_TILESET(SeafoamIslands);
STUB_TILESET(PalletTown);
STUB_TILESET(ViridianCity);
STUB_TILESET(PewterCity);
STUB_TILESET(CeruleanCity);
STUB_TILESET(VermilionCity);
STUB_TILESET(CeladonCity);
STUB_TILESET(LavenderTown);
STUB_TILESET(FuchsiaCity);
STUB_TILESET(CinnabarIsland);
STUB_TILESET(SaffronCity);
STUB_TILESET(IndigoPlateau);
STUB_TILESET(ViridianForest);
STUB_TILESET(RockTunnel);
STUB_TILESET(DiglettsCave);
STUB_TILESET(MtEmber);
STUB_TILESET(SeviiIslands123);
STUB_TILESET(SeviiIslands45);
STUB_TILESET(SeviiIslands67);
STUB_TILESET(NavelRock_Frlg);
STUB_TILESET(IslandHarbor_Frlg);
STUB_TILESET(BikeShop_Frlg);
STUB_TILESET(CableClub_Frlg);
STUB_TILESET(GenericBuilding1);
STUB_TILESET(GenericBuilding2);
STUB_TILESET(SilphCo);
STUB_TILESET(PokemonMansion);
STUB_TILESET(PowerPlant);
STUB_TILESET(UndergroundPath);
STUB_TILESET(PokemonTower);
STUB_TILESET(SSAnne);
STUB_TILESET(Museum);
STUB_TILESET(SeaCottage);
STUB_TILESET(BurgledHouse);
STUB_TILESET(Condominiums);
STUB_TILESET(DepartmentStore);
STUB_TILESET(GameCorner);
STUB_TILESET(RestaurantHotel);
STUB_TILESET(School);
STUB_TILESET(CeruleanCave);
STUB_TILESET(SafariZoneBuilding);
STUB_TILESET(PokemonLeague);
STUB_TILESET(HallOfFame);
STUB_TILESET(HoennBuilding);
STUB_TILESET(BerryForest);
STUB_TILESET(FanClubDaycare);
STUB_TILESET(TrainerTower);
STUB_TILESET(TanobyRuins);
STUB_TILESET(PewterGym);
STUB_TILESET(CeruleanGym);
STUB_TILESET(VermilionGym);
STUB_TILESET(CeladonGym);
STUB_TILESET(FuchsiaGym);
STUB_TILESET(SaffronGym);
STUB_TILESET(CinnabarGym);
STUB_TILESET(ViridianGym);
STUB_TILESET(Mart);
