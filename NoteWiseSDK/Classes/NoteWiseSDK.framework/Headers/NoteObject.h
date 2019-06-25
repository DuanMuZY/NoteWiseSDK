//
//  NoteObject.h
//  LearningPalm
//
//  Created by 端木 on 2019/1/17.
//  Copyright © 2019 JsoCary. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "CommonDefault.h"

NS_ASSUME_NONNULL_BEGIN

@interface NoteObject : NSObject
@property(nonatomic,copy) NSString *noteid;
@property(nonatomic,copy) NSString *abstracttext;
@property(nonatomic,copy) NSString *appreciatenum;
@property(nonatomic,copy) NSString *attributetagsid;
@property(nonatomic,copy) NSString *commentnum;
@property(nonatomic,copy) NSString *count;
@property(nonatomic,copy) NSString *createtime;
@property(nonatomic,copy) NSString *customtagsid;
@property(nonatomic,copy) NSString *directorypath;
@property(nonatomic,copy) NSString *folderid;
@property(nonatomic,copy) NSString *foldername;
@property(nonatomic,copy) NSString *forwardnum;
@property(nonatomic,copy) NSString *fromis;
@property(nonatomic,copy) NSString *isaudio;
@property(nonatomic,copy) NSString *isdelete;
@property(nonatomic,copy) NSString *isfile;
@property(nonatomic,copy) NSString *islink;
@property(nonatomic,copy) NSString *isnote;
@property(nonatomic,copy) NSString *isopen;
@property(nonatomic,copy) NSString *ispic;
@property(nonatomic,copy) NSString *isplaintext;
@property(nonatomic,copy) NSString *isvideo;
@property(nonatomic,copy) NSString *notetype;
@property(nonatomic,copy) NSString *objectvalue;
@property(nonatomic,copy) NSString *readnum;
@property(nonatomic,copy) NSString *content;

@property(nonatomic,copy) NSString *replayid;
@property(nonatomic,copy) NSString *title;
@property(nonatomic,copy) NSString *updatetime;
@property(nonatomic,copy) NSString *userid;
@property(nonatomic,copy) NSString *username;

@property(nonatomic,copy) NSString *identifier;
@property(nonatomic,copy) NSString *shareurl;
@property(nonatomic,copy) NSString *pathid;

@property(nonatomic,retain) NSMutableArray *imageArray;
@property(nonatomic,retain) NSMutableArray *objectArray;
@property(nonatomic,retain) NSMutableArray *imageAndObjectArray;

@property(nonatomic,assign) BOOL isLocation;//是否是本地数据

@end

NS_ASSUME_NONNULL_END
