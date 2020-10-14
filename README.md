# Effective C++ 阅读笔记

[![time tracker](https://wakatime.com/badge/github/XiaotaoGuo/Effective-Cpp-Reading-Note.svg)](https://wakatime.com/badge/github/XiaotaoGuo/Effective-Cpp-Reading-Note) ![Hex.pm](https://img.shields.io/hexpm/l/plug?color=ff0000)

[*Effective C++ 第三版*](https://books.google.com/books/about/Effective_C++.html?id=eQq9AQAAQBAJ) 主要讲述在使用 C++ 的过程中需要注意的 55 条规则，对 C++ 的初学者和使用时间不长的读者都有一定的借鉴意义。这里我将我在阅读过程中的一些笔记记录下来以供以后参考，并将阅读过程搭配使用的可运行代码也一并附上以便更清楚的理解条款的寒意以及应用场景。同时，由于该书出版时间比较久远，有些标准已经发生了变化，因此也会附上目前标准的一些例子，欢迎有兴趣的读者进行补充！

| 序号 | 条款 | 代码 |
|:---| :---| :---|
||[**让自己习惯 C++**](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/1.AccustomingYourselfToCpp)||
|01|[视 C++ 为一个语言联邦](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/1.AccustomingYourselfToCpp/01.ViewCppAsAFerderationOfLanguages.md)||
|02|[尽量以 const，enum，inline 替换 #define](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/1.AccustomingYourselfToCpp/02.PreferConstsEnumsInlinesToDefine.md)|[code02](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/02.PreferConstsEnumsInlineToDefine)|
|03|[尽可能使用 const](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/1.AccustomingYourselfToCpp/03.UseConstWheneverPossible.md)|[code03](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/03.UseConstWheneverPossible)|
|04|[确定对象被使用前已被初始化](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/1.AccustomingYourselfToCpp/04.MakeSureThatObjectsAreInitilizedBeforeTheyAreUsed.md)|[code04](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/04.MakeSureThatObjectsAreInitilizedBeforeTheyAreUsed)|
||[**构造/析构/赋值运算**](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/2.ConstructorsDestructorsAndAssignmentOperation)||
|05|[了解 C++ 静默编写和调用的函数](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/2.ConstructorsDestructorsAndAssignmentOperation/05.KnowWhatFunctionsCppSilentlyWritesAndCalls.md)|[code05](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/05.KnowWhatFunctionsCppSilentlyWritesAndCalls)|
|06|[明确拒绝你不想使用的编译器自动生成的函数](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/2.ConstructorsDestructorsAndAssignmentOperation/06.Explicitly-disallow-the-use-of-compiler-generated-functions-you-do-not-want.md)|[code06](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/06.Explicitly-disallow-the-use-of-compiler-generated-functions-you-do-not-want)|
|07|[为多态基类声明 virtual 析构函数](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/2.ConstructorsDestructorsAndAssignmentOperation/07.Declare-destructors-virtual-in-polymorphic-base-classes.md)|[code07](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/07.Declare-destructors-virtual-in-polymorphic-base-classes)|
|08|[不要在析构函数中抛出异常](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/2.ConstructorsDestructorsAndAssignmentOperation/08.PreventExceptionsFromLeavingDestructors.md)|[code08](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/08.PreventExceptionsFromLeavingDestructors)|
|09|[不要在构造和析构过程中调用 virtual 函数](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/2.ConstructorsDestructorsAndAssignmentOperation/09.NeverCallVirtualFunctionsDuringConstructionOrDestruction.md)|[code09](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/09.NeverCallVirtualFunctionsDuringConstructionOrDestruction)|
|10|[令 `operator=` 返回一个 `*this` 的引用](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/2.ConstructorsDestructorsAndAssignmentOperation/10.HaveAssignmentOperatorsReturnAReferenceToThis.md)|[code10](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/10.HaveAssignmentOperatorsReturnAReferenceToThis)|
|11|[在 `operator=` 中处理自我赋值](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/2.ConstructorsDestructorsAndAssignmentOperation/11.HandleAssignmentToSelfInOperatorEqual.md)|[code11](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/11.HandleAssignmentToSelfInOperatorEqual)|
|12|[复制对象时确保复制其一个成员](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/2.ConstructorsDestructorsAndAssignmentOperation/12.CopyAllPartsOfAnObject.md)|[code12](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/12.CopyAllPartsOfAnObject)|
||[**资源管理**](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/3.ResourceManagement)||
|13|[使用对象管理资源](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/3.ResourceManagement/13.UseObjectsToManageResources.md)|[code13](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/13.UseObjectsToManageResources)|
|14|[在资源管理类中小心 copy 行为](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/blob/master/3.ResourceManagement/14.ThinkCarefullyAboutBehaviorInResourceManagingClasses.md)|[code14](https://github.com/XiaotaoGuo/Effective-Cpp-Reading-Note/tree/master/PracticeCode/14.ThinkCarefullyAboutBehaviorInResourceManagingClasses)|

To be continue...
