//
//  S25ShowVideo.h
//  GreTest
//
//  Created by lyy on 13-6-24.
//
//

#ifndef __GreTest__S25ShowVideo__
#define __GreTest__S25ShowVideo__

#include "cocos2d.h"
#include <string.h>
#include "cocos-ext.h"

#include "S2ZiBu.h"

using namespace cocos2d;
using namespace std;
class SPWebView;


class S25ShowVideo : public S2ZiBu, public CCScrollViewDelegate
{
public:
    static CCScene* scene();
    virtual bool initInfo2();
    virtual bool setUpSubClass2();
    CREATE_FUNC(S25ShowVideo);
    
private:
    CCDictionary* plistDic;
//    CCSprite * showTuWenPicture;
    
    //networking downloding
    virtual void DownLoadFinish();
    virtual void UpDate();
    virtual void refreshDownLoadingData(bool isCompleted);
    //networking downloding
    
    float scrollMaxSizeX;
    float scrollMaxSizeY;
    map<string, string> showPicMap;
    map<string, string> showBigPicMap;
    map<string, string> showStrUrlMap;
    void S15DetailCallback(CCObject * pSender);
    float countOffSet;
    float OffSetY;
    CCScrollView *m_pScrollView;
    
    virtual void scrollViewDidScroll(CCScrollView* view);
    virtual void scrollViewDidZoom(CCScrollView* view) {};
    
    void S31Delay(float dt);
    bool isMenuLock;
    float screenWidth;
    
    
  
};
#endif /* defined(__GreTest__S25ShowVideo__) */
