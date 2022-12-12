# подключение нужных библиотек:
import random
import string
from typing import List


def vowels_counting(input_string: str) -> int:
    """Подсчёт количества глассных букв в строке"""
    vowels = ("a", "e", "i", "o", "u", "y")  # создаем список гласных букв vowels
    total = 0  # присваиваем значение 0 переменной total
    for s in input_string:  # цикл, проходящий по входной строке
        if s in vowels:  # если буква входной строки есть в списке гласных букв
            total += 1  # увеличиваем результат подсчёта гласных букв total на 1
    return total  # возвращаем из функции подсчитанное количество гласных букв total


def generate_random_matrix(size: int) -> List[List[str]]:
    """Автоматическая генерация матрицы"""
    result_matrix = []  # создаём пустой список result_matrix искомой матрицы
    for i in range(size):  # цикл, перебирающий все номера строк матрицы (с 0 до M - 1)
        matrix_string = []  # создаём пустой список matrix_string одной из строк матрицы
        for j in range(size):  # цикл, перебирающий все номера столбцов матрицы (с 0 до M - 1)
            # в массив matrix_string добавляем случайно сгенерированную, с помощи функции random.choice, строку длинной 4:
            matrix_string.append("".join(random.choice(string.ascii_lowercase) for k in range(4)))
        result_matrix.append(matrix_string)  # в массив result_matrix добавляем массив matrix_string
    return result_matrix  # выводим сформированную случайно матрицу result_matrix


def input_matrix(size: int) -> List[List[str]]:
    """Ввод матрицы пользователем"""
    result_matrix = []  # создаём пустой список result_matrix искомой матрицы
    for i in range(size):  # цикл, перебирающий все номера строк матрицы (с 0 до M - 1)
        matrix_string = []  # создаём пустой список matrix_string одной из строк матрицы
        for j in range(size):  # цикл, перебирающий все номера столбцов матрицы (с 0 до M - 1)
            print(f"Введите слово из 4 букв, которое будет находится в {i + 1} строке и {j + 1} столбце матрицы")  # выводим текст
            word = input()  # считываем переменную word
            while not word.isalpha() or len(word) != 4:  # пока word это не строка или длинна word отличается от 4
                print("Неверный ввод, можно вводить только четырёхбуквенные слова")  # выводим текст
                word = input()  # заново считываем переменную word
            matrix_string.append(word)  # в массив matrix_string добавляем сгенерированную пользователем строку длинной 4:
        result_matrix.append(matrix_string)  # в массив result_matrix добавляем массив matrix_string
    return result_matrix  # выводим сформированную пользователем матрицу result_matrix


def printing_matrix(inp_matrix: List[List[str]]) -> None:
    """Вывод матрицы"""
    for i in range(len(inp_matrix)):  # цикл, перебирающий все номера строк матрицы (с 0 до M - 1)
        print('|', end=' ')  # выводим текст
        for j in range(len(inp_matrix[i])):  # цикл, перебирающий все номера столбцов матрицы (с 0 до M - 1)
            print(inp_matrix[i][j], end=" | ")  # выводим элементы матрицы, разделяя пробелом
        print()  # выводим пробел


if __name__ == "__main__":
    print("Введите размер квадратной матрицы M (только целые числа из диапазона [2,5])")  # выводим текст
    M = input()  # считываем переменную M
    while not M.isdigit() or int(M) < 2 or int(M) > 5:  # пока M это не целое число или не лежит в отрезке от 2 до 5
        print("Неверный ввод, можно вводить только целые числа из диапазона [2,5]")  # выводим текст
        M = input()  # заново считываем переменную M
    M = int(M)  # изменяем тип переменной M на целое число

    # выводим текст:
    print("Введите: \n"
          "1 - если хотите сгенерировать матрицу случайно \n"
          "2 - для ручного ввода матрицы")
    type_generation = input()  # считываем переменную type_generation
    while not type_generation.isdigit() or int(type_generation) not in (1, 2):  # пока type_generation это не целое число 1 или 2
        print("Неверный ввод, можно вводить только числа 1 и 2")  # выводим текст
        type_generation = input()  # заново считываем переменную type_generation
    type_generation = int(type_generation)  # изменяем тип переменной type_generation на целое число

    matrix = []  # создаём пустой список matrix

    if type_generation == 1:  # если пользователь выбрал 1 (автаматический ввод)
        matrix = generate_random_matrix(M)  # вызываем функцию автоматической генерации матрицы generate_random_matrix
    if type_generation == 2:  # если пользователь выбрал 2 (пользовательский ввод матрицы)
        matrix = input_matrix(M)  # вызываем функцию пользовательского ввода матрицы input_matrix

    printing_matrix(matrix)  # вызываем функцию печати матрицы printing_matrix

    result_array = []  # создаём пустой список result_array
    for i in matrix:  # цикл, проходящий по строкам матрицы
        for j in i:  # цикл, проходящий по строкам элементам строк матрицы
            result_array.append(vowels_counting(j))  # добавляем в массив result_array количество гласных букв в каждом элементе матрицы

    result_array.sort()  # сортируем массив result_array по возрастанию

    print(result_array)  # вывдим массив result_array
