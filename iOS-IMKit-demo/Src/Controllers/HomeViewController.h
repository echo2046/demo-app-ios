//
//  HomeViewController.h
//  iOS-IMKit-demo
//
//  Created by xugang on 7/24/14.
//  Copyright (c) 2014 Heq.Shinoda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RCIM.h"

@interface HomeViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>

@property (nonatomic,strong)UITableView *tableView;
@property (nonatomic,strong)NSMutableArray *dataList;

@end
