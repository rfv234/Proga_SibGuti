# Оценка 3

Проверка текущей ветки и состояния репозитория (`git status`):

![alt text](image.png)

Просмотр истории коммитов (`git log`):

![alt text](image-1.png)

Создание файла `sort.c` с функцией сортировки, проверка статуса и добавление в индекс (`git add sort.c`):

![alt text](image-2.png)

Проверка статуса после индексации и первый коммит файла `sort.c`:

![alt text](image-3.png)

Проверка статуса и добавление первого комментария в `sort.c`:

![alt text](image-4.png)

Проверка статуса изменённого файла и его индексация (`git add sort.c`):

![alt text](image-5.png)

Повторное изменение файла `sort.c` и коммит первой проиндексированной версии:

![alt text](image-6.png)

Проверка статуса (`git status`) — в файле осталась неиндексированная правка:

![alt text](image-7.png)

Просмотр журнала коммитов (`git log`):

![alt text](image-8.png)

Индексация и коммит последнего изменения в `sort.c`:

![alt text](image-9.png)

Отправка изменений на удалённый репозиторий (`git push`):

![alt text](image-10.png)

### Ветки

Создание новой ветки `mybranch`, проверка списка веток и переключение на неё (`git switch mybranch`):

![alt text](image-11.png)

Проверка `git status` и текущей активной ветки (`git branch`):

![alt text](image-12.png)

Создание файла `file1.txt` со своим именем, коммит и просмотр графа коммитов:

![alt text](image-13.png)

Проверка графа истории и возврат на ветку `main`:

![alt text](image-14.png)

Просмотр истории на ветке `main`, создание и коммит файла `file2.txt`:

![alt text](image-15.png)

Просмотр общего графа всех веток (`git log --oneline --graph --all`) — ветки `main` и `mybranch` указывают на разные коммиты:

![alt text](image-16.png)