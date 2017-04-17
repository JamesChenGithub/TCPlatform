//
//  TCLogBaseResultItem.cpp
//  TCLogSpace
//
//  Created by AlexiChen on 2017/4/12.
//  Copyright © 2017年 AlexiChen. All rights reserved.
//

#include "TCLogBaseResultItem.hpp"

namespace TCLogSpace {
    
    
    
    TCLogBaseResultItem::~TCLogBaseResultItem()
    {
        cout << __func__;
        mEventName = "";
        mEventTime = "";                  // 事件名称
        mLogLineText = "";                  // 时间
        mParseResult = "";                // 日志原文件
        mRecommendHandle = "";                // 执行结果
    }
    
    TCLogBaseResultItem::TCLogBaseResultItem(string evname, string logLine, bool assembleParse)
    {
        mEventName = evname;
        mLogLineText = logLine;
        isAssembleParse = assembleParse;
    }
    
    TCLogBaseResultItem::TCLogBaseResultItem()
    {
        mEventName = "";
        mEventTime = "";                  // 事件名称
        mLogLineText = "";                  // 时间
        mParseResult = "";                // 日志原文件
        mRecommendHandle = "";                // 执行结果
    }
    
    void TCLogBaseResultItem::logLineAnalyse()
    {
        if (hasAnalysed)
        {
            return;
        }
        
        // 分析时间
        analyseLogTime();
        
        // 分析参数
        analyseLogParam();
        
        // 是否是孤立事件
        if (!isAssembleParse)
        {
            analyseResult();
        }
        
        // 推荐处理
        recomandToDo();
        
        // 分析完毕
        hasAnalysed = true;
    }
    
    const string TCLogBaseResultItem::getAnalyseResult() const
    {
        return mParseResult;
    }
    
    const string TCLogBaseResultItem::getRecommandHandle() const
    {
        return mRecommendHandle;
    }
    
    string TCLogBaseResultItem::analyseLogTime() const
    {
        return mEventTime;
    }
    
    void TCLogBaseResultItem::analyseLogParam()
    {
        
    }
    
    void TCLogBaseResultItem::analyseResult()
    {
        
    }
    
    void TCLogBaseResultItem::recomandToDo()
    {
        
    }
    
}
