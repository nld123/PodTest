//
//  UidtKey.h
//  QMRZSDK
//
//  Created by 窦川江 on 2022/6/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UidtKey : NSObject

@property (nonatomic, strong) NSString *keyid;
@property (nonatomic, strong) NSString *lockid;
@property (nonatomic, strong) NSString *lockname;
@property (nonatomic, strong) NSString *authaccount;
@property (nonatomic, strong) NSString *authtime;
@property (nonatomic, strong) NSString *startdate;
@property (nonatomic, strong) NSString *expireddate;
@property (nonatomic, strong) NSString *keyholder;
@property (nonatomic, strong) NSString *detailaddr;

@end

NS_ASSUME_NONNULL_END
