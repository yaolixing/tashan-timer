
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <inttypes.h>
#include <locale.h>
#include <libxml/parser.h>
#include <libxml/tree.h>
#include <unistd.h> 
#include <fcntl.h>
#include <FL/fl_ask.H>
#include <sys/types.h>
#include "../tsktimer/TskTimer.h"
#include "../tsktimer/TskTimerMgr.h"

#include<unistd.h>
#include<dirent.h>
#include<string.h>
#include<string>

bool parseTsksNode(xmlDocPtr doc, xmlNodePtr tsksNd)
{
    xmlNodePtr cur=0,pNode,pTsk;
    xmlChar* key;
    for (pTsk = tsksNd->xmlChildrenNode;pTsk;pTsk=pTsk->next)
	{
		if (xmlStrcmp(pTsk->name, (const xmlChar *)"Task")) continue;
        cur = pTsk->xmlChildrenNode;

        for(cur = pTsk->xmlChildrenNode;cur;cur=cur->next)
        {
            if (!xmlStrcmp(cur->name, (const xmlChar *)"Id"))
            {

            }
            else if (!xmlStrcmp(cur->name, (const xmlChar *)"State"))
            {
                ;
            }
            else if (!xmlStrcmp(cur->name, (const xmlChar *)"Name"))
            {
                key = xmlNodeListGetString(doc, cur->xmlChildrenNode, 1);
				if (key)
				{
                    printf("%s\n", (const char*)key);
					xmlFree(key);
				}
            }
            else if (!xmlStrcmp(cur->name, (const xmlChar *)"Tasks"))
            {
                parseTsksNode(doc, cur);
            }
        }//for2
	}//for1
    return true;
}

bool loadTskXml(const char* resFile)
{
	xmlDocPtr doc=0;   //定义解析文档指针
	xmlNodePtr cur=0,root;  //定义结点指针(你需要它为了在各个结点间移动)
	bool ret = true;

	if(access(resFile,0)==-1)
	{
		return false;
	}
	xmlKeepBlanksDefault(0);
	xmlIndentTreeOutput = 1 ;// indent .with \n

	doc = xmlReadFile(resFile, "UTF-8", XML_PARSE_NOBLANKS | XML_PARSE_NODICT);
	if (doc == NULL )
	{
        fl_alert("%s not parsed successfully.", resFile);
		return 0;
	}    
	root = xmlDocGetRootElement(doc);  //确定文档根元素
    xmlNodePtr tsksNd = root;
    parseTsksNode(doc, tsksNd);
    
	xmlFreeDoc(doc);
	xmlCleanupParser();     
    return ret;
}//loadTskXml

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    #if 0
    enum e{
        E_ONE=(((unsigned int)0x1)<<1),
        E_TWO,
          };
    wchar_t wc;
    char c; 
    printf("wchar:%ld, char: %ld\n",sizeof(wc), sizeof(c));

 
    CTskTimerMgr ttm;
    ttm.LoadTskXml("../task.xml");
    #endif
 char buff[1024];
 memset(buff,0,sizeof(buff));
 int n = readlink("/proc/self/exe",buff,1023);
 if(n<0)
 {
  return -1;
 }
std::string path = buff;
 int nLen = path.rfind('/')+1;
 path.erase(nLen,path.length() - nLen);
printf("%s\n", path.c_str());
    return 0;
}

