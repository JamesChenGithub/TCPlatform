//
//  main.cpp
//  Test
//
//  Created by AlexiChen on 2017/4/13.
//  Copyright © 2017年 AlexiChen. All rights reserved.
//

#include <iostream>

#include "TCLogHeaders.h"

using namespace tinyxml2;

void example2()
{
    XMLDocument doc;
    doc.LoadFile("test.xml");
    XMLElement *scene=doc.RootElement();
    XMLElement *surface=scene->FirstChildElement("TCLogConfig");
    while (surface)
    {
        XMLElement *surfaceChild=surface->FirstChildElement();
        const char* content;
        const XMLAttribute *attributeOfSurface = surface->FirstAttribute();
        cout<< attributeOfSurface->Name() << ":" << attributeOfSurface->Value() << endl;
        while(surfaceChild)
        {
            content=surfaceChild->GetText();
            surfaceChild=surfaceChild->NextSiblingElement();
            cout<<content<<endl;
        }
        surface=surface->NextSiblingElement();
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
//    XMLDocument *xmldoc = new XMLDocument();
//    xmldoc->LoadFile("TCLogConfig.xml");
//    
//    cout << xmldoc->GetErrorStr1();
//    
//    //  TCLogConfigList
//   XMLElement *configList = xmldoc->RootElement();
//    cout << configList->Name();
//    XMLElement *config = configList->FirstChildElement("TCLogConfig");
//    while (config)
//    {
//        XMLElement *child = config->FirstChildElement();
//        const char *content;
//        const XMLAttribute *childAtt = config->FirstAttribute();
//        
//        cout << childAtt->Name() << " : " << child->Value();
//        
//        config=config->NextSiblingElement();
//    }
//    
//    
//    
//    
//    
//    delete xmldoc;
//    xmldoc = NULL;
    
    example2();
    std::cout << "Hello, World!\n";
    return 0;
}
