/* Перед тем как ты станешь ломать Пентагон силой мысли,
 * давай уточним, почему ты изучаешь именно С++.
 * 
 * Наверняка тебе известно, что компьютер понимает
 * исключительно двоичный код.
 *
 * Вот пример реальной программы: 
 * 00000000000100000001
 * 00000000000011000000
 * 00000000000100000001
 * 00000000000010000000
 * 00000000000100000110
 * 00000000000010010000
 * 00000000000000000110
 * 00001000000010100000
 * 00000000000000000001
 * 00000000000000100110
 * 00010011000010110000
 * 00000000000000100001
 * 00000000000000110110
 * 00000010000011100000
 * 00000000000001100001
 * 00000000000001000110
 * 00001101100000000000
 * 10000000000000000011
 * 11100000000000000000
 * 
 * - Ну и что я должен тут понять?
 * - Да ничего :)
 * Так программы писали в самом начале эры компьютеров.
 * Прямо в двоичных кодах.
 *
 * На замену им пришёл язык Ассемблера:
 * SECTION .data
 * msg: db "Hello, world",10
 * len: equ $-msg
 *
 * SECTION .text
 * global _start
 * _start: mov edx, len
 *         mov ecx, msg
 *         mov ebx, 1
 *         mov eax, 4
 *         int 0x80
 *
 *         mov ebx, 0
 *         mov eax, 1    
 *         int 0x80
 *
 * Что-то более приятное взгляду, не так ли?
 * Но это те же самые машинные коды, заменённые на лексемы.
 * Писать действительно большие программы на языке
 * ассемблера было всё ещё очень сложно.
 *
 * Но прогресс не стоял на месте. Старые языки
 * программирования совершенствовались, а к ним на смену
 * приходили новые.
 *
 * В 1973 г. мир увидел язык Си (автор Деннисом Ритчи),
 * а спустя 10 лет Бьярн Страуструп разработал его 
 * объектно ориентированную версию - С++.
 *
 * (О том, что такое Объектно-Ориентированное
 *  Программирование пока не думай) 
 *
 * Наконец, пример программы на С++: */

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}

/* - Да уж, это уже выглядит нормально!
 *
 * C++ автоматически выполнят множество низкоуровневых
 * команд, которые ранее приходилось писать вручную, что
 * позволяет программисту "не забивать голову лишним",
 * а так же значительно улучшает читаемость программ.
 * Однако, если это необходимо, программист может
 * работать с низкоуровневыми операциями напрямую.
 *
 * Нельзя не уточнить, что С++ является компилируемым
 * языком. Перед непосредственным выполнением программы
 * она проверяется на ошибки, и преобразуется в машинные
 * коды в случае их отсутствия. Выполнение программы,
 * написанной на компилируемом языке происходит максимально
 * быстро, а вот скорость компиляции очень зависит от 
 * размера программы. 
 *
 * Перед тем, как начать разбор программы, хочу уточнить
 * что текст между слэшем-звёздочкой и звёздочкой-слэшем */

/* является
 *         многострочным
 *                      комментарием */

/* Дополнительные звёздочки, это просто хороший тон, 
 * они не обязательны.
 * Так же текст после двух слэшей, это */

// Однострочный комментарий 

/* - Погоди-ка, вы написали кучу теории в комментариях к
 * программе!?
 * - дЫа :D 
 *
 * Вернёмся к нашей программе: */

#include <iostream> // это инструкция для сборщика

/* которая говорит ему о необходимости добавить в 
 * программу библиотеку ввода-вывода данных.
 *(InputOutputSTREAM) */

using namespace std; // используем стандартное пространство
                     // имён

/* Пространства имён нужны для того, чтобы избежать
 * конфликтов имён. Например, две библиотеки имеют
 * функцию с одинаковым названием. Какую компилятор 
 * должен выбрать? Но в базовом курсе тебе не 
 * придётся сталкиваться с иным пространством имён, 
 * кроме std. Поэтому просто запомни эту строку :) */

int main() {
    // твой код;
    return 0;
}

/* Перед тобой главная функция.
 * С++ начинает выполнение любой программы именно с неё.
 * int - он же integer, говорит о том, что функция при
 * завершении работы вернёт целое число вызывающей
 * программе. А return 0; как раз и есть этот "возврат".
 * 0 во Операционных Системах (далее ОС) означает, что
 * программа завершила работу без ошибок. В случае
 * возникновения проблем, вместо нуля будет возвращён
 * код ошибки. */

cout << "Hello, world!" << endl;

/* В данной строке идёт работа с выводом данных.
 * cout (Console OUT) пишет на экран полученное значение.
 * В данном случае это строка. END Line переводит курсор
 * на следующую строку. 
 *
 * Если ты ещё тут? Если да, поздравляю :)
 * Теперь ты понимаешь, как работает простая программа.
 * Такое количество теории не нужно будет разбирать каждый
 * раз. На протяжении достаточно долгого времени весь твой
 * код будет сосредоточен */

#include <iostream>

using namespace std;

int main() {
    // *вот тут*;
    return 0;
}

/* И теперь для тебя это не просто непонятные слова :)
 * (можешь скопировать себе шаблон)
 * Не теряй ; и {} и будет тебе счастье. До встречи в 
 * главе 2! <ссылка>
 * */
