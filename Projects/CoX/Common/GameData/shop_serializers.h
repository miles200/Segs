#pragma once
#include <stdint.h>
#include <vector>

class BinStore;
class QString;

typedef std::vector<struct ShopItemInfo_Data> AllShopItems_Data;
typedef std::vector<struct Shop_Data> AllShops_Data;

static constexpr uint32_t shoplist_i0_requiredCrc=0x5418912E;
bool loadFrom(BinStore *s,AllShops_Data &target);
void saveTo(const AllShops_Data &target,const QString &baseName,bool text_format=false);

static constexpr uint32_t shopitems_i0_requiredCrc=0xAE135EB6;
bool loadFrom(BinStore *s,AllShopItems_Data *target);
void saveTo(const AllShopItems_Data &target,const QString &baseName,bool text_format=false);

static constexpr uint32_t shopdepts_i0_requiredCrc=0xCB0532EC;
bool loadFrom(BinStore *s, struct AllShopDepts_Data *target);
void saveTo(const AllShopDepts_Data &target,const QString &baseName,bool text_format=false);
