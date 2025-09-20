#pragma once

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

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
    std::cout << a + b << std::endl;    // 使用 cout 进行输出 a + b 的结果
}

void B2005() {
    char i; //创建一个字符类型的变量 i 用来存储字符

    std::cin >> i;  //使用 cin 读取输入的值，给 i 赋值

    //按要求输出
    std::cout << "  " << i << std::endl;
    std::cout << " " << i << i << i << std::endl;
    std::cout << i << i << i << i << i << std::endl;
}

void P5703() {
    int i, j;

    std::cin >> i >> j;
    std::cout << i * j << std::endl;
}

void P5704() {
    char i; 

    std::cin >> i; 

    std::cout << char(i - 32) << std::endl; //参考ASCII码对照表，当输入小写字母赋值到 i 时，减去32，则变为大写字母
}

void P5705() {
    char a, b, c, d, e; 

    std::cin >> a >> b >> c >> d >> e;  

    std::cout << e << d << c << b << a << std::endl;    //将存储的字母倒序，则实现反转
}

void P5706() {
    double f = 0;   //这是浮点数变量，他有小数点还比 char 方便计算不是吗
    int i = 0;

    std::cin >> f >> i;

    /*
    * 使用头文件为 iomanip
    * 使用 fixed 现在，科学记数法已经消失，让我们使用小数点！
    * 使用 setprecision() ，其中 setprecision(x) 代表保留浮点数中x位有效数字
    */
    std::cout << std::fixed << std::setprecision(3) << f / i << std::endl;  
    std::cout << i * 2 << std::endl;
}

void P5708() {
    double a, b, c = 0;

    std::cin >> a >> b >> c;

    double p = (a + b + c) / 2;

    /*
    * 现在，让我们使用根号(sqrt)！
    * 使用头文件为 cmath
    */
    double i = sqrt(p * (p - a) * (p - b) * (p - c));

    std::cout << std::fixed << std::setprecision(1) << i << std::endl;
}

void P5707() {
    //好长啊，我当初为什么要用我的蹩脚英语做变量的名
    double s, v;
    std::cin >> s >> v;

    int i = 470;
    
    /*
    * 使用 ceil(xxx) 作用是将 xxx 向上取整↑
    * 使用 static_cast<int> 我要强制将浮点数(double)变成整数(int)~
    */
    int i_ = static_cast<int>(ceil(s / v));

    if (i_ <= i) {
        int total_minutes = i - i_;
        int h = total_minutes / 60;
        int m = total_minutes % 60;

        if (h < 10) {
            if (m < 10) {
                std::cout << "0" << h << ":0" << m << std::endl;
            }
            else {
                std::cout << "0" << h << ":" << m << std::endl;
            }
        }
        else {
            if (m < 10) {
                std::cout << h << ":0" << m << std::endl;
            }
            else {
                std::cout << h << ":" << m << std::endl;
            }
        }
    }
    else {

        int remaining = i_ - i;
        int mod_minutes = remaining % 1440;
        int total_minutes = (1440 - mod_minutes) % 1440;

        int h = total_minutes / 60;
        int m = total_minutes % 60;

        if (h < 10) {
            if (m < 10) {
                std::cout << "0" << h << ":0" << m << std::endl;
            }
            else {
                std::cout << "0" << h << ":" << m << std::endl;
            }
        }
        else {
            if (m < 10) {
                std::cout << h << ":0" << m << std::endl;
            }
            else {
                std::cout << h << ":" << m << std::endl;
            }
        }
    }
}

void B2029() {
    int h, r, a;

    std::cin >> h >> r;

    a = 20000 / (3.14 * r * r * h) + 1;

    std::cout << a << std::endl;
}

void P1425() {
    int a, b, c, d, x, y;
    std::cin >> a >> b >> c >> d;
    x = c - a, y = d - b;
    if (y < 0) {
        x--;
        y += 60;
    }
    std::cout << x << ' ' << y << std::endl;
}

void P1421() {
    double a, b;
    std::cin >> a >> b;

    std::cout << floor((a + (b / 10)) / 1.9) << std::endl; //floor 跟 ceil 是反过来的，前者是向下取整，后者是向上取整
}

void P3954() {
    double a, b, c;
    std::cin >> a >> b >> c;

    std::cout << (a * 0.2) + (b * 0.3) + (c * 0.5) << std::endl;
}

void P2433() {
    int Question_Number = 0;
    std::cin >> Question_Number;    //判断算法要算什么()

    if (Question_Number == 1) {
        std::cout << "I love Luogu!" << std::endl;
    }
    else if (Question_Number == 2) {
        std::cout << "6 4" << std::endl;    //注意空格
    }
    else if (Question_Number == 3) {
        std::cout << 3 << std::endl;
        std::cout << 12 << std::endl;
        std::cout << 2 << std::endl;
    }
    else if (Question_Number == 4) {
        std::cout << std::fixed << std::setprecision(3) << 500.0 / 3 << std::endl;
    }
    else if (Question_Number == 5) {
        std::cout << 15 << std::endl;
    }
    else if (Question_Number == 6) {
        double k = sqrt(117);
        std::cout << k << std::endl;
    }
    else if (Question_Number == 7) {
        std::cout << "110\n" << "90\n" << "0\n";    //换行\n
    }
    else if (Question_Number == 8) {
        //小小数学，拿下
        double Pi = 3.141593;
        double Circle_Circumference = Pi * 10;
        double Circle_Area = Pi * 25;
        double Circle_Volume = (500.0 / 3) * Pi;
        std::cout << Circle_Circumference << std::endl;
        std::cout << Circle_Area << std::endl;
        std::cout << Circle_Volume << std::endl;
    }
    else if (Question_Number == 9) {
        std::cout << 22 << std::endl;
    }
    else if (Question_Number == 10) {
        std::cout << 9 << std::endl;
    }
    else if (Question_Number == 11) {
        std::cout << 100.0 / 3 << std::endl;
    }
    else if (Question_Number == 12) {
        std::cout << "13\nR";
    }
    else if (Question_Number == 13) {
        double Pi = 3.141593;
        double Cube_Edge_length = pow((4256 * Pi) / 3, 1.0 / 3);
        std::cout << std::fixed << std::setprecision(0) << Cube_Edge_length << std::endl;   //熟悉吧
    }

    else if (Question_Number == 14) {
        std::cout << 50 << std::endl;
    }
}