prepare:
	rm -rf build
	mkdir build
	cd build && conan install ../extras & cd ..

dependency:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graph.png
