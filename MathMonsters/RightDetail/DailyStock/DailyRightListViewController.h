//
//  DailyRightListViewController.h
//  MathMonsters
//
//  Created by Xcode on 13-11-18.
//  Copyright (c) 2013年 Xcode. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DailyRightListViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>

@property (nonatomic,retain) NSDictionary *valueIncomeDic;
@property (nonatomic,retain) NSArray *valueArr;
@property (nonatomic,retain) id comInfo;
@property (nonatomic,retain) id driverIds;
@property (nonatomic,retain) id jsonForChart;

@property (nonatomic,retain) UITableView *dailyTable;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil data:(NSDictionary *)data driverIds:(NSArray *)ids;

@end