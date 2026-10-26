# 01. Первый Pipeline на CI в GitHub Actions

Простейший workflow GitHub Actions: выводит приветствие при каждом push.

## Задание

Источник: [content/DevOps/CI_CD/Pipelines/hello.md](https://gitflic.ru/project/rurewa/mfua/blob?file=content/DevOps/CI_CD/Pipelines/hello.md&branch=master)
Отдельный репозиторий: [rampant2000/first-cicdd](https://github.com/rampant2000/first-cicd)

## Что сделано

- Создан публичный репозиторий `my-first-cicd` на GitHub
- Склонирован в WSL
- Создана структура `.github/workflows/hello.yml`
- Workflow запускается при каждом push
- Проверено выполнение: зелёная галочка в разделе Actions

## Структура проекта

```
my-first-cicd/
├── .github/
│   └── workflows/
│       └── hello.yml
└── README.md
```

## Содержимое `.github/workflows/hello.yml`

```yaml
name: Мой первый workflow
on: [push]
jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v4
      - name: Запустить команду
        run: echo "Привет, мир! Я только что запустил CI!"
```

## Команды

```bash
git clone git@github.com:bobojonanaev2-code/my-first-cicd.git
cd my-first-cicd
mkdir -p .github/workflows
touch .github/workflows/hello.yml
git add .
git commit -m "Add first workflow"
git push origin main
```

## Результат

- Actions: https://github.com/bobojonanaev2-code/my-first-cicd/actions
- Статус: ✅ все шаги прошли успешно

## Скриншоты


### 1. Детали запуска
![Детали запуска](screenshots/01-run-details.jpg)

### 2. Вывод команды
![Вывод echo](screenshots/02-echo-output.png)
