//
//  QMRZUserInfoModel.h
//  QMRZSDK
//
//  Created by douchuanjiang on 2022/3/24.
//

#import <Foundation/Foundation.h>

@interface QMRZUserInfoModel : NSObject<NSCoding>

@property (nonatomic, strong) NSString *appid;
@property (nonatomic, strong) NSString *idCard;
@property (nonatomic, strong) NSString *phone;
@property (nonatomic, strong) NSString *sign;
@property (nonatomic, strong) NSString *timestamp;
@property (nonatomic, strong) NSString *data;
@property (nonatomic, strong) NSString *salt;



@end

