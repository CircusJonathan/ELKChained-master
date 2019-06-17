//
//  UITableView+ELKChainedAlloy.h
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITableView (ELKChainedAlloy)


/**
 set dataSource
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setDataSource)(id<UITableViewDataSource> _Nullable dataSource);

/**
 set delegate
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setDelegate)(id<UITableViewDelegate> _Nullable delegate);

/**
 set table header view
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setTableHeaderView)(UIView * _Nullable tableHeaderView);

/**
 set table footer view
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setTableFooterView)(UIView * _Nullable tableFooterView);

/**
 set row height
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setRowHeight)(CGFloat rowHeight);

/**
 set section header height
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setSectionHeadHeight)(CGFloat headHeight);

/**
 set section footer height
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setSectionFootHeight)(CGFloat footHeight);

/**
 set estimated row height
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setEstimatedRowHeight)(CGFloat estRowHeight);

/**
 set section index color
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setSectionIndexColor)(UIColor * _Nullable color);

/**
 set section index backgroud color
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setSectionIndexBgColor)(UIColor * _Nullable color);

/**
 set section index tracking background color
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setSectionIndexTrackBgColor)(UIColor * _Nullable color);

/**
 set separator style
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setSeparatorStyle)(UITableViewCellSeparatorStyle sepStyle);

/**
 set separator color
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setSeparatorColor)(UIColor * _Nullable color);

/**
 set separator inset
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setSeparatInset)(UIEdgeInsets inset);

/**
 register class for cell reuse identifier
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_registerClassForCell)(Class cellClass, NSString * _Nonnull identify);

/**
 register nib for cell reuse identifier
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_registerNibForCell)(UINib * _Nonnull nib, NSString * _Nonnull identify);

/**
 register nib for header footer view reuse identifier
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_registerNibForHeadFootView)(UINib * _Nonnull nib, NSString * _Nonnull identify);

/**
 register class for header footer view reuse identifier
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_registerClassForHeadFootView)(Class hfClass, NSString * _Nonnull identify);

/**
 set background view
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setBackgroundView)(UIView * _Nullable backView);

/**
 set editing
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setEditing)(BOOL editing);

/**
 set editing animated
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setEditingAnimated)(BOOL editing, BOOL animate);

/**
 set allows selection
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setAllowsSelection)(BOOL allowSel);

/**
 set allows multiple selection
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setAllowsMultSelect)(BOOL AllowMult);

/**
 set allows selection during editing
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setAllowsSelectDuringEdit)(BOOL allowDuringEdit);

/**
 set allows multiple selection during editing
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setAllowsMultSelectDuringEdit)(BOOL allowMult);





@end

NS_ASSUME_NONNULL_END
