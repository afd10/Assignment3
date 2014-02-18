//
//  ViewController.h
//  Assignment3
//
//  Created by Build User on 2/4/14.
//  Copyright (c) 2014 Pitt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>





@property (nonatomic, assign) BOOL allSelected;

@property (nonatomic, strong) NSMutableArray *cart;

@property (nonatomic, weak) IBOutlet UITableView *cartView;

@property (nonatomic, weak) IBOutlet UIButton *selectAll;

@property (nonatomic, weak) IBOutlet UIButton *emptyCart;

@property (nonatomic, weak) IBOutelet UIButton *fillCart



-(IBAction)selectAllOrNone:(id)sender;

-(IBAction)removeAllFruitInCart:(id)sender;

-(IBAction)fillCartwithBananas:(id)sender;






@end
