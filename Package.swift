// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "TestSPM",
    platforms: [
          .iOS(.v13)
      ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "TestSPM",
            targets: ["TestSPM"]),
    ],
    dependencies: [
        .package(name: "spm", url: "https://github.com/atonamy/kmp-spm-example.git", .upToNextMajor(from: "0.0.1"))
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .target(
            name: "TestSPM",
            dependencies: [
                .product(name: "spm", package: "spm")
            ]),
        .testTarget(
            name: "TestSPMTests",
            dependencies: ["TestSPM"]
        ),
    ]
)
