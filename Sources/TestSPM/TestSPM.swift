#if os(iOS)
import spm
#endif

public struct TestSPM {
    public init() {
        if #available(iOS 13, *) {
            print(Greeting().greet())
        }
    }
}
