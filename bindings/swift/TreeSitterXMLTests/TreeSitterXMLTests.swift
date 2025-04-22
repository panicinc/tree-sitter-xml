import XCTest
import SwiftTreeSitter
import TreeSitterXml

final class TreeSitterXmlTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_xml())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading XML grammar")
    }
}
