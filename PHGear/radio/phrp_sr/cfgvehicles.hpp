class Item_PHRP_SR_RADIO: Item_TFAR_anprc152 {
    scope = PUBLIC;
    scopeCurator = PUBLIC;
    displayName="[PHRP] AT-SRT-5000";
    author = "MisfitMaid";
    vehicleClass = "Items";
    class TransportItems {
        MACRO_ADDITEM(PHRP_SR_RADIO,1);
    };
    #include "\z\tfar\addons\static_radios\edenAttributes.hpp"
};
