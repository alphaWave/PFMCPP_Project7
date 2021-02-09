#include "HelpfulItem.h"

#include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"

void HelpfulItem::use(Character* character)
{
    useHelpfulItem(character, this);   
}
