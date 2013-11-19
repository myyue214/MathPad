//
//  ViewController.h
//  Statements
//
//  Created by Moncter8 on 13-5-30.
//  Copyright (c) 2013年 Moncter8. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PieChartView.h"
@interface PieViewController : UIViewController<PieChartDelegate>

@property (nonatomic,retain) NSDictionary *valueIncomeDic;
@property (nonatomic,strong) NSMutableArray *valueArray;
@property (nonatomic,retain) NSArray *defaultColorArray;
@property (nonatomic,strong) NSMutableArray *colorArray;
@property (nonatomic,strong) PieChartView *pieChartView;
@property (nonatomic,strong) UIView *pieContainer;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil data:(NSDictionary *)arr;

@end
