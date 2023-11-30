#if os(iOS)
import spm
#endif

public struct TestSPM {
    let test: String
    
    public init() {
        if #available(iOS 13, *) {
            test = Greeting().greet()
        } else {
            test = ""
        }
        print(test)
    }
}
