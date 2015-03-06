//
//  MenuHrizontal.h
//  ShowProduct
//
//  Created by lin on 14-5-22.
//  Copyright (c) 2014年 @"". All rights reserved.
//

#import <UIKit/UIKit.h>

#define NOMALKEY   @"normalKey"
#define HEIGHTKEY  @"helightKey"
#define TITLEKEY   @"titleKey"
#define TITLEWIDTH @"titleWidth"
#define TOTALWIDTH @"totalWidth"// 总宽度

@protocol MenuHrizontalDelegate <NSObject>

@optional
-(void)didMenuHrizontalClickedButtonAtIndex:(NSInteger)aIndex;
@end
@interface MenuHrizontal : UIView
{
    NSMutableArray        *mButtonArray;    // 存储菜单按钮的数组
    NSMutableArray        *mItemInfoArray;  // 保存按钮位置的数组
    UIScrollView          *mScrollView;     // 菜单滚动ScrollView
    float                 mTotalWidth;      // 保存总菜单
}

@property (nonatomic,assign) id <MenuHrizontalDelegate> delegate;

#pragma mark 初始化菜单
- (id)initWithFrame:(CGRect)frame ButtonItems:(NSArray *)aItemsArray;

#pragma mark 选中某个button
-(void)clickButtonAtIndex:(NSInteger)aIndex;

#pragma mark 改变第几个button为选中状态，不发送delegate
-(void)changeButtonStateAtIndex:(NSInteger)aIndex;

@end
