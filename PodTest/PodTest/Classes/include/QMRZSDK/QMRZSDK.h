//
//  QMRZSDK.h
//  QMRZSDK
//
//  Created by douchuanjiang on 2022/3/23.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "QMRZUserInfoModel.h"
#import "QMRZKeyInfoModel.h"
#import "QMRZUserInfoModel.h"
#import "UidtKey.h"
#import "QMRZOpendoorRecordModel.h"
#import "QMRZPasswordModel.h"

typedef void(^RequestBlock)(NSInteger status);
typedef void(^GetKeyListBlock)(NSMutableArray *keyArray);
typedef void(^EmergencyPwdBlock)(NSInteger status,NSString *pwd);
typedef void(^LockSetBlock)(NSInteger status,NSString *message);
typedef void(^ReadLockBlock)(NSInteger status,QMRZKeyInfoModel *model);
typedef void(^ReadPwdBlock)(NSInteger status,NSMutableArray *pwdArray);
typedef void(^ReadMuteBlock)(NSInteger status,BOOL on);
typedef void(^OpendoorRecordBlock)(NSMutableArray *opendoorArray);



@interface QMRZSDK : NSObject

+ (QMRZSDK *)sharedQMRZSDK;


//登录
- (void)registerUser:(QMRZUserInfoModel *)qMRZUserInfoModel requestBlock:(RequestBlock)requestBlock;

//退出登录
- (void)logout;

//开门
- (void)unlock:(NSString *)keyid openmode:(NSInteger )openmode requestBlock:(LockSetBlock)requestBlock;







@end

