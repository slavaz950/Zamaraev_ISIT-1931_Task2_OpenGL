/*
 * Map.h
 *
 *  Created on: 30 ���. 2022 �.
 *      Author: Zver
 */

#ifndef MAP_H_
#define MAP_H_


#include <vector>
#include <string>

class Map final {
private:
    int _width {}, _height {};
    double _start_x {}, _start_y {}, _start_dir {};
    std::vector<std::string> _data;

public:
    Map(const char * filename);

    int width() const { return _width; }
    int height() const { return _height; }
    double start_x() const { return _start_x; }
    double start_y() const { return _start_y; }
    double start_dir() const { return _start_dir; }

    bool is_wall(int x, int y) const;
    bool is_wall(double x, double y) const;

    static void next_line(std::ifstream & file, std::string & line);
};

#endif //MAP_H


