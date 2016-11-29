// Generated by dia2code
#ifndef IA__PATHFINDING__H
#define IA__PATHFINDING__H

#include <vector>

namespace ia {
  class Node;
  class IA;
}

#include "IA.h"
#include "Node.h"

namespace ia {

  /// class PathFinding - 
  class PathFinding : public ia::IA {
    // Associations
    // Operations
  public:
    float distance (int x1, int x2, int y1, int y2);
    void ajouterCase (std::pair<int,int>& n);
    std::pair <int,int> best_node (std::vector<Node*> list_node);
    void find_path ();
  };

};

#endif