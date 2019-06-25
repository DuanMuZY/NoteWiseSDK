//
//  ComonNoteInforViewController.h
//  LearningPalm
//
//  Created by 端木 on 2019/1/3.
//  Copyright © 2019 JsoCary. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <WebKit/WebKit.h>

#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMailComposeViewController.h>

#import "NoteObject.h"
//#import <UMShare/UMShare.h>
//// U-Share分享面板SDK，未添加分享面板SDK可将此行去掉
//#import <UShareUI/UShareUI.h>

#import "CTMediator+TransmitCenter.h"

NS_ASSUME_NONNULL_BEGIN

@interface ComonNoteInforViewController : UIViewController
<UIAlertViewDelegate,UITextViewDelegate,WKNavigationDelegate,WKUIDelegate,MFMailComposeViewControllerDelegate,WKScriptMessageHandler>
{
    UIView* footView;
    
    UITextView* discussTextView;
    UIButton* zanButton;
    UIButton* shareButton;
    UIButton* finishButton;
    UIButton* addButton;
    UIButton* favButton;//收藏按钮
    UILabel* numLabel;
     int keyHeight;
}
@property (retain, nonatomic) UILabel *myTitleLabel;
@property (retain, nonatomic) UILabel *myNameLabel;
@property (retain, nonatomic) UILabel *myTimeLabel;
@property (retain, nonatomic) UILabel *myReadLabel;

@property(nonatomic,retain)UIImageView* myTopImageView;
//@property (weak, nonatomic) IBOutlet UITextView *myTextView;

@property (retain, nonatomic)  WKWebView *myWebView;
@property (retain, nonatomic)  CALayer *progressLayer;

@property(nonatomic,assign)BOOL isXXT;

@property(nonatomic,retain)NSDictionary* inforDic;

@property(nonatomic,copy)NSString* noteid;//笔记id


@property(nonatomic,retain)NoteObject* inforModel;//

@property(nonatomic,assign)BOOL isMine;//是否是本人笔记

- (void)gotoEditViewControl;
- (void)deleteNote;

@end

NS_ASSUME_NONNULL_END
