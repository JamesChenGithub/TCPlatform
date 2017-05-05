//
//  TCBaseLogReader.cpp
//  TCPlatform
//
//  Created by AlexiChen on 2017/4/12.
//  Copyright © 2017年 AlexiChen. All rights reserved.
//

#include "TCBaseLogReader.hpp"

#include "tinyxml2.h"

using namespace tinyxml2;

namespace TCLogSpace
{
    
    TCBaseLogReader::TCBaseLogReader()
    {
        
    }
    
    TCBaseLogReader::~TCBaseLogReader()
    {
        
    }
    

    void loadConfigFromXmlFile(std::function<void(bool, string)> callback)
    {
        
        XMLDocument doc;
        doc.LoadFile("TCLogConfig.xml");
        
        int errid = doc.ErrorID();
        if ( errid != XML_SUCCESS)
        {
            if (callback)
            {
                callback(errid, "xml文件配置出错");
            }
            return;
        }
        else
        {
//            XMLElement *configList = doc.RootElement();
//                    XMLElement *config = configList->FirstChildElement();
//                    while (surface)
//                    {
//                        XMLElement *surfaceChild=surface->FirstChildElement();
//                        const char* content;
//                        const XMLAttribute *attributeOfSurface = surface->FirstAttribute();
//                        cout<< attributeOfSurface->Name() << ":" << attributeOfSurface->Value() << endl;
//                        while(surfaceChild)
//                        {
//                            content=surfaceChild->GetText();
//                            surfaceChild=surfaceChild->NextSiblingElement();
//                            cout<<content<<endl;
//                        }
//                        surface=surface->NextSiblingElement();
//                    }
        }
        

        

    }
    
}
