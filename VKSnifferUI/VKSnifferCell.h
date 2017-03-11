//
//  VKSnifferCell.h
//  VKSnifferDemo
//
//  Created by Awhisper on 2017/3/11.
//  Copyright © 2017年 baidu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VKSnifferResult+UI.h"

#define VKSnifferCellHeight 100

@interface VKSnifferCell : UITableViewCell

- (void)setSnifferResult:(VKSnifferResult *)result;

@end
