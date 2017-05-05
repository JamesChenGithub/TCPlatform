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
#include <list>

#include "TCLogConfig.hpp"
using namespace std;

namespace TCLogSpace
{
    // 1. 先读取配置列表；
    // 2. 分析日志，然后找到对应的平台信息配置
    // 3. 使用对应的平台信息去分析日志
    
    
    class TCBaseLogReader
    {
        
    protected:
        static TCBaseLogReader *kSharedInstance;
    private:
        list<unique_ptr<TCLogConfig>>     mEventList;         // 平台:待支持事件的解析列表
        
        
    protected:
        TCBaseLogReader();
        ~TCBaseLogReader();
    public:
        static TCBaseLogReader *sharedInstance()
        {
            if (kSharedInstance == nullptr)
            {
                kSharedInstance = new TCBaseLogReader;
            }
            
            return kSharedInstance;
        }
        
    public:
        void loadConfigFromXmlFile(std::function<void(bool, string)> callback);
        
        
    };
}

#endif /* TCBaseLogReader_hpp */
