/*
 (PFObserver *)observerWithName:(NSString *)name; // DEPRECATED
 (PFObserver *)observerWithPath:(NSString *)fullPath;
 (PFObserver *)observerWithURL:(NSURL *)url;
 (PFObserver *)observerWithBundleIdentifier:(NSString *)bundleIdentifier;
 (PFObserver *)observerWithPid:(pid_t)pid;
 (PFObserver *)observerForInfoWithPath:(NSString *)fullPath;
 (PFObserver *)observerForInfoWithURL:(NSURL *)url;
 (PFObserver *)observerForInfoWithBundleIdentifier:(NSString *)bundleIdentifier;
 (PFObserver *)observerForInfoWithPid:(pid_t)pid;
 (PFObserver *)observerWithName:(NSString *)name notificationDelegate:(id)callbackDelegate callbackSelector:(SEL)callback;; // DEPRECATED
 (PFObserver *)observerWithPath:(NSString *)fullPath notificationDelegate:(id)callbackDelegate callbackSelector:(SEL)callback;
 (PFObserver *)observerWithURL:(NSURL *)url notificationDelegate:(id)callbackDelegate callbackSelector:(SEL)callback;
 (PFObserver *)observerWithBundleIdentifier:(NSString *)bundleIdentifier notificationDelegate:(id)callbackDelegate callbackSelector:(SEL)callback;
 (PFObserver *)observerWithPid:(pid_t)pid notificationDelegate:(id)callbackDelegate callbackSelector:(SEL)callback;
 (PFObserver *)observerForInfoWithPath:(NSString *)fullPath notificationDelegate:(id)callbackDelegate infoCallbackSelector:(SEL)callback;
 (PFObserver *)observerForInfoWithURL:(NSURL *)url notificationDelegate:(id)callbackDelegate infoCallbackSelector:(SEL)callback;
 (PFObserver *)observerForInfoWithBundleIdentifier:(NSString *)bundleIdentifier notificationDelegate:(id)callbackDelegate infoCallbackSelector:(SEL)callback;
 (PFObserver *)observerForInfoWithPid:(pid_t)pid notificationDelegate:(id)callbackDelegate infoCallbackSelector:(SEL)callback;
 (NSArray *)observersForPath:(NSString *)fullPath;
 (NSArray *)observersForURL:(NSURL *)url;
 (NSArray *)observersForBundleIdentifier:(NSString *)bundleIdentifier;
 (NSArray *)observersForPid:(pid_t)pid;
 (void)removeObserversForPath:(NSString *)fullPath;
 (void)removeObserversForURL:(NSURL *)url;
 (void)removeObserversForBundleIdentifier:(NSString *)bundleIdentifier;
 (void)removeObserversForPid:(pid_t)pid;