# Effective C++ 阅读笔记

[*Effective C++ 第三版*](https://books.google.com/books/about/Effective_C++.html?id=eQq9AQAAQBAJ) 主要讲述在使用 C++ 的过程中需要注意的 55 条规则，对 C++ 的初学者和使用时间补偿的读者都有一定的借鉴意义。这里我将我在阅读过程中的一些笔记记录下来以供以后参考，并将阅读过程搭配使用的可运行代码也一并附上以便更清楚的理解条款的寒意以及应用场景。同时，由于该书出版时间已有一定年头，有些标准已经发生了变化，因此也会附上目前标准的一些例子，欢迎有兴趣的读者进行补充！

| 序号 | 条款 | 代码 |
|:---| :---| :---|
||[**让自己习惯 C++**](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/1.AccustomingYourselfToCpp)||
|01|[视 C++ 为一个语言联邦](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/1.AccustomingYourselfToCpp/01.ViewCppAsAFerderationOfLanguages.md)||
|02|[尽量以 const，enum，inline 替换 #define](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/1.AccustomingYourselfToCpp/02.PreferConstsEnumsInlinesToDefine.md)|[code02](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/02.PreferConstsEnumsInlineToDefine)|
|03|[尽可能使用 const](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/1.AccustomingYourselfToCpp/03.UseConstWheneverPossible.md)|[code03](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/03.UseConstWheneverPossible)|
|04|[确定对象被使用前已被初始化](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/1.AccustomingYourselfToCpp/04.MakeSureThatObjectsAreInitilizedBeforeTheyAreUsed.md)|[code04](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/04.MakeSureThatObjectsAreInitilizedBeforeTheyAreUsed)|
||**构造/析构/赋值运算**||