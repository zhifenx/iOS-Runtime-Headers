/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSViewServiceRequestPreparationOperation : VSAsyncOperation {
    BOOL  _accountModificationAllowed;
    VSIdentityProviderAvailabilityInfoCenter * _availabilityInfoCenter;
    VSOptional * _currentAccount;
    struct { 
        unsigned int val[8]; 
    }  _hostAuditToken;
    int  _hostProcessIdentifier;
    NSXPCConnection * _privacyServiceConnection;
    BOOL  _requestAllowsPrivacyUI;
    BOOL  _requestRequiresPrivacyUI;
    VSOptional * _result;
    NSArray * _supportedIdentityProviderIdentifiers;
}

@property (getter=isAccountModificationAllowed, nonatomic) BOOL accountModificationAllowed;
@property (nonatomic, retain) VSIdentityProviderAvailabilityInfoCenter *availabilityInfoCenter;
@property (nonatomic, retain) VSOptional *currentAccount;
@property (nonatomic) struct { unsigned int x1[8]; } hostAuditToken;
@property (nonatomic) int hostProcessIdentifier;
@property (nonatomic, retain) NSXPCConnection *privacyServiceConnection;
@property (nonatomic) BOOL requestAllowsPrivacyUI;
@property (nonatomic) BOOL requestRequiresPrivacyUI;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, copy) NSArray *supportedIdentityProviderIdentifiers;

- (void).cxx_destruct;
- (void)_checkAvailability;
- (void)_checkEntitlement;
- (void)_checkPrivacy;
- (void)_checkSupportedProviders;
- (void)_determineProviderDisplayName;
- (void)_finishWithError:(id)arg1;
- (id)_privacyServiceWithErrorHandler:(id /* block */)arg1;
- (void)_promptForPrivacyWithDisplayName:(id)arg1;
- (id)availabilityInfoCenter;
- (void)cancel;
- (id)currentAccount;
- (void)dealloc;
- (void)executionDidBegin;
- (struct { unsigned int x1[8]; })hostAuditToken;
- (int)hostProcessIdentifier;
- (id)init;
- (BOOL)isAccountModificationAllowed;
- (id)privacyServiceConnection;
- (BOOL)requestAllowsPrivacyUI;
- (BOOL)requestRequiresPrivacyUI;
- (id)result;
- (void)setAccountModificationAllowed:(BOOL)arg1;
- (void)setAvailabilityInfoCenter:(id)arg1;
- (void)setCurrentAccount:(id)arg1;
- (void)setHostAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setHostProcessIdentifier:(int)arg1;
- (void)setPrivacyServiceConnection:(id)arg1;
- (void)setRequestAllowsPrivacyUI:(BOOL)arg1;
- (void)setRequestRequiresPrivacyUI:(BOOL)arg1;
- (void)setResult:(id)arg1;
- (void)setSupportedIdentityProviderIdentifiers:(id)arg1;
- (id)supportedIdentityProviderIdentifiers;

@end