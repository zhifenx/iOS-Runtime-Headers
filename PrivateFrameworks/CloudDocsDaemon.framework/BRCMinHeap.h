/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCMinHeap : NSObject <NSFastEnumeration> {
    id * _array;
    id /* block */  _comparator;
    unsigned int  _count;
    unsigned long  _mutation;
    NSMapTable * _objects;
    unsigned int  _size;
}

@property (nonatomic, readonly) unsigned int count;

- (void).cxx_destruct;
- (void)_moveDown:(id)arg1 index:(unsigned int)arg2;
- (void)_moveUp:(id)arg1 index:(unsigned int)arg2;
- (void)_moveUpOrDown:(id)arg1 index:(unsigned int)arg2;
- (void)_shrink;
- (void)addObject:(id)arg1;
- (BOOL)check;
- (BOOL)containsObject:(id)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)description;
- (id)firstObject;
- (void)firstObjectWeightChanged;
- (id)init;
- (id)initWithComparator:(id /* block */)arg1;
- (void)objectWeightChanged:(id)arg1;
- (void)removeAllObjects;
- (void)removeFirstObject;
- (void)removeObject:(id)arg1;

@end
