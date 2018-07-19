//
//  YSAvatarModel.h
//  YSStaticTableViewControllerDemo
//
//  Created by MOLBASE on 2018/7/19.
//  Copyright © 2018年 YangShen. All rights reserved.
//

#import "YSStaticCellModel.h"

@interface YSAvatarModel : YSStaticCellModel

// =============== 自定义cell的数据放在这里 =============== //
@property (nonatomic, strong) UIImage *avatarImage;
@property (nonatomic, strong) UIImage *codeImage;
@property (nonatomic, copy)   NSString *userName;
@property (nonatomic, copy)   NSString *userID;

@end
