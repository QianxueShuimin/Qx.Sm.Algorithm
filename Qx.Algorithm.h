#pragma once

#include <iostream>


//题目顺序为洛谷的训练题单
void B2002() {
	std::cout << "Hello,World!" << std::endl;   //使用 cout 输出 Hello,World! 的内容
}

void B2025() {
    //按要求输出，注意空格捏
    std::cout << "  *" << std::endl;
    std::cout << " ***" << std::endl;
    std::cout << "*****" << std::endl;
    std::cout << " ***" << std::endl;
    std::cout << "  *" << std::endl;
}

void P1000() {
    //居然是更多的输出吗，那没办法了，开输()
    std::cout << "                ******** " << std::endl;
    std::cout << "               ************ " << std::endl;
    std::cout << "               ####....#. " << std::endl;
    std::cout << "             #..###.....##.... " << std::endl;
    std::cout << "             ###.......######              ###            ###" << std::endl;
    std::cout << "                ...........               #...#          #...# " << std::endl;
    std::cout << "               ##*#######                 #.#.#          #.#.# " << std::endl;
    std::cout << "            ####*******######             #.#.#          #.#.# " << std::endl;
    std::cout << "           ...#***.****.*###....          #...#          #...# " << std::endl;
    std::cout << "           ....**********##.....           ###            ### " << std::endl;
    std::cout << "           ....****    *****.... " << std::endl;
    std::cout << "             ####        #### " << std::endl;
    std::cout << "           ######        ###### " << std::endl;
    std::cout << "############################################################## " << std::endl;
    std::cout << "#...#......#.##...#......#.##...#......#.##------------------# " << std::endl;
    std::cout << "###########################################------------------# " << std::endl;
    std::cout << "#..#....#....##..#....#....##..#....#....##################### " << std::endl;
    std::cout << "##########################################    #----------# " << std::endl;
    std::cout << "#.....#......##.....#......##.....#......#    #----------# " << std::endl;
    std::cout << "##########################################    #----------# " << std::endl;
    std::cout << "#.#..#....#..##.#..#....#..##.#..#....#..#    #----------# " << std::endl;
    std::cout << "##########################################    ############ " << std::endl;
}

void P1001() {
    int a, b; //创建两个整数变量(int) a 和 b
    std::cin >> a >> b; //使用 cin 读取输入的值，给 a 与 b 进行赋值
    std::cout << a + b << std::endl;    // 输出 a + b 的结果
}

void B2005() {
    char i; //创建一个字符类型的变量 i 用来存储字符

    std::cin >> i;  //使用 cin 读取输入的值，给 i 赋值

    //按要求输出
    std::cout << "  " << i << std::endl;
    std::cout << " " << i << i << i << std::endl;
    std::cout << i << i << i << i << i << std::endl;
}