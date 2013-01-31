/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAMovieResolution, NSURL;

@interface SAMovieImage : AceObject <SAAceSerializable> {
}

@property(retain) SAMovieResolution * resolution;
@property(copy) NSURL * uri;

+ (id)imageWithDictionary:(id)arg1 context:(id)arg2;
+ (id)image;

- (void)setUri:(id)arg1;
- (void)setResolution:(id)arg1;
- (id)encodedClassName;
- (id)uri;
- (id)resolution;
- (id)groupIdentifier;

@end