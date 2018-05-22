#include <fstream>
#include <iostream>
#include <vector>

#include <CGAL/Delaunay_triangulation_3.h>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Origin.h>
#include <CGAL/Polyhedron_3.h>
#include <CGAL/Tetrahedron_3.h>
#include <CGAL/Triangle_3.h>
#include <CGAL/Triangulation_3.h>
#include <CGAL/Triangulation_vertex_base_with_info_3.h>
#include <CGAL/box_intersection_d.h>
#include <CGAL/convex_hull_3.h>

int main() {
    std::cout << "Hello World!" << '\n';

    constexpr int as = 1.0;
    std::vector<float> ro = {1., 2.};

    CGAL::Exact_predicates_inexact_constructions_kernel::Point_3 pto(
        1., 2., 3.);

    std::cout << pto << '\n';

    std::ofstream out_vol_stream;

    return 0;
}
