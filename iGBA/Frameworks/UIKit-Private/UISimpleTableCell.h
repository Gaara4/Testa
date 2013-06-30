/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "UITableCell.h"

@class NSString, UIImageView;

@interface UISimpleTableCell : UITableCell
{
    struct __GSFont *_font;
    UIImageView *_iconImageView;
    unsigned int _indentationLevel;
    NSString *_title;
    int _titleColor;
}

+ (struct __GSFont *)defaultFont;	// IMP=0x323ea46c
- (id)_automationID;	// IMP=0x323ea9a4
- (void)dealloc;	// IMP=0x323ea568
- (void)drawContentInRect:(struct CGRect)fp8 selected:(BOOL)fp24;	// IMP=0x323ea5e0
- (void)drawTitleInRect:(struct CGRect)fp8 selected:(BOOL)fp24;	// IMP=0x323ed0bc
- (int)ellipsisStyle;	// IMP=0x323ea99c
- (struct __GSFont *)font;	// IMP=0x323ea560
- (id)icon;	// IMP=0x323ea948
- (id)iconImageView;	// IMP=0x323ea778
- (unsigned int)indentationLevel;	// IMP=0x323ea994
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x323ea480
- (void)layoutSubviews;	// IMP=0x323ecf10
- (void)setEnabled:(BOOL)fp8;	// IMP=0x323ea63c
- (void)setFont:(struct __GSFont *)fp8;	// IMP=0x323ea528
- (void)setIcon:(id)fp8;	// IMP=0x323ea780
- (void)setIndentationLevel:(unsigned int)fp8;	// IMP=0x323ea968
- (void)setTitle:(id)fp8;	// IMP=0x323ea6e8
- (void)setTitleColor:(int)fp8;	// IMP=0x323ea74c
- (id)title;	// IMP=0x323ea744

@end

