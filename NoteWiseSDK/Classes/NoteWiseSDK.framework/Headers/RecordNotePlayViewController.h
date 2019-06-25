//
//  RecordNotePlayViewController.h
//  LearningPalm
//
//  Created by jsocary on 2019/1/14.
//  Copyright © 2019 JsoCary. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NoteModel.h"
//#import "CommonDefault.h"
#import "CTMediator+TransmitCenter.h"

@interface RecordNotePlayViewController : UIViewController

@property(nonatomic,retain) NoteModel *noteModel;
@property(nonatomic,retain)NSDictionary* inforDic;
@property(nonatomic,assign)BOOL isXXT;
@property(nonatomic,assign)BOOL isMine;//是否是本人笔记

@end

