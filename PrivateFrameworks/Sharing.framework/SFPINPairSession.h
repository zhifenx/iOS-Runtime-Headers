/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFPINPairSession : NSObject {
    BOOL  _activateCalled;
    NSData * _clientSessionUUID;
    BOOL  _clientStarted;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned long long  _heartbeatLastTicks;
    BOOL  _heartbeatSending;
    NSObject<OS_dispatch_source> * _heartbeatTimer;
    id /* block */  _hidePINHandler;
    BOOL  _invalidateCalled;
    BOOL  _pairSetupDone;
    struct PairingSessionPrivate { } * _pairSetupSession;
    BOOL  _pairSetupWaitingForUser;
    BOOL  _pairVerifyDone;
    struct PairingSessionPrivate { } * _pairVerifySession;
    SFDevice * _peerDevice;
    id /* block */  _promptForPINHandler;
    SFService * _sfService;
    SFSession * _sfSession;
    BOOL  _sfSessionActivated;
    id /* block */  _showPINHandler;
    unsigned long long  _startTicks;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ hidePINHandler;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, copy) id /* block */ promptForPINHandler;
@property (nonatomic, retain) SFService *sfService;
@property (nonatomic, copy) id /* block */ showPINHandler;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanup;
- (void)_clientHeartbeatSend;
- (void)_clientPairSetup:(id)arg1 start:(BOOL)arg2;
- (void)_clientPairVerify:(id)arg1 start:(BOOL)arg2;
- (void)_clientRun;
- (void)_clientSFSessionStart;
- (void)_clientTryPIN:(id)arg1;
- (void)_completed:(long)arg1;
- (void)_handleServerRequest:(id)arg1;
- (void)_hearbeatTimer;
- (void)_invalidate;
- (void)activate;
- (void)clientTryPIN:(id)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)dispatchQueue;
- (void)handleServerHeartbeat:(id)arg1;
- (void)handleServerPairSetup:(id)arg1 reset:(BOOL)arg2;
- (void)handleServerPairVerify:(id)arg1 reset:(BOOL)arg2;
- (void)handleServerRequest:(id)arg1;
- (id /* block */)hidePINHandler;
- (id)init;
- (void)invalidate;
- (id)peerDevice;
- (id /* block */)promptForPINHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setHidePINHandler:(id /* block */)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)setSfService:(id)arg1;
- (void)setShowPINHandler:(id /* block */)arg1;
- (id)sfService;
- (id /* block */)showPINHandler;

@end
