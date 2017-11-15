#include "building.h"

#include "building/type.h"

#include "Data/Scenario.h"

int scenario_building_allowed(int building_type)
{
    switch (building_type) {
        case BUILDING_ROAD:
            return Data_Scenario.allowedBuildings.road;
        case BUILDING_DRAGGABLE_RESERVOIR:
        case BUILDING_AQUEDUCT:
        case BUILDING_FOUNTAIN:
            return Data_Scenario.allowedBuildings.aqueduct;
        case BUILDING_WELL:
            return Data_Scenario.allowedBuildings.well;
        case BUILDING_BARBER:
            return Data_Scenario.allowedBuildings.barber;
        case BUILDING_BATHHOUSE:
            return Data_Scenario.allowedBuildings.bathhouse;
        case BUILDING_DOCTOR:
            return Data_Scenario.allowedBuildings.doctor;
        case BUILDING_HOSPITAL:
            return Data_Scenario.allowedBuildings.hospital;
        case BUILDING_MENU_SMALL_TEMPLES:
            return Data_Scenario.allowedBuildings.smallTemples;
        case BUILDING_MENU_LARGE_TEMPLES:
            return Data_Scenario.allowedBuildings.largeTemples;
        case BUILDING_ORACLE:
            return Data_Scenario.allowedBuildings.oracle;
        case BUILDING_SCHOOL:
            return Data_Scenario.allowedBuildings.school;
        case BUILDING_ACADEMY:
            return Data_Scenario.allowedBuildings.academy;
        case BUILDING_LIBRARY:
            return Data_Scenario.allowedBuildings.library;
        case BUILDING_THEATER:
            return Data_Scenario.allowedBuildings.theater;
        case BUILDING_AMPHITHEATER:
            return Data_Scenario.allowedBuildings.amphitheater;
        case BUILDING_COLOSSEUM:
            return Data_Scenario.allowedBuildings.colosseum;
        case BUILDING_HIPPODROME:
            return Data_Scenario.allowedBuildings.hippodrome;
        case BUILDING_GLADIATOR_SCHOOL:
            return Data_Scenario.allowedBuildings.gladiatorSchool;
        case BUILDING_LION_HOUSE:
            return Data_Scenario.allowedBuildings.lionHouse;
        case BUILDING_ACTOR_COLONY:
            return Data_Scenario.allowedBuildings.actorColony;
        case BUILDING_CHARIOT_MAKER:
            return Data_Scenario.allowedBuildings.chariotMaker;
        case BUILDING_FORUM:
            return Data_Scenario.allowedBuildings.forum;
        case BUILDING_SENATE_UPGRADED:
            return Data_Scenario.allowedBuildings.senate;
        case BUILDING_GOVERNORS_HOUSE:
        case BUILDING_GOVERNORS_VILLA:
        case BUILDING_GOVERNORS_PALACE:
            return Data_Scenario.allowedBuildings.governorHome;
        case BUILDING_SMALL_STATUE:
        case BUILDING_MEDIUM_STATUE:
        case BUILDING_LARGE_STATUE:
            return Data_Scenario.allowedBuildings.statues;
        case BUILDING_GARDENS:
            return Data_Scenario.allowedBuildings.gardens;
        case BUILDING_PLAZA:
            return Data_Scenario.allowedBuildings.plaza;
        case BUILDING_ENGINEERS_POST:
            return Data_Scenario.allowedBuildings.engineersPost;
        case BUILDING_MISSION_POST:
            return Data_Scenario.allowedBuildings.missionPost;
        case BUILDING_SHIPYARD:
        case BUILDING_WHARF:
            return Data_Scenario.allowedBuildings.wharf;
        case BUILDING_DOCK:
            return Data_Scenario.allowedBuildings.dock;
        case BUILDING_WALL:
            return Data_Scenario.allowedBuildings.wall;
        case BUILDING_TOWER:
            return Data_Scenario.allowedBuildings.tower;
        case BUILDING_GATEHOUSE:
            return Data_Scenario.allowedBuildings.gatehouse;
        case BUILDING_PREFECTURE:
            return Data_Scenario.allowedBuildings.prefecture;
        case BUILDING_FORT:
            return Data_Scenario.allowedBuildings.fort;
        case BUILDING_MILITARY_ACADEMY:
            return Data_Scenario.allowedBuildings.militaryAcademy;
        case BUILDING_BARRACKS:
            return Data_Scenario.allowedBuildings.barracks;
        case BUILDING_DISTRIBUTION_CENTER_UNUSED:
            return Data_Scenario.allowedBuildings.distributionCenter;
        case BUILDING_MENU_FARMS:
            return Data_Scenario.allowedBuildings.farms;
        case BUILDING_MENU_RAW_MATERIALS:
            return Data_Scenario.allowedBuildings.rawMaterials;
        case BUILDING_MENU_WORKSHOPS:
            return Data_Scenario.allowedBuildings.workshops;
        case BUILDING_MARKET:
            return Data_Scenario.allowedBuildings.market;
        case BUILDING_GRANARY:
            return Data_Scenario.allowedBuildings.granary;
        case BUILDING_WAREHOUSE:
            return Data_Scenario.allowedBuildings.warehouse;
        case BUILDING_LOW_BRIDGE:
        case BUILDING_SHIP_BRIDGE:
            return Data_Scenario.allowedBuildings.bridge;
    }
    return 1;
}

int scenario_building_image_native_hut()
{
    return Data_Scenario.nativeGraphics.hut;
}

int scenario_building_image_native_meeting()
{
    return Data_Scenario.nativeGraphics.meetingCenter;
}

int scenario_building_image_native_crops()
{
    return Data_Scenario.nativeGraphics.crops;
}
