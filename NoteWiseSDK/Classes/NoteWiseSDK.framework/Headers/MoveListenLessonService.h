//
//  MoveListenLessonService.h
//  LearningPalm
//
//  Created by jsocary on 2019/6/5.
//  Copyright © 2019 JsoCary. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



@interface MoveListenLessonService : NSObject

+ (instancetype)sharedInstance;


/*
 SDK配置文件
 */
- (void)configureService;


/*
 进入移动听评课笔记编辑界面
 vc：当前界面的ViewController
 userid：用户ID
 userName：用户名称
 classid：课程ID
 fail：进入界面失败
 */
- (void)enterListenLessonViewController:(UIViewController *)vc userId:(NSString *)userid userName:(NSString *)userName classId:(NSString *)classid fail:(void (^)(NSString *errorStr))fail;


/*
 获取笔记详情
 userid：用户ID
 classid：课程ID
 success：获取成功
 fail：获取失败
 */
- (void)getListenLessonNoteWithUserId:(NSString *)userid classId:(NSString *)classid success:(void (^)(NSDictionary *json))success fail:(void (^)(NSString *errorStr))fail;


/*
 停止移动听评课笔记编辑并且保存
 classid：课程ID
 fail：保存失败
 */
- (void)stopListenLessonNoteEditWithClassId:(NSString *)classid fail:(void (^)(NSString *errorStr))fail;


/*
 进入移动听评课笔记详情播放界面
 vc：当前界面的ViewController
 userid：用户ID
 classid：课程ID
 fail：进入界面失败
 */
- (void)enterListenLessonDetailViewController:(UIViewController *)vc userId:(NSString *)userid classId:(NSString *)classid fail:(void (^)(NSString *errorStr))fail;


/*
 检查笔记是否完成提交（包括音频合成转码，资源附件的上传）
 userid：用户ID
 classid：课程ID
 result：检查结果
 */
- (void)checkListenLessonNoteSaveWithUserId:(NSString *)userid classId:(NSString *)classid result:(void (^)(NSString *resultStr))result;


/*
 根据action参数调用界面方法
 jsonDic：json数据
 */
- (void)enterListenLessonDetail:(NSDictionary *)jsonDic;


@end

