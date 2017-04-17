//
//  TCLogBaseResultItem.hpp
//  TCLogSpace
//
//  Created by AlexiChen on 2017/4/12.
//  Copyright © 2017年 AlexiChen. All rights reserved.
//

#ifndef TCLogBaseResultItem_hpp
#define TCLogBaseResultItem_hpp

#include <stdio.h>
#include <iostream>
#include <list>


using namespace std;

namespace TCLogSpace
{
    // 日志分析结果级别
    typedef enum {
        ETCLog_OKLog,                                   // 正常结果
        ETCLog_WarningLog,                              // 警告结果，有潜在错误，需要再排查
        ETCLog_ErrorLog,                                // 行为有误错误结果
    } TCLogResultLevel;


    class TCLogBaseResultItem
    {
    protected:
        TCLogResultLevel  mResultLevel;     // 行为结果
    protected:
        string mEventName;                  // 事件名称
        string mEventTime;                  // 时间
        string mLogLineText;                // 日志原文件
        string mParseResult;                // 执行结果
        string mRecommendHandle;            // 推荐处理结果
        
    protected:
        bool isAssembleParse;               // 是否需要组合分析
    protected:
        bool hasAnalysed;
        
    public:
        virtual ~TCLogBaseResultItem();
    public:
        TCLogBaseResultItem(string evname, string logLine, bool assembleParse = false);
    private:
        TCLogBaseResultItem();
        
    public:
        
        virtual void logLineAnalyse();
        
        virtual const string getAnalyseResult() const;
        
        virtual const string getRecommandHandle() const;
        
    
    protected:
        // 分析时间
        virtual string analyseLogTime() const;
        
        // 分析参数
        virtual void analyseLogParam();
        
        // 分析结果
        virtual void analyseResult();
        
        // 如何处理
        virtual void recomandToDo();
        
        
    };
}

#endif /* TCLogBaseResultItem_hpp */
