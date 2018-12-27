
CXX = clang++-7
CXXFLAGS = -g -Wall -Wextra -Wpedantic

main.cpp: main.o m_fun.o v_fun.o
	$(CXX) $(CXXFLAGS) -o main main.o m_fun.o v_fun.o
	rm main.o m_fun.o v_fun.o

main.o: Frequency_Plotter/main.cpp Frequency_Plotter/m_fun.h
	$(CXX) $(CXXFLAGS) -c Frequency_Plotter/main.cpp

m_fun.o: Frequency_Plotter/m_fun.h Frequency_Plotter/v_fun.h
	$(CXX) $(CXXFLAGS) -c Frequency_Plotter/m_fun.cpp

v_fun.o: Frequency_Plotter/v_fun.h
	$(CXX) $(CXXFLAGS) -c Frequency_Plotter/v_fun.cpp
