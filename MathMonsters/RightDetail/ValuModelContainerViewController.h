//
//  ValuModelContainerViewController.h
//  MathMonsters
//
//  Created by Xcode on 13-9-26.
//  Copyright (c) 2013年 Xcode. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ValuModelContainerViewController : UIViewController<UIScrollViewDelegate>

@property MarketType marketType;

- (id)initWithType:(MarketType)type;

@end
