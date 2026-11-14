#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(UnlistedExplorerMenu, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        auto button = CCMenuItemSpriteExtra::create(
            CCSprite::createWithSpriteFrameName("GJ_likeBtn_001.png"),
            this,
            menu_selector(UnlistedExplorerMenu::onOpenExplorer)
        );

        auto menu = this->getChildByID("bottom-menu");
        if (menu && button) {
            menu->addChild(button);
            button->setID("unlisted-explorer-button"_spr);
            menu->updateLayout();
        }

        return true;
    }

    void onOpenExplorer(CCObject*) {
        FLAlertLayer::create(
            "Unlisted Explorer",
            "This is the starter version. Creator search and profile "
            "comment-button features have not been implemented yet. "
            "Only publicly available server data can be displayed.",
            "OK"
        )->show();
    }
};
