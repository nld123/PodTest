//
//  QMRZUserInfoModel.m
//  QMRZSDK
//
//  Created by douchuanjiang on 2022/3/24.
//

#import "QMRZUserInfoModel.h"

@implementation QMRZUserInfoModel

- (void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:self.appid forKey:@"appid"];
    [aCoder encodeObject:self.idCard forKey:@"idCard"];
    [aCoder encodeObject:self.phone forKey:@"phone"];
    [aCoder encodeObject:self.sign forKey:@"sign"];
    [aCoder encodeObject:self.timestamp forKey:@"timestamp"];
    [aCoder encodeObject:self.data forKey:@"data"];
    [aCoder encodeObject:self.salt forKey:@"salt"];

}

- (id)initWithCoder:(NSCoder *)aDecoder
{
    self.appid = [aDecoder decodeObjectForKey:@"appid"];
    self.idCard = [aDecoder decodeObjectForKey:@"idCard"];
    self.phone = [aDecoder decodeObjectForKey:@"phone"];
    self.sign = [aDecoder decodeObjectForKey:@"sign"];
    self.timestamp = [aDecoder decodeObjectForKey:@"timestamp"];
    self.data = [aDecoder decodeObjectForKey:@"data"];
    self.salt = [aDecoder decodeObjectForKey:@"salt"];

    return self;
}



@end
