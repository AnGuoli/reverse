//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDView.h"

@class IDButton, IDCheckbox, IDLabel;

@interface IDRhmiFeatureListOnlineServicesInfoView : IDView
{
    IDLabel *_appswitchFailedLabel;
    IDLabel *_confirmAppswitchLabel;
    IDLabel *_appNotInstalledLabel;
    IDButton *_confirmAppswitchButton;
    IDCheckbox *_appswitchConfirmationCheckBox;
}

@property(retain) IDCheckbox *appswitchConfirmationCheckBox; // @synthesize appswitchConfirmationCheckBox=_appswitchConfirmationCheckBox;
@property(retain) IDButton *confirmAppswitchButton; // @synthesize confirmAppswitchButton=_confirmAppswitchButton;
@property(retain) IDLabel *appNotInstalledLabel; // @synthesize appNotInstalledLabel=_appNotInstalledLabel;
@property(retain) IDLabel *confirmAppswitchLabel; // @synthesize confirmAppswitchLabel=_confirmAppswitchLabel;
@property(retain) IDLabel *appswitchFailedLabel; // @synthesize appswitchFailedLabel=_appswitchFailedLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 hmiProvider:(id)arg4;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3;

@end

