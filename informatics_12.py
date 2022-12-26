# подключение нужных библиотек:
import random
import string


if __name__ == "__main__":
    while True:  # Проверка вводимых значений
        try:
            M = input("Введите размер квадратной матрицы M (только целые числа из диапазона [2,5]): ")
        except:
            print("Неверный ввод, можно вводить только целые числа из диапазона [2,5]")
        else:
            if M.isdigit() and 2 <= int(M) <= 5:
                break
            else:
                print("Неверный ввод, можно вводить только целые числа из диапазона [2,5]")
    M = int(M)  # изменяем тип переменной M на целое число

    while True:  # Проверка вводимых значений
        try:
            print("Введите: \n"
                  "1 - если хотите сгенерировать матрицу случайно \n"
                  "2 - для ручного ввода матрицы")
            type_generation = input()
        except:
            print("Неверный ввод, можно вводить только числа 1 и 2")
        else:
            if type_generation.isdigit() and int(type_generation) in (1, 2):
                break
            else:
                print("Неверный ввод, можно вводить только числа 1 и 2")
    type_generation = int(type_generation)  # изменяем тип переменной type_generation на целое число

    matrix = []  # создаём пустой список matrix

    if type_generation == 1:  # если пользователь выбрал 1 (автаматический ввод)
        for i in range(M):  # цикл, перебирающий все номера строк матрицы (с 0 до M - 1)
            matrix_string = []  # создаём пустой список matrix_string одной из строк матрицы
            for j in range(M):  # цикл, перебирающий все номера столбцов матрицы (с 0 до M - 1)
                # в массив matrix_string добавляем случайно сгенерированную, с помощи функции random.choice, строку длинной 4:
                matrix_string.append("".join(random.choice(string.ascii_lowercase) for k in range(4)))
            matrix.append(matrix_string)  # в массив matrix добавляем массив matrix_string
    if type_generation == 2:  # если пользователь выбрал 2 (пользовательский ввод матрицы)
        for i in range(M):  # цикл, перебирающий все номера строк матрицы (с 0 до M - 1)
            matrix_string = []  # создаём пустой список matrix_string одной из строк матрицы
            for j in range(M):  # цикл, перебирающий все номера столбцов матрицы (с 0 до M - 1)
                while True:  # Проверка вводимых значений
                    try:
                        word = input(f"Введите слово из 4 букв, которое будет находится в {i + 1} строке и {j + 1} столбце матрицы: ")
                    except:
                        print("Неверный ввод, можно вводить только латинские четырёхбуквенные слова")
                    else:
                        if word.isascii() and word.isalpha() and len(word) == 4:
                            break
                        else:
                            print("Неверный ввод, можно вводить только латинские четырёхбуквенные слова")
                matrix_string.append(word)  # в массив matrix_string добавляем сгенерированную пользователем строку длинной 4:
            matrix.append(matrix_string)  # в массив matrix добавляем массив matrix_string

    for i in range(M):  # цикл, перебирающий все номера строк матрицы (с 0 до M - 1)
        print('|', end=' ')  # выводим текст
        for j in range(M):  # цикл, перебирающий все номера столбцов матрицы (с 0 до M - 1)
            print(matrix[i][j], end=" | ")  # выводим элементы матрицы, разделяя пробелом
        print()  # выводим пробел

    result_array = []  # создаём пустой список result_array
    vowels = ("a", "e", "i", "o", "u", "y")  # создаем список гласных букв vowels
    for i in matrix:  # цикл, проходящий по строкам матрицы
        for j in i:  # цикл, проходящий по строкам элементам строк матрицы
            total = 0  # присваиваем значение 0 переменной total
            for s in j:  # цикл, проходящий по входной строке
                if s in vowels:  # если буква входной строки есть в списке гласных букв
                    total += 1  # увеличиваем результат подсчёта гласных букв total на 1
            result_array.append(total)  # добавляем в массив result_array количество гласных букв в каждом элементе матрицы total

    result_array.sort()  # сортируем массив result_array по возрастанию

    print(result_array)  # вывдим массив result_array
