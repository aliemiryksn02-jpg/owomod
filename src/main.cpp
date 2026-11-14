#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
public:
    bool init() {
        if (!MenuLayer::init()) return false;
        
        auto winSize = CCDirector::get()->getWinSize();
        auto label = CCLabelBMFont::create("owo", "bigFont.fnt");
        label->setPosition(winSize.width / 2, winSize.height / 2);
        label->setScale(1.5f);
        label->setZOrder(1000);
        this->addChild(label);
        
        return true;
    }
};
