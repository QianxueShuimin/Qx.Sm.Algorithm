#pragma once

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

//��Ŀ˳��Ϊ��ȵ�ѵ���ⵥ
void B2002() {
	std::cout << "Hello,World!" << std::endl;   //ʹ�� cout ��� Hello,World! ������
}

void B2025() {
    //��Ҫ�������ע��ո���
    std::cout << "  *" << std::endl;
    std::cout << " ***" << std::endl;
    std::cout << "*****" << std::endl;
    std::cout << " ***" << std::endl;
    std::cout << "  *" << std::endl;
}

void P1000() {
    //��Ȼ�Ǹ�����������û�취�ˣ�����()
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
    int a, b; //����������������(int) a �� b
    std::cin >> a >> b; //ʹ�� cin ��ȡ�����ֵ���� a �� b ���и�ֵ
    std::cout << a + b << std::endl;    // ʹ�� cout ������� a + b �Ľ��
}

void B2005() {
    char i; //����һ���ַ����͵ı��� i �����洢�ַ�

    std::cin >> i;  //ʹ�� cin ��ȡ�����ֵ���� i ��ֵ

    //��Ҫ�����
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

    std::cout << char(i - 32) << std::endl; //�ο�ASCII����ձ�������Сд��ĸ��ֵ�� i ʱ����ȥ32�����Ϊ��д��ĸ
}

void P5705() {
    char a, b, c, d, e; 

    std::cin >> a >> b >> c >> d >> e;  

    std::cout << e << d << c << b << a << std::endl;    //���洢����ĸ������ʵ�ַ�ת
}

void P5706() {
    double f = 0;   //���Ǹ���������������С���㻹�� char ������㲻����
    int i = 0;

    std::cin >> f >> i;

    /*
    * ʹ��ͷ�ļ�Ϊ iomanip
    * ʹ�� fixed ���ڣ���ѧ�������Ѿ���ʧ��������ʹ��С���㣡
    * ʹ�� setprecision() ������ setprecision(x) ��������������xλ��Ч����
    */
    std::cout << std::fixed << std::setprecision(3) << f / i << std::endl;  
    std::cout << i * 2 << std::endl;
}

void P5708() {
    double a, b, c = 0;

    std::cin >> a >> b >> c;

    double p = (a + b + c) / 2;

    /*
    * ���ڣ�������ʹ�ø���(sqrt)��
    * ʹ��ͷ�ļ�Ϊ cmath
    */
    double i = sqrt(p * (p - a) * (p - b) * (p - c));

    std::cout << std::fixed << std::setprecision(1) << i << std::endl;
}

void P5707() {
    //�ó������ҵ���ΪʲôҪ���ҵ�����Ӣ������������
    double s, v;
    std::cin >> s >> v;

    int i = 470;
    
    /*
    * ʹ�� ceil(xxx) �����ǽ� xxx ����ȡ����
    * ʹ�� static_cast<int> ��Ҫǿ�ƽ�������(double)�������(int)~
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

    std::cout << floor((a + (b / 10)) / 1.9) << std::endl; //floor �� ceil �Ƿ������ģ�ǰ��������ȡ��������������ȡ��
}

void P3954() {
    double a, b, c;
    std::cin >> a >> b >> c;

    std::cout << (a * 0.2) + (b * 0.3) + (c * 0.5) << std::endl;
}

void P2433() {
    int Question_Number = 0;
    std::cin >> Question_Number;    //�ж��㷨Ҫ��ʲô()

    if (Question_Number == 1) {
        std::cout << "I love Luogu!" << std::endl;
    }
    else if (Question_Number == 2) {
        std::cout << "6 4" << std::endl;    //ע��ո�
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
        std::cout << "110\n" << "90\n" << "0\n";    //����\n
    }
    else if (Question_Number == 8) {
        //СС��ѧ������
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
        std::cout << std::fixed << std::setprecision(0) << Cube_Edge_length << std::endl;   //��Ϥ��
    }

    else if (Question_Number == 14) {
        std::cout << 50 << std::endl;
    }
}