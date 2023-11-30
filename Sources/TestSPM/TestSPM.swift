#if os(iOS)
import spm
#endif

public struct TestSPM {
    
    public init() {
        #if os(iOS)
        print(Greeting().greet())
        #endif
    }
}
