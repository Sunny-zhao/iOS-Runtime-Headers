/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSTransaction : NSObject <BSWatchdogProviding> {
    BOOL  _aborted;
    BSAuditHistory * _auditHistory;
    BOOL  _auditHistoryEnabled;
    NSMutableArray * _blockObservers;
    BOOL  _cachedDefaultBasedAuditHistoryEnabled;
    NSString * _cachedDescriptionProem;
    NSMutableArray * _childTransactionRelationships;
    id /* block */  _completionBlock;
    NSMutableSet * _debugLogCategories;
    BOOL  _debugLoggingEnabled;
    NSError * _error;
    BOOL  _failed;
    BOOL  _inSubclassBegin;
    BOOL  _interrupted;
    NSMutableSet * _lifeAssertions;
    NSMutableSet * _milestones;
    NSMutableDictionary * _milestonesToHandlers;
    NSHashTable * _observers;
    NSMutableArray * _parentTransactionRelationships;
    NSDate * _startTime;
    unsigned int  _state;
}

@property (getter=isAborted, nonatomic, readonly) BOOL aborted;
@property (nonatomic, readonly, retain) NSArray *allErrors;
@property (getter=isAuditHistoryEnabled, nonatomic) BOOL auditHistoryEnabled;
@property (nonatomic, readonly, retain) NSArray *childTransactions;
@property (getter=isComplete, nonatomic, readonly) BOOL complete;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSError *error;
@property (getter=isFailed, nonatomic, readonly) BOOL failed;
@property (getter=isFinishedWorking, nonatomic, readonly) BOOL finishedWorking;
@property (readonly) unsigned int hash;
@property (getter=isInterrupted, nonatomic, readonly) BOOL interrupted;
@property (getter=isInterruptible, nonatomic, readonly) BOOL interruptible;
@property (nonatomic, readonly, retain) NSSet *milestones;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isRunning, nonatomic, readonly) BOOL running;
@property (getter=hasStarted, nonatomic, readonly) BOOL started;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) Class superclass;

+ (id)_defaultTransactionLog;

- (void)_abortForError:(id)arg1;
- (void)_addAuditHistoryItem:(id)arg1;
- (void)_addChildTransactionRelationship:(id)arg1;
- (void)_addDebugLogCategory:(id)arg1;
- (void)_addLifeAssertion:(id)arg1 ignoringAuditHistory:(BOOL)arg2;
- (void)_addParentTransaction:(id)arg1 withSchedulingPolicy:(unsigned int)arg2;
- (BOOL)_areChildTransactionsComplete;
- (BOOL)_areConcurrentChildTransactionsFinishedWorking;
- (BOOL)_areConcurrentParentTransactionsDoingWork;
- (BOOL)_areSerialParentTransactionsFinishedWorking;
- (void)_begin;
- (void)_beginIfPossible;
- (BOOL)_canBeInterrupted;
- (void)_checkAndReportIfCompleted;
- (id)_childRelationshipForTransaction:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_childTransactionDidFinishWork:(id)arg1;
- (id)_createErrorWithCode:(int)arg1 reason:(id)arg2 description:(id)arg3 precipitatingError:(id)arg4;
- (id)_customizedDescriptionProperties;
- (id)_debugLogCategories;
- (BOOL)_debugLoggingEnabled;
- (id)_descriptionForDebugging:(BOOL)arg1 indentLevel:(unsigned int)arg2;
- (id)_descriptionForDebugging:(BOOL)arg1 indentLevel:(unsigned int)arg2 visited:(id)arg3;
- (id)_descriptionProem;
- (void)_didAddChildTransaction:(id)arg1;
- (void)_didBegin;
- (void)_didComplete;
- (void)_didFinishWork;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_didSatisfyMilestone:(id)arg1;
- (void)_enumerateChildTransactionRelationshipsWithBlock:(id /* block */)arg1;
- (void)_enumerateChildTransactionsWithBlock:(id /* block */)arg1;
- (void)_enumerateChildTransactionsWithSchedulingPolicy:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)_enumerateObserversWithBlock:(id /* block */)arg1;
- (void)_enumerateParentTransactionRelationshipsWithBlock:(id /* block */)arg1;
- (void)_enumerateParentTransactionsWithBlock:(id /* block */)arg1;
- (void)_enumerateParentTransactionsWithSchedulingPolicy:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)_evaluateCompletion;
- (BOOL)_evaluateParentTransactionsWithSchedulingPolicy:(unsigned int)arg1 evaluator:(id /* block */)arg2;
- (void)_failForTimeoutWithDescription:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_failWithReason:(id)arg1 description:(id)arg2;
- (void)_failWithReason:(id)arg1 description:(id)arg2 precipitatingError:(id)arg3;
- (void)_forceInterrupt;
- (BOOL)_hasChildTransaction:(id)arg1;
- (BOOL)_hasParentTransaction:(id)arg1;
- (BOOL)_inFinishedWorkingState;
- (void)_initializeAuditHistoryIfNecessary;
- (void)_interruptWithReason:(id)arg1 force:(BOOL)arg2;
- (BOOL)_isDoingWork;
- (BOOL)_isRootTransaction;
- (id)_loggingProem;
- (void)_noteChildTransactionCompleted:(id)arg1;
- (void)_noteChildTransactionFinishedWork:(id)arg1;
- (void)_noteCompleted;
- (void)_noteFinishedWork;
- (void)_notifyObserversOfCompletion;
- (void)_notifyObserversOfFinishedWork;
- (id)_parentRelationshipForTransaction:(id)arg1;
- (void)_preventTransactionCompletionForReason:(id)arg1 ignoringAuditHistory:(BOOL)arg2 andExecuteBlock:(id /* block */)arg3;
- (void)_removeChildTransactionRelationship:(id)arg1;
- (void)_removeDebugLogCategory:(id)arg1;
- (void)_removeLifeAssertion:(id)arg1 ignoringAuditHistory:(BOOL)arg2;
- (BOOL)_removeMilestones:(id)arg1 ignoringAuditHistory:(BOOL)arg2;
- (void)_removeParentTransaction:(id)arg1;
- (BOOL)_revertWithReason:(id)arg1;
- (void)_setState:(unsigned int)arg1;
- (BOOL)_shouldComplete;
- (BOOL)_shouldFailForChildTransaction:(id)arg1;
- (unsigned int)_state;
- (id)_stringForInterruptReason:(id)arg1;
- (id)_stringForMilestones:(id)arg1;
- (void)_terminateNow;
- (void)_willAddChildTransaction:(id)arg1;
- (void)_willBegin;
- (void)_willComplete;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_willRemoveChildTransaction:(id)arg1;
- (void)addChildTransaction:(id)arg1;
- (void)addChildTransaction:(id)arg1 withSchedulingPolicy:(unsigned int)arg2;
- (void)addMilestone:(id)arg1;
- (void)addMilestones:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allErrors;
- (id)auditHistory;
- (void)begin;
- (id)childTransactions;
- (id)childTransactionsOfClass:(Class)arg1;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)error;
- (void)evaluateMilestone:(id)arg1 withEvaluator:(id /* block */)arg2;
- (void)failWithReason:(id)arg1;
- (BOOL)hasChildTransactionsOfClass:(Class)arg1;
- (BOOL)hasStarted;
- (id)init;
- (void)interrupt;
- (void)interruptWithReason:(id)arg1;
- (BOOL)isAborted;
- (BOOL)isAuditHistoryEnabled;
- (BOOL)isComplete;
- (BOOL)isFailed;
- (BOOL)isFinishedWorking;
- (BOOL)isInterruptable;
- (BOOL)isInterrupted;
- (BOOL)isInterruptible;
- (BOOL)isRunning;
- (BOOL)isWaitingForMilestone:(id)arg1;
- (void)listenForSatisfiedMilestone:(id)arg1 withBlock:(id /* block */)arg2;
- (id)milestones;
- (id)queue;
- (void)registerBlockObserver:(id /* block */)arg1;
- (void)removeAllChildTransactions;
- (void)removeAllChildTransactionsOfClass:(Class)arg1;
- (void)removeAllMilestones;
- (void)removeChildTransaction:(id)arg1;
- (BOOL)removeMilestone:(id)arg1;
- (BOOL)removeMilestones:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)satisfyMilestone:(id)arg1;
- (void)setAuditHistoryEnabled:(BOOL)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (BOOL)shouldWatchdog:(id*)arg1;
- (unsigned int)state;
- (double)watchdogTimeout;

@end
