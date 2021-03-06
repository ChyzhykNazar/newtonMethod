# newtonMethod
📖Educational project, where presented equation solution using newton method.

📖Навчальний проект, де представлено розв'язок рівняння за допомогою метода Ньютона

# Українська версія(Ukrainian version)

На відміну від методу хорд, в методі Ньютона функція f(x) замінюється на
дотичну і наближення до кореня рівняння визначається точкою перетину дотичної з
віссю ОХ.
Рівняння дотичної має вид:

![](https://github.com/ChyzhykNazar/newtonMethod/blob/7431dcd544e7fa8f379273d5db5ff7830783fcc3/images/%231.png)

З геометричної точки зору x(n+1) є значенням абсциси точки перетину дотичної до
кривої y=f(x) в точці x(n), f(x(n))) з віссю абсцис. Тому метод Ньютона називають також
методом дотичних.
Теорема 1. Якщо f(x) Є С²[a,b], f(a)*f(b) < 0, f"(x) не змінює знак на [a,b], то
виходячи з початкового наближення xˇ0 Є [a,b] , що задовольняє умові f(x0)*f"(x0)>0,
можна обчислити методом Ньютона єдиний корінь x(*) рівняння (1) з будь-яким
степенем точності.
Очевидно, що точка перетину дотичної з віссю ОХ, яка визначає перше наближення до
кореня, знаходиться по формулі:

![](https://github.com/ChyzhykNazar/newtonMethod/blob/7431dcd544e7fa8f379273d5db5ff7830783fcc3/images/%232.png)

У точці x(1) проводиться ще одна дотична і знаходиться точка її перетину з віссю ОХ (див. рис. 3.2).

![](https://github.com/ChyzhykNazar/newtonMethod/blob/7431dcd544e7fa8f379273d5db5ff7830783fcc3/images/%233.png)

Таким чином, наступні наближення розраховуються по формулі:

![](https://github.com/ChyzhykNazar/newtonMethod/blob/7431dcd544e7fa8f379273d5db5ff7830783fcc3/images/%234.png)

В основі цього методу лежить розкладання функції в ряд Тейлора

![](https://github.com/ChyzhykNazar/newtonMethod/blob/7431dcd544e7fa8f379273d5db5ff7830783fcc3/images/%235.png)

Члени, що містять h у другому і більших степенях, відкидаються і в результаті
отримується наведена вище наближена формула для оцінки x(n+1) .
Метод завершує роботу тоді, коли відстань між двома останніми точками не стане
менше за необхідну точність e.

Для збіжності алгоритму необхідно, щоб функція f(x) була монотонна та опукла
(ввігнута) на відрізку [a,b]. Коли в процесі обчислень кут нахилу дотичної f'(x)
перетворюється на нуль, застосування цього методу ускладняється. Можна також
показати, що у випадку дуже великих значень f"(x) чи кратних коренів метод Ньютона
стає неефективним.
Початкове наближення слід вибирати за формулою:

![](https://github.com/ChyzhykNazar/newtonMethod/blob/7431dcd544e7fa8f379273d5db5ff7830783fcc3/images/%236.png)

Як і в методі хорд, при програмній реалізації методу необхідно запам’ятовувати лише дві останні точки наближення.

![](https://github.com/ChyzhykNazar/newtonMethod/blob/7431dcd544e7fa8f379273d5db5ff7830783fcc3/images/%237.png)
