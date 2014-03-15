#ifndef __TUNNEL_TEST_LAYER_H__
#define __TUNNEL_TEST_LAYER_H__

#include "base_nodes/CCNode.h"
#include "touch_dispatcher/CCTouchDelegateProtocol.h"
#include "cocos2d.h"
#include "cocos3d.h"
#include "TestLayer.h"

USING_NS_CC;

class TunnelTestLayer :  public TestLayer
{
public:
    TunnelTestLayer();
    virtual ~TunnelTestLayer();
	virtual bool init();

	virtual void update(float dt);

	virtual void draw(void);//render the 3d contents

	CREATE_FUNC(TunnelTestLayer);

	void setUpScene();

    // setup initialize camera
    void setUpCamera();
    //setup initialize light
    void setUpLight();

    virtual void touchEvent(cocos3d::TouchEvent evt, float x, float y, unsigned int contactIndex);
	   
    void menuCallback(CCObject * pSender);

    CCLayer* createUILayer();

protected:
	bool _touched;
	int _touchX;
	int _touchY;
};
#endif 