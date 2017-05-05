//
//  TCBaseLogEvent.hpp
//  TCPlatform
//
//  Created by AlexiChen on 2017/4/12.
//  Copyright © 2017年 AlexiChen. All rights reserved.
//

#ifndef TCBaseLogEvent_hpp
#define TCBaseLogEvent_hpp

#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

namespace TCLogSpace
{
    
    class TCBaseLogEvent
    {
    protected:
        // xml 配置文件
        string          mEventName;             // 事件名
        bool            isAssembleParse;        // 是否组合的去分析
        list<string>    mAssociatedEvent;       // 关联的事件
        list<string>    mEventKeyWords;         // 事件日志关键字
        list<string>    mFilterKeyWords;        // 需要过滤掉的关键字
        
    public:
        virtual ~TCBaseLogEvent();
        
    public:
        TCBaseLogEvent();
        
        // 初始化
        void setEventInfo(string en, bool isap, list<string> assevent, list<string> ekw, list<string> mfw);
        
        
        // 解析line
        virtual bool needAnaylseThisLine(string logLine);

        
    protected:
        
        
        
        
    };
}

#endif /* TCBaseLogEvent_hpp */
