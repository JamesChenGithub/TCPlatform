//
//  TCBaseLogReader.hpp
//  TCPlatform
//
//  Created by AlexiChen on 2017/4/12.
//  Copyright © 2017年 AlexiChen. All rights reserved.
//

#ifndef TCBaseLogReader_hpp
#define TCBaseLogReader_hpp

#include <stdio.h>
#include <iostream>
#include <map>


using namespace std;

namespace TCLogSpace
{
    template<class T>
    class TCBaseLogReader
    {
    private:
        map<string, shared_ptr<T>>     mEventList;         // 待支持事件的解析列表
        
        
        
        
    };
}

#endif /* TCBaseLogReader_hpp */
