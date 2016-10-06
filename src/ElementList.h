// Generated by dia2code
#ifndef ELEMENTLIST__H
#define ELEMENTLIST__H

/// class ElementList - 
class ElementList {
  // Associations
  // Attributes
public:
  State s;
  std::vector<Element*> elements;
  // Operations
public:
  ElementList (State& s);
  ~ElementList ();
  ElementList* const clone ();
  int const size ();
  State& const getState ();
};

#endif
