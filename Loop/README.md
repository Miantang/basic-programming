###LOOP
=====================

####[循环-04. 验证“哥德巴赫猜想”(20)](http://www.patest.cn/contests/basic-programming/%E5%BE%AA%E7%8E%AF-04)

很简单。

封装isPrime判断是否素数。

关键是20亿以内，用int应该是不可行。（但是0J能过）

测试知：32位linux 系统INT_MAX是 (2^31-1) 

#####[climits](http://www.cplusplus.com/reference/climits/)

32767 (2^15-1)

2147483647 (2^31-1) 

####[循环-06. 统计一行文本的单词个数(15)](http://www.patest.cn/contests/basic-programming/%E5%BE%AA%E7%8E%AF-06)

递归解法。

统计单词个数，可以是统计空格组个数。
有四种情况(空格：- ，单词：W)：

（W-W） (W-W-) (-W-W) (-W-W-)

分割计数函数split(inText)：

- 每次执行前，先去除开头的空格，保证第一个是W ==> 两种情况（W-W） (W-W-)
- find第一个空格。inText.substr包括空格之后的所有内容。
- 最后剩下没有空格的inText == W 或者为空，是W (!inText.empty()) 就需要再添加一个count。

**正则解法**

关键在于正则匹配，一个或者多个连续空格(\\s+) ？

关键函数：
```c++
bool regex_search (const basic_string<charT,ST,SA>& s,
          match_results<typename basic_string<charT,ST,SA>::const_iterator,Alloc>& m,
          const basic_regex<charT,traits>& rgx,
          regex_constants::match_flag_type flags = regex_constants::match_default);
```

####[循环-08. 二分法求多项式单根(20)](http://www.patest.cn/contests/basic-programming/%E5%BE%AA%E7%8E%AF-08)

**关键思想： 二分法。**

不断缩小检索区间，当区间小于阀值（模糊可认为固定在某个值）则退出。

输出该点的值。

####[循环-15. 统计素数并求和(20)](http://www.patest.cn/contests/basic-programming/%E5%BE%AA%E7%8E%AF-15)

简单说就是一个循环，判断是否素数-->是素数+1，并累加。

注意边界条件 i = 1

####[循环-18. 龟兔赛跑(20)](http://www.patest.cn/contests/basic-programming/%E5%BE%AA%E7%8E%AF-18)

兔子有两种三种状态：(vRabbit = 9, isRest = false, rest=0) (vRabbit = 0, isRest = true, rest\[0-29\])  (vRabbit = 0, isRest = false, rest=0)(此乃边界) 

每跑完十分钟，兔子判定一次。

####[循环-19. 币值转换(20)](http://www.patest.cn/contests/basic-programming/%E5%BE%AA%E7%8E%AF-19)

一种解法是，先将数字无脑全部转换成字母，然后在后面插入对应的量级，最后按中文阅读习惯酌情删除不该出现组合。

注意的边界条件是：十万和十开头的， 最后全为0的，0后接的量级。

