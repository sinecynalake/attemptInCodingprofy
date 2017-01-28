/* Перед тем как ты станешь ломать Пентагон силой мысли,
 * давай уточним, почему ты изучаешь именно С++.
 * 
 * Думаю, ты уже знаешь, что компьютер воспринимает
 * исключительно двоичные команды
 *
 * Вот отрывок реальной программы: 
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
 * Ну и что я должен тут понять? - спросишь ты.
 * Да ничего :)
 * Так программы писали в самом начале эры компьютеров.
 * Прямо в двоичных кодах.
 *
 * На замену им пришёл язык Ассемблера:
 * SECTION .data
 * msg: db "Hello, world",10
 * len: equ $-msg
 *
 *  SECTION .text
 *  global _start
 *  _start: mov edx, len
 *          mov ecx, msg
 *          mov ebx, 1
 *          mov eax, 4
 *          int 0x80
 *
 *          mov ebx, 0
 *          mov eax, 1    
 *          int 0x80
 *
 * Что-то более приятное взгляду, не так ли?
 * Но это те же самые машинные коды, заменённые на слова.
 * Для создания сложных программ этого всё ещё было
 * не достаточно. 
 *
 * Годами программы становились сложнее.
 * Языки программирования эволюционировали, а также
 * появлялись новые.
 *
 * Мир увидел язык Си (1973 г.), созданный Деннисом Ритчи,
 * а затем (1983 г.) Бьярн Страуструп разработал его 
 * объектно ориентированную версию - С++.
 *
 * (О том, что такое Объектно-Ориентированное
 *  Программирование пока не думай) 
 *
 * И так, пример программы на С++: */

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}

/* Да уж, это уже выглядит нормально - скорее всего
 * подумаешь ты. И будешь прав :)
 *
 * Итак, С++ это результат эволюции машинных кодов
 * в "нечто читаемое". Хочу заметить, что язык
 * "компилируемый". Написанная программа обязана
 * перед выполнением проходит этап компиляции.
 * Это процесс преобразования "читаемого кода" в язык
 * ассемблера, который уже выполнятеся процессором.
 * То есть мы пишем программу не думая об операциях,
 * которые будет выполнять процессор. Нас интересует 
 * результат. Но, в то же время, компьютер нас не
 * понимает, и код преобразуется в машинный с помощью
 * компилятора. 
 * Ясненько?
 * Надеюсь, что да :) 
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
 */
