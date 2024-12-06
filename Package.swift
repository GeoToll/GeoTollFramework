// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "GeoTollFramework",
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "GeoTollFramework",
            targets: ["GeoTollFramework"]),
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        // The destination of the framework you will obfuscate the code
        .binaryTarget(name: "GeoTollFramework", path: "./Sources/GeoTollFramework.xcframework"),
        .testTarget(
            name: "GeoTollFrameworkTests",
            dependencies: ["GeoTollFramework"]
        ),
    ]
)
