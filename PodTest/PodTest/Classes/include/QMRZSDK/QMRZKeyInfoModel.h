//
//  QMRZKeyInfoModel.h
//  QMRZSDK
//
//  Created by 窦川江 on 2022/5/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QMRZKeyInfoModel : NSObject

@property (nonatomic, strong) NSString *SoftVersion;//锁软件版本号
@property (nonatomic, strong) NSString *power;//当前电量
@property (nonatomic, strong) NSString *NbStat;//NB网络状态
@property (nonatomic, strong) NSString *NbSignal;//NB信号强度
@property (nonatomic, strong) NSString *NbIMEI;//NB的IMEI号
@property (nonatomic, strong) NSString *NbIMSI;//NB卡IMSI号
@property (nonatomic, strong) NSString *AppUserCount;//APP用户数量
@property (nonatomic, strong) NSString *BleKeyCount;//蓝牙钥匙数量
@property (nonatomic, strong) NSString *RemainCount;//剩余可添加用户数量

@property (nonatomic, strong) NSString *NotUploadCount;//未上传开锁记录数量
@property (nonatomic, strong) NSString *PwdCount;//已设置开门密码数量
@property (nonatomic, strong) NSString *FingerprintCount;//已设置开门指纹数量



@end

NS_ASSUME_NONNULL_END
