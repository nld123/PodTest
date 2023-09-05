//
//  QMRZOpendoorRecordModel.h
//  QMRZSDK
//
//  Created by 窦川江 on 2022/4/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QMRZOpendoorRecordModel : NSObject<NSCoding>

@property (nonatomic, strong) NSString *lockid;//锁id
@property (nonatomic, assign) NSInteger openMode;//开门方式：1APP离线开门 ，2密码开门，3APP在线开门
@property (nonatomic, strong) NSString *openTime;//开门时间
@property (nonatomic, strong) NSString *power;//锁电量
@property (nonatomic, strong) NSString *userId;//用户手机号


@end

NS_ASSUME_NONNULL_END
