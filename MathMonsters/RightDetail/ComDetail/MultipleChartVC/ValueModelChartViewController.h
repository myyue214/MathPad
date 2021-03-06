//
//  ValueModelChartViewController.h
//  MathMonsters
//
//  Created by Xcode on 13-11-11.
//  Copyright (c) 2013年 Xcode. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <math.h>
#import "CorePlot-CocoaTouch.h"
#import "ChartLeftListViewController.h"
#import "ValuationModelContainerViewController.h"
#import "ChartLeftListDelegate.h"
#import "ValueModelChartDelegate.h"


@class CQMFloatingController;
@class DiscountRateViewController;

//数据点个数
#define NUM 10

//绘图空间与绘图view底部距离
#define GRAPAHBOTTOMPAD 0.0f
//绘图空间与绘图view顶部的距离
#define GRAPAHTOPPAD 0.0f
//绘图view与self.view顶部距离
#define HOSTVIEWTOPPAD 0.0f
//绘图view与self.view底部距离
#define HOSTVIEWBOTTOMPAD 0.0f


#define FINGERCHANGEDISTANCE 100.0

#define DrawXYAxis [DrawChartTool drawXYAxisIn:self.graph toPlot:self.plotSpace withXRANGEBEGIN:XRANGEBEGIN XRANGELENGTH:XRANGELENGTH YRANGEBEGIN:YRANGEBEGIN YRANGELENGTH:YRANGELENGTH XINTERVALLENGTH:XINTERVALLENGTH XORTHOGONALCOORDINATE:XORTHOGONALCOORDINATE XTICKSPERINTERVAL:XTICKSPERINTERVAL YINTERVALLENGTH:YINTERVALLENGTH YORTHOGONALCOORDINATE:YORTHOGONALCOORDINATE YTICKSPERINTERVAL:YTICKSPERINTERVAL to:self isY:YES isX:YES type:DragabelModel]


@interface ValueModelChartViewController : UIViewController<CPTScatterPlotDataSource,CPTScatterPlotDelegate,CPTBarPlotDataSource,CPTBarPlotDelegate,UIWebViewDelegate,CPTAxisDelegate,ValuationModelContainerDelegate,ChartLeftListDelegate>{
    //x轴起点
    float XRANGEBEGIN;
    //x轴在屏幕可视范围内的范围
    float XRANGELENGTH;
    //y轴起点
    float YRANGEBEGIN;
    //y轴在屏幕可视范围内的范围
    float YRANGELENGTH;
    
    //x轴屏幕范围内大坐标间距
    float XINTERVALLENGTH;
    //x轴坐标的原点（x轴在y轴上的坐标）
    float XORTHOGONALCOORDINATE;
    //x轴每两个大坐标间小坐标个数
    float XTICKSPERINTERVAL;
    
    float YINTERVALLENGTH;
    float YORTHOGONALCOORDINATE;
    float YTICKSPERINTERVAL;
    
    BOOL _isSaved;
    BOOL _inkage;
    
}

@property (nonatomic,assign) id<ValueModelChartDelegate> delegate;

@property BOOL webIsLoaded;
@property BOOL disCountIsChanged;
@property BOOL isShowDiscountView;
@property BrowseSourceType sourceType;
@property BrowseSourceType wantSavedType;
@property (nonatomic,retain) id comInfo;
@property (nonatomic,retain) id netComInfo;
@property (nonatomic,retain) NSString *globalDriverId;
@property (nonatomic,retain) NSString *valuesStr;
@property (nonatomic,retain) NSMutableArray *changedDriverIds;

@property (nonatomic,retain) DiscountRateViewController *rateViewController;

//预测曲线
@property (nonatomic,retain) NSMutableArray *forecastPoints;
//预测默认曲线
@property (nonatomic,retain) NSMutableArray *forecastDefaultPoints;
//历史曲线
@property (nonatomic,retain) NSMutableArray *hisPoints;
//网络获取数据
@property (nonatomic,retain) id jsonForChart;
@property (nonatomic,retain) NSMutableArray *standard;

@property (nonatomic,retain) CPTScatterPlot * forecastLinePlot;
@property (nonatomic,retain) CPTScatterPlot * forecastDefaultLinePlot;
@property (nonatomic,retain) CPTScatterPlot * historyLinePlot;
@property (nonatomic,retain) CPTBarPlot *barPlot;

@property (nonatomic) BOOL isAddGesture;

@property (nonatomic,retain) NSString *yAxisUnit;
@property (nonatomic,retain) NSString *trueUnit;

@property (nonatomic,retain) UIWebView *webView;
@property (nonatomic,retain) UILabel *myGGpriceLabel;
@property (nonatomic,retain) UILabel *priceLabel;
@property (nonatomic,retain) UIButton *saveBt;
@property (nonatomic,retain) UIButton *resetBt;
@property (nonatomic,retain) UIButton *linkBt;
@property (nonatomic,retain) UIButton *discountBt;

//绘图view
@property (nonatomic,retain) CPTXYGraph * graph ;
@property (nonatomic,retain) CPTGraphHostingView *hostView;
@property (nonatomic,retain) CPTXYPlotSpace *plotSpace;


//坐标转换方法，实际坐标转化相对坐标
- (CGPoint)CoordinateTransformRealToAbstract:(CGPoint)point;
//坐标转换方法，相对坐标转化实际坐标
- (CGPoint)CoordinateTransformAbstractToReal:(CGPoint)point;

@end
