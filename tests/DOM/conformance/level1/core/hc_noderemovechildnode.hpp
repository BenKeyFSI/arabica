#ifndef test_hc_noderemovechildnode
#define test_hc_noderemovechildnode


/*
This C++ source file was generated for Arabica
from the source document contained in the W3C
DOM Conformance Test Suite.
The source document contained the following notice:


Copyright (c) 2001-2004 World Wide Web Consortium,
(Massachusetts Institute of Technology, Institut National de
Recherche en Informatique et en Automatique, Keio University). All
Rights Reserved. This program is distributed under the W3C's Software
Intellectual Property License. This program is distributed in the
hope that it will be useful, but WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.
See W3C License http://www.w3.org/Consortium/Legal/ for more details.

*/
/**
 *     The "removeChild(oldChild)" method removes the node
 *     indicated by "oldChild". 
 *     
 *     Retrieve the second p element and remove its first child.
 *     After the removal, the second p element should have 5 element
 *     children and the first child should now be the child
 *     that used to be at the second position in the list.
* @author Curt Arnold
* @see <a href="http://www.w3.org/TR/1998/REC-DOM-Level-1-19981001/level-one-core#ID-1734834066">http://www.w3.org/TR/1998/REC-DOM-Level-1-19981001/level-one-core#ID-1734834066</a>
* @see <a href="http://www.w3.org/Bugs/Public/show_bug.cgi?id=246">http://www.w3.org/Bugs/Public/show_bug.cgi?id=246</a>
*/

template<class string_type, class string_adaptor>
class hc_noderemovechildnode : public DOMTestCase<string_type, string_adaptor> 
{
    typedef DOMTestCase<string_type, string_adaptor> baseT;
   public: 
     hc_noderemovechildnode(std::string name) : baseT(name)
     {

       //   check if loaded documents are supported for content type
       const std::string contentType = baseT::getContentType();
    baseT::preload(contentType, "hc_staff", true);
    }

  typedef typename Arabica::DOM::DOMImplementation<string_type, string_adaptor>  DOMImplementation;
  typedef typename Arabica::DOM::Document<string_type, string_adaptor> Document; 
  typedef typename Arabica::DOM::DocumentType<string_type, string_adaptor> DocumentType;
  typedef typename Arabica::DOM::DocumentFragment<string_type, string_adaptor> DocumentFragment; 
  typedef typename Arabica::DOM::Node<string_type, string_adaptor> Node;
  typedef typename Arabica::DOM::Element<string_type, string_adaptor> Element;
  typedef typename Arabica::DOM::Attr<string_type, string_adaptor> Attr;
  typedef typename Arabica::DOM::NodeList<string_type, string_adaptor> NodeList;
  typedef typename Arabica::DOM::NamedNodeMap<string_type, string_adaptor> NamedNodeMap;
  typedef typename Arabica::DOM::Entity<string_type, string_adaptor> Entity;
  typedef typename Arabica::DOM::EntityReference<string_type, string_adaptor> EntityReference;
  typedef typename Arabica::DOM::CharacterData<string_type, string_adaptor> CharacterData;
  typedef typename Arabica::DOM::CDATASection<string_type, string_adaptor> CDATASection;
  typedef typename Arabica::DOM::Text<string_type, string_adaptor> Text;
  typedef typename Arabica::DOM::Comment<string_type, string_adaptor> Comment;
  typedef typename Arabica::DOM::ProcessingInstruction<string_type, string_adaptor> ProcessingInstruction;
  typedef typename Arabica::DOM::Notation<string_type, string_adaptor> Notation;

  typedef typename Arabica::DOM::DOMException DOMException;
  typedef string_type String;
  typedef string_adaptor SA;
  typedef bool boolean;


   /*
    * Runs the test case.
    */
   void runTest()
   {
      Document doc;
      NodeList elementList;
      NodeList emList;
      Node employeeNode;
      NodeList childList;
      Node oldChild;
      Node child;
      String childName;
      Node removedChild;
      String removedName;
      int nodeType;
      std::vector<string_type> expected;
      expected.push_back(SA::construct_from_utf8("strong"));
      expected.push_back(SA::construct_from_utf8("code"));
      expected.push_back(SA::construct_from_utf8("sup"));
      expected.push_back(SA::construct_from_utf8("var"));
      expected.push_back(SA::construct_from_utf8("acronym"));
      
      std::vector<string_type> actual;
      
      doc = (Document) baseT::load("hc_staff", true);
      elementList = doc.getElementsByTagName(SA::construct_from_utf8("p"));
      employeeNode = elementList.item(1);
      childList = employeeNode.getChildNodes();
      emList = ((Element) /*Node */employeeNode).getElementsByTagName(SA::construct_from_utf8("em"));
      oldChild = emList.item(0);
      removedChild = employeeNode.removeChild(oldChild);
      removedName = removedChild.getNodeName();
      baseT::assertEquals("em", removedName, __LINE__, __FILE__);
  for (unsigned int indexN65684 = 0; indexN65684 != childList.getLength(); indexN65684++) {
          child = (Node) childList.item(indexN65684);
    nodeType = (int) child.getNodeType();
      childName = child.getNodeName();
      
      if (baseT::equals(1, nodeType)) {
          actual.push_back(childName);
      } else {
          baseT::assertEquals(3, nodeType, __LINE__, __FILE__);
  baseT::assertEquals("#text", childName, __LINE__, __FILE__);
  }
        
      }
      baseT::assertEquals(expected, actual, __LINE__, __FILE__);
  
   }
  
   /*
    *  Gets URI that identifies the test.
    */
   std::string getTargetURI() const
   {
      return "http://www.w3.org/2001/DOM-Test-Suite/level1/core/hc_noderemovechildnode";
   }
};

#endif
