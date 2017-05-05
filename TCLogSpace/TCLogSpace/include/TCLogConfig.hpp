//
//  TCLogConfig.hpp
//  TCLogSpace
//
//  Created by AlexiChen on 2017/4/25.
//  Copyright © 2017年 AlexiChen. All rights reserved.
//

#ifndef TCLogConfig_hpp
#define TCLogConfig_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <list>

#include "TCBaseLogEvent.hpp"

using namespace std;

namespace TCLogSpace
{

    class TCLogConfig
    {
    protected:
        string                                  mPlatform;              // 平台
        string                                  mSDKType;               // SDK版本
        list<shared_ptr<TCBaseLogEvent>>        mEventList;             //
    };
}

#endif /* TCLogConfig_hpp */
