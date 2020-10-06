import XCTest

import MyTestLibraryTests

var tests = [XCTestCaseEntry]()
tests += MyTestLibraryTests.allTests()
XCTMain(tests)
