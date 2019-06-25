//
//  NoteModel.h
//  LearningPalm
//
//  Created by jsocary on 2019/1/14.
//  Copyright © 2019 JsoCary. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "CommonDefault.h"

@interface NoteModel : NSObject

@property(nonatomic,copy) NSString *abstracttext;
@property(nonatomic,copy) NSString *content;
@property(nonatomic,copy) NSString *createtime;
@property(nonatomic,copy) NSString *objectvalue;
@property(nonatomic,copy) NSString *title;
@property(nonatomic,copy) NSString *updatetime;
@property(nonatomic,copy) NSString *userid;
@property(nonatomic,copy) NSString *username;
@property(nonatomic,copy) NSString *noteid;
@property(nonatomic,copy) NSString *readnum;
@property(nonatomic,copy) NSString *state;
@property(nonatomic,copy) NSString *resources;
@property(nonatomic,copy) NSString *notetype;
@property(nonatomic,copy) NSString *isplaintext;
@property(nonatomic,copy) NSString *isvideo;
@property(nonatomic,copy) NSString *isaudio;
@property(nonatomic,copy) NSString *isfile;
@property(nonatomic,copy) NSString *ispic;
@property(nonatomic,copy) NSString *islink;
@property(nonatomic,copy) NSString *isnote;
@property(nonatomic,copy) NSString *gps;
@property(nonatomic,copy) NSString *geographyid;
@property(nonatomic,copy) NSString *iscompleteformat;
@property(nonatomic,copy) NSString *identifier;
@property(nonatomic,retain) NSArray *resourceArr;
@property(nonatomic,copy) NSString *pathid;

@end


@interface UploadResourceModel : NSObject

@property(nonatomic,copy) NSString *fileName;
@property(nonatomic,copy) NSString *fileUrl;

@end

