# Оценка 3

Проверка текущей ветки и состояния репозитория (`git status`):

![alt text](/laba9_git/image.png)

Просмотр истории коммитов (`git log`):

![alt text](/laba9_git/image-1.png)

Создание файла `sort.c` с функцией сортировки, проверка статуса и добавление в индекс (`git add sort.c`):

![alt text](/laba9_git/image-2.png)

Проверка статуса после индексации и первый коммит файла `sort.c`:

![alt text](/laba9_git/image-3.png)

Проверка статуса и добавление первого комментария в `sort.c`:

![alt text](/laba9_git/image-4.png)

Проверка статуса изменённого файла и его индексация (`git add sort.c`):

![alt text](/laba9_git/image-5.png)

Повторное изменение файла `sort.c` и коммит первой проиндексированной версии:

![alt text](/laba9_git/image-6.png)

Проверка статуса (`git status`) — в файле осталась неиндексированная правка:

![alt text](/laba9_git/image-7.png)

Просмотр журнала коммитов (`git log`):

![alt text](/laba9_git/image-8.png)

Индексация и коммит последнего изменения в `sort.c`:

![alt text](/laba9_git/image-9.png)

Отправка изменений на удалённый репозиторий (`git push`):

![alt text](/laba9_git/image-10.png)

### Ветки

Создание новой ветки `mybranch`, проверка списка веток и переключение на неё (`git switch mybranch`):

![alt text](/laba9_git/image-11.png)

Проверка `git status` и текущей активной ветки (`git branch`):

![alt text](/laba9_git/image-12.png)

Создание файла `file1.txt` со своим именем, коммит и просмотр графа коммитов:

![alt text](/laba9_git/image-13.png)

Проверка графа истории и возврат на ветку `main`:

![alt text](/laba9_git/image-14.png)

Просмотр истории на ветке `main`, создание и коммит файла `file2.txt`:

![alt text](/laba9_git/image-15.png)

Просмотр общего графа всех веток (`git log --oneline --graph --all`) — ветки `main` и `mybranch` указывают на разные коммиты:

![alt text](/laba9_git/image-16.png)

# Оценка 4

Добавление функции `main()` в `sort.c` и просмотр изменений (`git diff`):

![alt text](/laba9_git/image-17.png)

Проверка `git diff --staged`, индексация `sort.c` и повторный `git diff`:

![alt text](/laba9_git/image-18.png)

Просмотр проиндексированных изменений (`git diff --staged`):

![alt text](/laba9_git/image-19.png)

Удаление числа из массива в `sort.c` и просмотр неиндексированной разницы (`git diff`):

![alt text](/laba9_git/image-20.png)

Проверка проиндексированной версии (`git diff --staged`):

![alt text](/laba9_git/image-21.png)

Проверка `git status` — `sort.c` отображается и в индексе, и в неиндексированных изменениях:

![alt text](/laba9_git/image-22.png)

Отмена индексации (`git restore --staged sort.c`) и проверка `git status`:

![alt text](/laba9_git/image-23.png)

Индексация и коммит `sort.c`, просмотр короткого журнала (`git log --oneline`):

![alt text](/laba9_git/image-24.png)

Добавление `printf("hello git\n");` в `sort.c` и проверка содержимого (`cat sort.c`):

![alt text](/laba9_git/image-25.png)

Проверка статуса (`git status`) перед откатом изменений:

![alt text](/laba9_git/image-26.png)

Отмена локальных изменений (`git restore sort.c`) и проверка содержимого (`cat sort.c`):

![alt text](/laba9_git/image-27.png)

Проверка `git status` после отката и отправка ветки `mybranch`:

![alt text](/laba9_git/image-28.png)

### Ветки и ff-merge

Отправка `mybranch`, создание и коммит `greeting.txt` на ветке `main`, создание ветки `feature/uppercase` и переключение на неё:

![alt text](/laba9_git/image-29.png)

Проверка статуса (`git status`) на ветке `feature/uppercase`:

![alt text](/laba9_git/image-30.png)

Изменение `greeting.txt` на верхний регистр (`HELLO`), коммит и просмотр веток (`git branch`):

![alt text](/laba9_git/image-31.png)

Просмотр графа всех веток (`git log --oneline --graph --all`):

![alt text](/laba9_git/image-32.png)

Переключение на `main`, сравнение веток, fast-forward слияние `feature/uppercase`, её удаление и слияние `mybranch` в `main`:

![alt text](/laba9_git/image-33.png)

Итоговый граф истории коммитов после слияния (`git log --oneline --graph --all`):

![alt text](/laba9_git/image-34.png)

Отправка всех изменений ветки `main` на GitHub (`git push origin main`):

![alt text](/laba9_git/image-35.png)