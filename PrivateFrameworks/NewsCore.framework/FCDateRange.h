/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCDateRange : NSObject <NSCoding, NSCopying> {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, readonly) double absoluteTimeInterval;
@property (nonatomic, readonly) NSDate *earlierDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) BOOL isFinite;
@property (nonatomic, readonly) BOOL isFromInfinity;
@property (nonatomic, readonly) BOOL isToInfinity;
@property (nonatomic, readonly) NSDate *laterDate;
@property (nonatomic, readonly) unsigned int maxMillisecondsTimeIntervalSince1970;
@property (nonatomic, readonly) unsigned int minMillisecondsTimeIntervalSince1970;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) double timeInterval;

+ (id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2;

- (void).cxx_destruct;
- (double)absoluteTimeInterval;
- (int)compare:(id)arg1;
- (BOOL)containsDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)earlierDate;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 timeInterval:(double)arg2;
- (id)intersectionWithDateRange:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFinite;
- (BOOL)isFromInfinity;
- (BOOL)isToInfinity;
- (BOOL)isWithinTimeInterval:(double)arg1 ofDateRange:(id)arg2;
- (id)laterDate;
- (unsigned int)maxMillisecondsTimeIntervalSince1970;
- (unsigned int)minMillisecondsTimeIntervalSince1970;
- (id)sliceForDate:(id)arg1 withInterval:(double)arg2;
- (int)sliceIndexForDate:(id)arg1 withInterval:(double)arg2;
- (id)slicesWithTimeInterval:(double)arg1;
- (id)startDate;
- (BOOL)startsLaterThanDateRange:(id)arg1;
- (double)timeInterval;

@end