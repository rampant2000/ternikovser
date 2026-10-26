# Самостоятельная работа по DevOps/Pipelines: CI/CD на Go GUI + GH Release

## 1. Создание структуры в корневой домашней папке:
![](./images_go_gui-rls/go_gui-rls_mkdir.png)

## 2. Сборка тестового образа с GUI-зависимостями:
![](./images_go_gui-rls/go_gui-rls_project-build.png)

## 2.5. Генерация go.sum:
![](./images_go_gui-rls/go_gui-rls_go-sum.png)
## 2.5.1. Проверка генерации:
![](./images_go_gui-rls/go_gui-rls_go-sum-test.png)

## 3. Тесты в Docker:
![](./images_go_gui-rls/go_gui-rls_test-1.png)
![](./images_go_gui-rls/go_gui-rls_test-2.png)

## 4. Локальная сборка GUI-бинарника под Linux в Docker
![](./images_go_gui-rls/go_gui-rls_local-build.png)

## 5. Push проекта:
![](./images_go_gui-rls/go_gui-rls_push.png)
### 5.5 Ссылка на новый репозиторий: https://github.com/RFM-r/go-gui

## 6. Создание релиза(GitHub Releases):
![](./images_go_gui-rls/go_gui-rls_pushto-gh-release.png)
![](./images_go_gui-rls/go_gui-rls_in-gh-release.png)

## 7. Скачивание и запуск:
![](./images_go_gui-rls/go_gui-rls_dwnld-and-launch.png)
![](./images_go_gui-rls/go_gui-rls_downloaded-exe.png)

## 8. Тест #2:
![](./images_go_gui-rls/go_gui-rls_new-test.png)

## 8.1. Новый commit и push:
![](./images_go_gui-rls/go_gui-rls_new-push_and_commit.png)

## 8.2. Создание нового тега/новый релиз:
![](./images_go_gui-rls/go_gui-rls_new-pushto-gh-release.png)
![](./images_go_gui-rls/go_gui-rls_new-in-gh-release.png)

## 8.3. Проверка новой версии:
![](./images_go_gui-rls/go_gui-rls_new-dwnld-and-launch.png)