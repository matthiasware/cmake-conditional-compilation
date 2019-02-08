# Conditional Compilation via Macros and CMake

Solution to the following problem:

- There are multiple implementations of the same algorithm
- There are different requirement for each implementation e.g:
	- AVX2 for one implementation
	- SSE & OpenCV for another implementation
- At compile time we want to choose the right implementation depending on the requirements and architecture
- Each algorithm, whose requirements are fulfilled should be useable (e.g. for tests, benchmarks)