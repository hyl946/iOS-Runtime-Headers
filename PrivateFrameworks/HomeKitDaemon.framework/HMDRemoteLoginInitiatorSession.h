/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteLoginInitiatorSession : HMFObject {
    HMDLogEvent<HomeKitEventRemoteLoginMetricProtocol> * _metric;
    NSString * _sessionID;
}

@property (nonatomic, retain) HMDLogEvent<HomeKitEventRemoteLoginMetricProtocol> *metric;
@property (nonatomic, readonly) NSString *sessionID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithSessionID:(id)arg1;
- (id)metric;
- (id)sessionID;
- (void)setMetric:(id)arg1;

@end