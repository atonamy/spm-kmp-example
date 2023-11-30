#if os(iOS)
import spm
#endif

public struct TestSPM {
    let test: String
    
    public init() {
        #if os(iOS)
        print(Greeting().greet())
        #endif
    }
}
