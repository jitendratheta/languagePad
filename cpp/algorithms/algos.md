
###Algebra

* #### Elementary algorithms

	* Euler function and its calculation
	* Binary exponentiation for O (log N)
	* Euclid's algorithm for finding the GCD (greatest common divisor)
	* The sieve of Eratosthenes
	* Advanced Euclid's algorithm
	* Fibonacci numbers and their rapid calculation
	* The inverse element in the ring modulo
	* Gray code
	* Long arithmetic
	* The discrete logarithm by modulo M by the baby-step-giant-step Shanks algorithm for O (sqrt (M) log M)
	* Diophantine equations with two unknowns: AX + BY = C
	* A modular linear equation of the first order: AX = B
	* The Chinese remainder theorem. The Garner algorithm
	* Finding the degree of factorial divisor
	* Trinity balanced number system
	* Calculation of the factorial N! modulo P for O (P log N)
	* A search of all the subpatterns of this mask. Estimate 3 N for the total number of subpatterns of all masks
	* Primitive root. Algorithm for finding
	* Discrete root extraction
	* The Eratosthenes sieve with linear time of operation

* #### Modulo Arithmetic Algorithms

	* Basic and Extended Euclidean algorithms
	* Euler’s Totient Function
	* Modular Exponentiation
	* Modular Multiplicative Inverse
	* Chinese remainder theorem Introduction
	* Chinese remainder theorem and Modulo Inverse Implementation
	* nCr%m and this.

* #### Complex algorithms 

	* The BPSW test for the simplicity of numbers for O (log N)
	* Effective algorithms of factorization: Pollard p-1, Pollard p, Bent, Pollard Monte Carlo, Fermat
	* Fast Fourier transform for O (N log N). Application to multiplication of two polynomials or long numbers


###Columns (51)

* #### elementary algorithms (4)
	* Search in width
	* Search in depth
	* Topological sorting
	* Searching for connectivity components

* #### components of strong connectivity, bridges, etc. (4)
	* Search for strong connectivity components, graph condensation for O (N + M)
	* Search for bridges for O (N + M)
	* Search for junction points for O (N + M)
	* Search bridges online for O (1) on average

* #### shortest paths from one vertex (4)

	* Dijkstra's algorithm for finding the shortest paths from a given vertex to all other vertices after O (N 2 + M)
	* The Dijkstra algorithm for a sparse graph of finding the shortest paths from a given vertex to all other vertices after O (M log N)
	* The Ford-Bellman algorithm finds the shortest paths from a given vertex to all other vertices after O (NM)
	* Levit's algorithm of finding the shortest paths from a given vertex to all other vertices in O (NM)

* #### The shortest paths between all pairs of vertices (2)

	* Finding the shortest paths between all pairs of graph vertices by the Floyd-Warshell method for O (n 3 )
	* Counting the number of fixed-length paths between all pairs of vertices, finding the shortest paths of a fixed length in O (n 3 log k)

* #### minimum skeleton (5)

	* Minimum spanning tree. The algorithm of Prima for O (n 2 ) and for O (m log n)
	* Minimum spanning tree. The Kruskal algorithm for O (M log N + N 2 )
	* Minimum spanning tree. The Kruskal algorithm with the data structure 'system of disjoint sets' for O (M log N)
	* Kirchhoff's matrix theorem. The determination of the number of spanning trees for O (N 3 )
	* The code of Prufer. Formula Cayley. Number of ways to make a graph connected

* #### cycles (3)
	* Finding a negative cycle in the graph for O (NM)
	* Finding the Eulerian path or the Eulerian cycle for O (M)
	* Checking the graph for acyclicity and finding the cycle for O (M)

* #### the smallest common ancestor (LCA) (5)

	* The smallest common ancestor. A search for O (sqrt (N)) and O (log N) with preprocessing O (N)
	* The smallest common ancestor. A search for O (log N) with O (N log N) preprocessing (binary lift method)
	* The smallest common ancestor. Finding O (1) with O (N) preprocessing (Farah-Colton-Bender algorithm)
	* The task of RMQ (Range Minimum Query - minimum on a segment). Solution for O (1) with preprocessing O (N)
	* The smallest common ancestor. Finding O (1) in offline mode (Tarjan algorithm)

* #### flows and related tasks (10)

	* The Edmonds-Carp algorithm of finding the maximum flow for O (NM 2 )
	* The method of pushing the preference of finding the maximum flow beyond O (N 4 )
	* Modification of the method of pushing the preference over O (N 3 )
	* Flow with constraints
	* The flow of the minimum cost (min-cost-flow). The algorithm of increasing paths for O (N 3 M)
	* The task of appointments. Solution with the help of min-cost-flow for O (N 5 )
	* The task of appointments. The Hungarian algorithm (the Kuhn algorithm) for O (N 3 )
	* Finding the minimal cut by the Stor-Wagner algorithm for O (N 3 )
	* The flow of minimum cost, circulation of the minimum cost. Algorithm for deleting loops of negative weight
	* Algorithm Dinitsa finding the maximum flow

* #### matching and related tasks (6)

	* Kuhn's algorithm for finding the largest matching for O (NM)
	* Checking the graph for bi-annuality and dividing into two parts for O (M)
	* Finding the largest weighted vertex-weighted matching for O (N 3 )
	* Edmonds' algorithm for finding the greatest matching in arbitrary graphs for O (N 3 )
	* Covering the paths of an oriented acyclic graph
	* Matrix of Tatta. Randomized algorithm for finding the maximum matching in an arbitrary graph

* #### the connection (3)
	* Edge connectivity. Properties and location
	* Vertex connectivity. Properties and location
	* The construction of a graph with the specified values ​​of vertex and edge connections and the smallest vertex degree

* #### K-th paths (0)
* #### inverse problems (2)
	* The inverse problem of SSSP (inverse-SSSP is the inverse problem of shortest paths from one vertex) for O (M)
	* The inverse problem of MST (inverse-MST is the inverse problem of the minimal core) for O (NM 2 )

* #### Miscellaneous (3)
	* Coloring the edges of a tree (data structure) is a solution for O (log N)
	* The task 2-SAT (2-CNF). The solution for O (N + M)
	* Heavy-light decomposition
	
	
### Geometry (23)

* #### elementary algorithms (10)

	* The length of the union of segments on the line by O (N log N)
	* The sign area of ​​the triangle and the predicate 'Clockwise'
	* Checking two segments at the intersection
	* Finding the equation of the line for the interval
	* Finding the intersection point of two straight lines
	* Finding the intersection point of two segments
	* Finding the area of ​​a simple polygon for O (N)
	* Peak's theorem. Finding the area of ​​the lattice polygon after O (1)
	* The problem of covering segments by points
	* The centers of gravity of polygons and polyhedra

* #### more complex algorithms (13)

	* The intersection of a circle and a line
	* Intersection of two circles
	* The construction of a convex hull by the Graham-Andrew algorithm for O (N log N)
	* Finding the area of ​​union of triangles. Vertical decomposition method
	* Checking the point for belonging to a convex polygon for O (log N)
	* Finding an inscribed circle in a convex polygon using a ternary search for O (N log 2 C)
	* Finding an inscribed circle in a convex polygon by the method of contracting sides for O (N log N)
	* The Voronoi diagram in the two-dimensional case, its properties, application. The simplest algorithm for constructing O (N 4 )
	* Finding all faces, the outer face of the planar graph for O (N log N)
	* Finding the pair of nearest points by the divide-and-rule algorithm for O (N log N)
	* Convert geometric inversion
	* Search for common tangents to two circles
	* The search for a pair of intersecting segments by the algorithm of a sweeping line for O (N log N)	
	
### Lines (12)

* Z-function of the string and its calculation for O (N)
* Prefix function, its calculation and application. The Knuth-Morris-Pratt algorithm
* Algorithms for hashing in tasks on strings
* The Rabin-Karp algorithm of finding a substring in a row after O (N)
* The analysis of expressions for O (N). Reverse Polish notation
* The suffix array. The construction of O (N log N) and the application of
* Suffix automatic machine. Building beyond O (N) and applying
* Finding all subpalindromes for O (N)
* The Lyndon decomposition. The Duval algorithm. Finding the smallest cyclic shift for O (N) time and O (1) memory
* Algorithm Aho-Corasik
* Suffix tree. The Ukkonen algorithm
* Search for all tandem repeats in the line by the Maine-Lorentz algorithm (share-and-conquer) for O (N log N)

### Data Structures (7)

* Sqrt-decomposition
* Fenwick Tree
* The system of disjoint sets
* Tree of segments
* Cartesian tree (treap, deramid)
* Modifying the stack and queue to find the minimum for O (1)
* Randomized heap

### Algorithms on sequences (3)

* The task of RMQ (Range Minimum Query - minimum on a segment)
* Finding the longest growing subsequence of O (N 2 ) and O (N log N)
* K-th order statistic of O (N)

### Dynamics (2)

* Dynamics by profile. The task of "parquet"
* Finding the largest zero submatrix for O (NM)

### The linear algebra (3)

* The Gauss method of solving a system of linear equations for O (N 3 )
* The determination of the rank of the matrix over O (N 3 )
* Calculation of the determinant of the matrix by the Gaussian method for O (N 3 )

### Numerical methods (3)

* Integration by the Simpson formula
* Search for roots by the Newton method (tangents)
* Ternary search

### Combinatorics (9)

* The binomial coefficients
* The Catalan Numbers
* Necklaces
* Arrangement of elephants on a chessboard
* Correct parenthesis sequences. Finding the lexicographically next, K-th, definition of the number
* The number of labeled graphs, connected labeled graphs, labeled graphs with K connectivity components
* Generating combinations of N elements
* The Burnside lemma. The theorem of Poya
* The inclusion-exclusion principle

### Theory of games (2)

* Games on arbitrary graphs. The method of retrospective analysis for O (M)
* The theory of Sprague-Grandi. Nim

### Timetables (3)

* Johnson's problem with one machine
* The Johnson problem with two
* The optimal choice of tasks for known completion times and execution time

### Miscellaneous (4)

* The task of Joseph
* Game of the Fifteen: the existence of the solution
* The Stern-Broco tree. Farey's series
* Search for a sub-array with a maximum / minimum amount for O (N)	


##Link to more
[scriptol.com.programming](https://www.scriptol.com/programming/list-algorithms.php)
	