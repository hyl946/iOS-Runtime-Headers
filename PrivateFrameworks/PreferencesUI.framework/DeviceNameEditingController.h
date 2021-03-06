/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface DeviceNameEditingController : PSListController {
    id  _effectiveSettingsChangedNotificationObserver;
    NSString * _originalDeviceName;
}

@property (nonatomic, retain) id effectiveSettingsChangedNotificationObserver;
@property (nonatomic, retain) NSString *originalDeviceName;

- (void).cxx_destruct;
- (id)_editedDeviceName;
- (bool)canBeShownFromSuspendedState;
- (id)deviceName:(id)arg1;
- (id)effectiveSettingsChangedNotificationObserver;
- (id)originalDeviceName;
- (void)setEffectiveSettingsChangedNotificationObserver:(id)arg1;
- (void)setOriginalDeviceName:(id)arg1;
- (bool)shouldSelectResponderOnAppearance;
- (id)specifiers;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
