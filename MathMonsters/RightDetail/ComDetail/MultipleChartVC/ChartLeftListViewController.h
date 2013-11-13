//
//  ViewController.h
//  ExpansionTableView
//
//  Created by JianYe on 13-2-18.
//  Copyright (c) 2013年 JianYe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ChartLeftListViewController.h"

@protocol ChartLeftListDelegate <NSObject>
@optional
-(void)modelChanged:(NSString *)driverId;
@end

@interface ChartLeftListViewController : UIViewController

@property (assign)BOOL isOpen;
@property ChartType type;
@property (nonatomic,retain) id<ChartLeftListDelegate> delegate;
@property (nonatomic,retain) id transData;
@property (nonatomic,retain) NSArray *sectionKeys;
@property (nonatomic,retain) NSDictionary *sectionDic;
@property (nonatomic,retain) NSIndexPath *selectIndex;
@property (nonatomic,retain) UITableView *expansionTableView;

@end
